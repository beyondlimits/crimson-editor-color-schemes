#define CL_SHOULD_BE_ZERO -2
#define CL_DO_NOT_COMPARE -1

#define CL_BACKGROUND      0
#define CL_LEFTMARGIN      1
#define CL_ACTIVELINE      2
#define CL_RANGE1          3
#define CL_RANGE2          4
#define CL_BACKGROUND5     5
#define CL_BACKGROUND6     6
#define CL_BACKGROUND7     7
#define CL_BACKGROUND8     8
#define CL_BACKGROUND9     9
#define CL_TEXT0          10
#define CL_RETURN         11
#define CL_LINENUMBER     12
#define CL_TAB            13
#define CL_SPACE          14
#define CL_CONSTANT       15
#define CL_STRING         16
#define CL_STRING2        17
#define CL_STRING3        18
#define CL_COMMENT        19
#define CL_COMMENTON      20
#define CL_COMMENTOFF     21
#define CL_SHADOW         22
#define CL_SHADOWOFF      23
#define CL_HIGHLIGHT      24
#define CL_HIGHLIGHTOFF   25
#define CL_RANGE1BEGIN    26
#define CL_RANGE1END      27
#define CL_RANGE2BEGIN    28
#define CL_RANGE2END      29
#define CL_VARIABLE       30
#define CL_KEYWORD0       31
#define CL_KEYWORD1       32
#define CL_KEYWORD2       33
#define CL_KEYWORD3       34
#define CL_KEYWORD4       35
#define CL_KEYWORD5       36
#define CL_KEYWORD6       37
#define CL_KEYWORD7       38
#define CL_KEYWORD8       39
#define CL_KEYWORD9       40
#define CL_TEXT           41
#define CL_WRONGWORD      42
#define CL_DELIMITER      43
#define CL_DBCHAR         44
#define CL_GRAPH          45
#define CL_TEXT46         46
#define CL_TEXT47         47
#define CL_TEXT48         48
#define CL_TEXT49         49
#define CL_COUNT          50

static const struct schema {
	char *name;
	unsigned position, compare_to;
} schema[] = {
	{"background"  , CL_BACKGROUND  , CL_DO_NOT_COMPARE},
	{"leftmargin"  , CL_LEFTMARGIN  , CL_DO_NOT_COMPARE},
	{"activeline"  , CL_ACTIVELINE  , CL_DO_NOT_COMPARE},
	{"range1"      , CL_RANGE1      , CL_DO_NOT_COMPARE},
	{"range2"      , CL_RANGE2      , CL_DO_NOT_COMPARE},
	{"text"        , CL_TEXT        , CL_DO_NOT_COMPARE},
	{"delimiter"   , CL_DELIMITER   , CL_DO_NOT_COMPARE},
	{"linenumber"  , CL_LINENUMBER  , CL_DO_NOT_COMPARE},
	{"constant"    , CL_CONSTANT    , CL_DO_NOT_COMPARE},
	{"string"      , CL_STRING      , CL_DO_NOT_COMPARE},
	{"comment"     , CL_COMMENT     , CL_DO_NOT_COMPARE},
	{"shadow"      , CL_SHADOW      , CL_DO_NOT_COMPARE},
	{"highlight"   , CL_HIGHLIGHT   , CL_DO_NOT_COMPARE},
	{"variable"    , CL_VARIABLE    , CL_DO_NOT_COMPARE},
	{"keyword0"    , CL_KEYWORD0    , CL_DO_NOT_COMPARE},
	{"keyword1"    , CL_KEYWORD1    , CL_DO_NOT_COMPARE},
	{"keyword2"    , CL_KEYWORD2    , CL_DO_NOT_COMPARE},
	{"keyword3"    , CL_KEYWORD3    , CL_DO_NOT_COMPARE},
	{"keyword4"    , CL_KEYWORD4    , CL_DO_NOT_COMPARE},
	{"keyword5"    , CL_KEYWORD5    , CL_DO_NOT_COMPARE},
	{"keyword6"    , CL_KEYWORD6    , CL_DO_NOT_COMPARE},
	{"keyword7"    , CL_KEYWORD7    , CL_DO_NOT_COMPARE},
	{"keyword8"    , CL_KEYWORD8    , CL_DO_NOT_COMPARE},
	{"keyword9"    , CL_KEYWORD9    , CL_DO_NOT_COMPARE},

	{"wrongword"   , CL_WRONGWORD   , CL_TEXT          },
	{"dbchar"      , CL_DBCHAR      , CL_TEXT          },
	{"graph"       , CL_GRAPH       , CL_TEXT          },

	{"return"      , CL_RETURN      , CL_DELIMITER     },
	{"tab"         , CL_TAB         , CL_DELIMITER     },
	{"space"       , CL_SPACE       , CL_DELIMITER     },

	{"string2"     , CL_STRING2     , CL_SHOULD_BE_ZERO},
	{"string3"     , CL_STRING3     , CL_SHOULD_BE_ZERO},
	{"commenton"   , CL_COMMENTON   , CL_SHOULD_BE_ZERO},
	{"commentoff"  , CL_COMMENTOFF  , CL_SHOULD_BE_ZERO},
	{"shadowoff"   , CL_SHADOWOFF   , CL_SHOULD_BE_ZERO},
	{"highlightoff", CL_HIGHLIGHTOFF, CL_SHOULD_BE_ZERO},
	{"range1begin" , CL_RANGE1BEGIN , CL_SHOULD_BE_ZERO},
	{"range1end"   , CL_RANGE1END   , CL_SHOULD_BE_ZERO},
	{"range2begin" , CL_RANGE2BEGIN , CL_SHOULD_BE_ZERO},
	{"range2end"   , CL_RANGE2END   , CL_SHOULD_BE_ZERO},

	{"background5" , CL_BACKGROUND5 , CL_SHOULD_BE_ZERO},
	{"background6" , CL_BACKGROUND6 , CL_SHOULD_BE_ZERO},
	{"background7" , CL_BACKGROUND7 , CL_SHOULD_BE_ZERO},
	{"background8" , CL_BACKGROUND8 , CL_SHOULD_BE_ZERO},
	{"background9" , CL_BACKGROUND9 , CL_SHOULD_BE_ZERO},

	{"text0"       , CL_TEXT0       , CL_SHOULD_BE_ZERO},
	{"text46"      , CL_TEXT46      , CL_SHOULD_BE_ZERO},
	{"text47"      , CL_TEXT47      , CL_SHOULD_BE_ZERO},
	{"text48"      , CL_TEXT48      , CL_SHOULD_BE_ZERO},
	{"text49"      , CL_TEXT49      , CL_SHOULD_BE_ZERO},
};
