#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "schema.h"
#include "consistency.h"

static const char header[] = {
	'C', 'o', 'l', 'o', 'r', ' ', 'S', 'e', 't',
	't', 'i', 'n', 'g', 's', ' ', '3', '.', '4',
	'5', ' ', 'R', 'e', 'l', 'e', 'a', 's', 'e'
};

int main(int argc, char *argv[])
{
	consistencycheck();

	{
		size_t i = 0;
		char buffer[sizeof(header)];

		do {
			ssize_t n = read(STDIN_FILENO, buffer, sizeof(header) - i);

			if (n < 0) {
				err(EXIT_FAILURE, NULL);
			}

			if (!n || memcmp(buffer, header + i, n)) {
				errx(EXIT_FAILURE, "Header is not correct.");
			}

			i += n;
		} while (i < sizeof(header));
	}

	{
		union color {
			struct { unsigned char r, g, b, a; };
			unsigned int color;
		} buffer[50];

		size_t i = 0;

		do {
			ssize_t n = read(STDIN_FILENO, buffer + i, sizeof(buffer) - i);

			if (n < 0) {
				err(EXIT_FAILURE, NULL);
			}

			if (!n) {
				errx(EXIT_FAILURE, "Premature end of stream.");
			}

			i += n;
		} while (i < sizeof(buffer));

		for (i = 0; i < CL_COUNT; ++i) {
			struct schema s = schema[i];
			union color c = buffer[schema[i].position];

			switch (s.compare_to) {
				case CL_DO_NOT_COMPARE:
					break;
				case CL_SHOULD_BE_ZERO:
					if (!c.color) {
						continue;
					}
					break;
				default:
					if (c.color == buffer[s.compare_to].color) {
						continue;
					}
			}
			printf("%s #%02x%02x%02x", s.name, c.r, c.g, c.b);
			if (c.a) {
				printf("%02x", c.a);
			}
			puts("");
		}
	}
}
