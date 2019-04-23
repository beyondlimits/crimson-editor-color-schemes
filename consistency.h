#ifdef NOCONSISTENCYCHECK
#define consistencycheck() {}
#else
	static void consistencycheck() {
		if (CL_COUNT != sizeof(schema) / sizeof(*schema)) {
			errx(EXIT_FAILURE, "Schema length and CL_COUNT is out of sync.");
		}

		int i;
		long long total = 0;
		for (i = 0; i < CL_COUNT; ++i) {
			if (schema[i].position >= CL_COUNT) {
				errx(EXIT_FAILURE, "Property position of element %d is too large.", i);
			}

			if (schema[i].compare_to >= CL_COUNT) {
				errx(EXIT_FAILURE, "Property compare_to of element %d is too large.", i);
			}

			long long current = 1LL << schema[i].position;

			if (total & current) {
				errx(EXIT_FAILURE, "Duplicate element %d.", i);
			}

			total |= current;
		}

		if (total != (1L << CL_COUNT) - 1) {
			errx(EXIT_FAILURE, "Some elements are missing.");
		}
	}
#endif
