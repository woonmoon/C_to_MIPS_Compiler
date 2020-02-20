/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/c_parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "c_parser.tab.hpp".  */
#ifndef YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/c_parser.y" /* yacc.c:355  */

  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 111 "src/c_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    T_DO = 262,
    T_LSQRBRACKET = 263,
    PTR_OP = 264,
    T_PLUS_PLUS = 265,
    T_MINUS_MINUS = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    T_ADD_ASSIGN = 286,
    T_AMPERSAND = 287,
    T_AND_ASSIGN = 288,
    T_ASSIGN = 289,
    T_AUTO = 290,
    T_BREAK = 291,
    T_CARET = 292,
    T_CASE = 293,
    T_CHAR = 294,
    T_COLON = 295,
    T_COMMA = 296,
    T_CONST = 297,
    T_CONTINUE = 298,
    T_DEFAULT = 299,
    T_DIV_ASSIGN = 300,
    T_SEMICOLON = 301,
    T_DOUBLE = 302,
    T_EQ_OP = 303,
    T_EXCLAMATION = 304,
    T_EXTERN = 305,
    T_FLOAT = 306,
    T_FULLSTOP = 307,
    T_GE_OP = 308,
    T_GOTO = 309,
    T_GREATERTHAN = 310,
    T_LESSTHAN = 311,
    T_INT = 312,
    T_LBRACKET = 313,
    T_LCURLY = 314,
    T_LEFT_ASSIGN = 315,
    T_LEFT_OP = 316,
    T_LE_OP = 317,
    T_LINE = 318,
    T_LONG = 319,
    T_MINUS = 320,
    T_MOD_ASSIGN = 321,
    T_MUL_ASSIGN = 322,
    T_NE_OP = 323,
    T_OR_ASSIGN = 324,
    T_PERCENT = 325,
    T_PLUS = 326,
    T_QUESTIONMARK = 327,
    T_RBRACKET = 328,
    T_RCURLY = 329,
    T_REGISTER = 330,
    T_RETURN = 331,
    T_RIGHT_ASSIGN = 332,
    T_RIGHT_OP = 333,
    T_RSQRBRACKET = 334,
    T_SHORT = 335,
    T_SIGNED = 336,
    T_SLASH = 337,
    T_STAR = 338,
    T_STATIC = 339,
    T_STRING_LITERAL = 340,
    T_STRUCT = 341,
    T_SUB_ASSIGN = 342,
    T_SWITCH = 343,
    T_TILDE = 344,
    T_TYPEDEF = 345,
    T_TYPE_NAME = 346,
    T_UNION = 347,
    T_UNSIGNED = 348,
    T_VOID = 349,
    T_VOLATILE = 350,
    T_XOR_ASSIGN = 351,
    TYPEDEF = 352,
    EXTERN = 353,
    STATIC = 354,
    AUTO = 355,
    REGISTER = 356,
    CHAR = 357,
    SHORT = 358,
    INT = 359,
    LONG = 360,
    SIGNED = 361,
    UNSIGNED = 362,
    FLOAT = 363,
    DOUBLE = 364,
    CONST = 365,
    VOLATILE = 366,
    VOID = 367,
    STRUCT = 368,
    UNION = 369,
    T_ENUM = 370,
    ELLIPSIS = 371,
    CASE = 372,
    DEFAULT = 373,
    T_IF = 374,
    T_ELSE = 375,
    SWITCH = 376,
    T_WHILE = 377,
    DO = 378,
    T_FOR = 379,
    GOTO = 380,
    CONTINUE = 381,
    BREAK = 382,
    RETURN = 383
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/c_parser.y" /* yacc.c:355  */

	ExpressionPtr* expr;
	double number;
	std::string *string;

#line 258 "src/c_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 275 "src/c_parser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    60,    61,    62,    63,    67,    68,    69,
      70,    71,    72,    73,    74,    78,    79,    83,    84,    85,
      86,    87,    88,    92,    93,    94,    95,    96,    97,   101,
     102,   106,   107,   108,   109,   113,   114,   115,   119,   120,
     121,   125,   126,   127,   128,   129,   133,   134,   135,   139,
     140,   144,   145,   149,   150,   154,   155,   159,   160,   164,
     165,   169,   170,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   188,   189,   193,   202,   203,   204,
     205,   206,   207,   221,   222,   223,   224,   225,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     244,   245,   246,   250,   251,   255,   256,   260,   264,   265,
     266,   267,   271,   272,   276,   277,   278,   282,   283,   284,
     288,   289,   293,   294,   298,   299,   303,   304,   308,   309,
     310,   311,   312,   313,   314,   318,   319,   320,   321,   325,
     326,   331,   332,   336,   337,   341,   342,   343,   347,   348,
     352,   353,   357,   358,   359,   363,   364,   365,   366,   367,
     368,   369,   370,   371
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "T_DO", "T_LSQRBRACKET", "PTR_OP",
  "T_PLUS_PLUS", "T_MINUS_MINUS", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "T_ADD_ASSIGN",
  "T_AMPERSAND", "T_AND_ASSIGN", "T_ASSIGN", "T_AUTO", "T_BREAK",
  "T_CARET", "T_CASE", "T_CHAR", "T_COLON", "T_COMMA", "T_CONST",
  "T_CONTINUE", "T_DEFAULT", "T_DIV_ASSIGN", "T_SEMICOLON", "T_DOUBLE",
  "T_EQ_OP", "T_EXCLAMATION", "T_EXTERN", "T_FLOAT", "T_FULLSTOP",
  "T_GE_OP", "T_GOTO", "T_GREATERTHAN", "T_LESSTHAN", "T_INT",
  "T_LBRACKET", "T_LCURLY", "T_LEFT_ASSIGN", "T_LEFT_OP", "T_LE_OP",
  "T_LINE", "T_LONG", "T_MINUS", "T_MOD_ASSIGN", "T_MUL_ASSIGN", "T_NE_OP",
  "T_OR_ASSIGN", "T_PERCENT", "T_PLUS", "T_QUESTIONMARK", "T_RBRACKET",
  "T_RCURLY", "T_REGISTER", "T_RETURN", "T_RIGHT_ASSIGN", "T_RIGHT_OP",
  "T_RSQRBRACKET", "T_SHORT", "T_SIGNED", "T_SLASH", "T_STAR", "T_STATIC",
  "T_STRING_LITERAL", "T_STRUCT", "T_SUB_ASSIGN", "T_SWITCH", "T_TILDE",
  "T_TYPEDEF", "T_TYPE_NAME", "T_UNION", "T_UNSIGNED", "T_VOID",
  "T_VOLATILE", "T_XOR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "T_ENUM", "ELLIPSIS", "CASE", "DEFAULT", "T_IF", "T_ELSE", "SWITCH",
  "T_WHILE", "DO", "T_FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "$accept", "ROOT", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,  -142,  -142,   441,  -142,    27,  -142,   469,   497,   497,
    -142,  -142,    98,  -142,  -142,  -142,  -142,  -142,   142,   297,
     441,  -142,   -42,    52,   -27,   154,   -23,    83,    11,   -17,
     102,    19,  -142,  -142,    87,  -142,    98,  -142,  -142,  -142,
    -142,   742,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,    14,   768,  -142,    23,    13,  -142,
     768,    58,   441,   132,  -142,  -142,   136,   220,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   441,
    -142,  -142,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,  -142,    73,   107,   158,  -142,  -142,   109,   768,
     343,   287,     5,    31,  -142,    35,  -142,   441,   -30,  -142,
    -142,  -142,    91,  -142,  -142,  -142,  -142,  -142,   -42,   -42,
      52,    52,   -27,   -27,   -27,   -27,   154,   154,   -23,    83,
      11,   -17,   102,   103,  -142,  -142,   158,   143,   -18,  -142,
     768,   659,  -142,    12,  -142,  -142,   101,  -142,  -142,  -142,
    -142,  -142,  -142,    29,   602,   602,   602,   112,   141,  -142,
     113,  -142,  -142,     5,    35,   385,   570,  -142,  -142,   441,
    -142,   441,    85,   441,   158,  -142,   685,  -142,  -142,  -142,
     441,    28,   -11,  -142,   148,    45,    26,  -142,   164,  -142,
      16,  -142,  -142,  -142,  -142,  -142,   509,  -142,  -142,  -142,
    -142,   129,  -142,   139,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,   144,    12,  -142,   441,   413,   226,    45,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,   140,  -142,  -142,   145,
      92,  -142,  -142,   217,  -142,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     4,     0,     5,     0,     2,     0,     0,     0,
      23,    28,     0,    26,    25,    24,    27,     7,    17,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      57,    59,    61,    74,     0,     1,     0,    21,    18,    19,
      89,     4,    94,    93,    91,    92,    90,    95,   103,    99,
     104,    96,    88,   125,     0,   109,    97,     0,   150,    98,
     111,     0,     0,     0,    13,    14,     0,     0,    67,    71,
      63,    65,    69,    66,    64,    73,    70,    68,    72,     0,
      29,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,   119,     0,   124,   108,   102,     0,
       0,     0,   135,   152,   151,   153,   110,     0,     0,    12,
      11,     9,     0,    15,    62,    34,    33,    32,    37,    36,
      39,    40,    45,    43,    42,    44,    47,    48,    50,    52,
      54,    56,    58,     0,    75,    22,     0,   122,     0,   120,
       0,     0,   105,     0,   156,    76,     0,    86,    84,   160,
      87,    85,    83,   147,    77,    79,    81,     0,   141,   143,
       0,   139,   137,   136,   154,     0,     0,    30,     8,     0,
      10,     0,     0,     0,     0,   117,     0,   101,   106,   128,
       0,     0,     0,   112,   114,   127,     0,   157,     0,   145,
     152,   146,    78,    80,    82,   161,     0,   155,   140,   138,
     158,     0,   162,     0,    16,    60,   118,   123,   121,   100,
     115,     0,     0,   107,     0,     0,     0,   126,   142,   144,
     159,   163,   129,   113,   116,   131,     0,   148,   134,     0,
       0,   130,   132,     0,   133,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   224,  -142,  -142,    -3,  -142,    -4,    72,   114,
     106,   111,   130,   131,   135,   137,   134,  -142,  -100,   -65,
    -142,    48,   -54,     9,  -142,   -99,  -142,  -142,    84,   -32,
       8,  -142,    18,  -142,    90,    54,  -104,  -141,   -62,   -57,
    -142,   -84,  -142,    36,  -142,   205,   -45,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    17,    18,   122,    80,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      79,    34,   156,   163,   164,    55,    56,    57,   151,   152,
     153,   192,   193,    59,   148,   149,    60,   194,   195,   196,
     173,   167,   168,   169,   240,    61,   170,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   113,   123,     1,    37,    38,    39,   166,   171,    19,
     155,   101,   165,   114,   124,   189,    81,   104,   174,   189,
      58,   110,   199,   184,   110,    93,   108,    35,    82,   189,
     222,   189,   189,    19,    87,   223,   144,   110,    99,   110,
      83,    84,     2,   175,    58,    94,    97,   106,    96,   178,
     221,    88,   190,   225,   113,   172,   185,   221,     3,    19,
     166,   166,   166,   107,    19,   165,   165,   165,   116,   208,
     191,   111,   166,   105,   198,   155,    19,   165,   125,   126,
     127,   215,   109,   155,   191,     4,   191,   198,   112,   111,
     155,   100,   213,   176,   166,   112,   112,    19,    19,   165,
      53,     1,   166,   226,     7,   174,   200,   165,     8,     9,
     118,   112,   112,   177,   214,    95,   209,    85,   201,   188,
      98,   211,   166,    86,   155,   155,   184,   165,   101,   217,
      10,   117,   179,   243,   227,   119,   220,    40,   227,   120,
      41,   200,   239,   181,   101,    42,   145,    11,   143,    43,
      62,    63,    64,    65,   188,    44,    12,   128,   129,   216,
     102,   147,    45,    13,   180,   244,   146,   189,   150,    14,
     234,   236,   110,   202,   203,   204,    19,   183,    46,    47,
     197,    15,   206,     4,    48,   205,   207,    16,   224,    49,
      50,    51,    52,    53,    66,   132,   133,   134,   135,   157,
      67,   130,   131,    40,   136,   137,   106,    89,   230,    90,
      91,    42,   231,    54,   158,    43,    92,   232,   242,   241,
     245,    44,   198,     1,     6,   138,     7,   139,    45,   237,
       8,     9,   140,   142,   186,   141,   182,   159,   218,   160,
     233,   103,   229,     0,    46,    47,     0,   112,   161,     0,
      48,     0,    10,     0,   162,    49,    50,    51,    52,    53,
       0,   157,     2,     0,     0,    40,     0,     0,   106,    11,
       0,     0,     0,    42,     0,     0,   158,    43,    12,    54,
       0,     0,     0,    44,     0,    13,     0,     0,     0,     0,
      45,    14,     0,   121,     0,   110,     0,     0,     0,   238,
       0,   160,     0,    15,     0,     4,    46,    47,     0,    16,
     161,     0,    48,     0,     0,     0,   162,    49,    50,    51,
      52,    53,   157,     0,     0,     0,    40,     0,    68,   106,
      69,    70,     0,     0,    42,     0,     0,   158,    43,     0,
       0,    54,    71,     0,    44,   111,     1,     0,     0,     7,
       0,    45,     0,     8,     9,     0,     0,    72,     0,     0,
     159,     0,   160,    73,    74,     0,    75,    46,    47,     0,
     112,   161,     0,    48,    76,    10,     0,   162,    49,    50,
      51,    52,    53,     0,    77,     2,     0,     0,     1,     0,
       0,     7,    11,    78,     0,     8,     9,     0,     0,     0,
       0,    12,    54,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,    14,     0,     1,    10,     0,     7,
       0,     0,   154,     8,     9,     0,    15,     2,     4,     0,
       0,     0,    16,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     1,    10,     0,     7,     0,     0,
      13,     8,     9,     0,     0,     2,    14,     0,     0,     0,
       0,     0,    11,     0,   210,     0,     0,     0,    15,     0,
       4,    12,     1,    10,    16,     7,     0,     0,    13,     8,
       9,     0,     0,     2,    14,     0,     0,     0,     0,     0,
      11,     0,   235,     0,     0,     0,    15,     0,     4,    12,
       1,    10,    16,     7,     0,     0,    13,     8,     9,     0,
       0,     2,    14,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,    15,     0,     4,    36,     0,    10,
      16,     0,     0,     0,    13,     0,     0,     0,     0,     2,
      14,     0,     0,     0,   157,     0,    11,     0,    40,     0,
       0,   106,    15,     0,     4,     3,    42,     0,    16,   158,
      43,     0,    13,     0,     0,     0,    44,     0,    14,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
      15,     0,     4,     0,   160,     0,    16,     0,     0,    46,
      47,     0,     0,   161,     0,    48,     0,     0,     0,   162,
      49,    50,    51,    52,    53,   157,     0,     0,     0,    40,
       0,     0,   106,     0,     0,     0,     0,    42,     0,     0,
     158,    43,     0,     0,    54,   228,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,   157,     0,     0,
       0,    40,     0,   212,   106,   160,     0,     0,     0,    42,
      46,    47,   158,    43,   161,     0,    48,     0,     0,    44,
     162,    49,    50,    51,    52,    53,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,    46,    47,     0,    54,   161,     0,    48,     0,
       0,     0,   162,    49,    50,    51,    52,    53,    40,     0,
       0,   106,     0,     0,     0,     0,    42,     0,     0,     0,
      43,     0,     0,     0,     0,     0,    44,    54,     0,     0,
       0,     0,     0,    45,    40,     0,     0,   106,     0,     0,
       0,     0,    42,   187,     0,     0,    43,     0,     0,    46,
      47,     0,    44,     0,     0,    48,     0,     0,     0,    45,
      49,    50,    51,    52,    53,     0,     0,     0,     0,   219,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
       0,    48,     0,     0,    54,     0,    49,    50,    51,    52,
      53,  -124,     0,     0,  -124,     0,     0,     0,     0,  -124,
       0,     0,     0,  -124,     0,     0,     0,     0,     0,  -124,
      54,     0,     0,     0,     0,     0,  -124,    40,     0,     0,
     106,     0,     0,     0,     0,    42,     0,     0,     0,    43,
       0,     0,  -124,  -124,     0,    44,     0,     0,  -124,     0,
       0,     0,    45,  -124,  -124,  -124,  -124,  -124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
       0,     0,     0,     0,    48,     0,     0,  -124,     0,    49,
      50,    51,    52,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54
};

static const yytype_int16 yycheck[] =
{
       3,    58,    67,     3,     7,     8,     9,   111,   112,    12,
     110,    41,   111,    58,    79,     3,    20,     3,   113,     3,
      12,     8,   163,    41,     8,    48,     3,     0,    70,     3,
      41,     3,     3,    36,    61,    46,   101,     8,    19,     8,
      82,    83,    42,     8,    36,    68,    63,    42,    37,    79,
     191,    78,    40,     8,   111,   112,    74,   198,    58,    62,
     164,   165,   166,    55,    67,   164,   165,   166,    60,   173,
      58,    58,   176,    59,    58,   175,    79,   176,    82,    83,
      84,   181,    59,   183,    58,    85,    58,    58,    83,    58,
     190,    72,   176,    58,   198,    83,    83,   100,   101,   198,
      95,     3,   206,    58,     6,   200,   163,   206,    10,    11,
      62,    83,    83,   117,   179,    32,   173,    65,   163,   151,
      18,   175,   226,    71,   224,   225,    41,   226,    41,   183,
      32,    73,    41,    41,   196,     3,   190,    39,   200,     3,
      42,   198,   226,    40,    41,    47,    73,    49,   100,    51,
       8,     9,    10,    11,   186,    57,    58,    85,    86,    74,
      73,     3,    64,    65,    73,    73,    59,     3,    59,    71,
     224,   225,     8,   164,   165,   166,   179,    34,    80,    81,
      79,    83,    41,    85,    86,    73,    73,    89,    40,    91,
      92,    93,    94,    95,    52,    89,    90,    91,    92,    35,
      58,    87,    88,    39,    93,    94,    42,    53,    79,    55,
      56,    47,    73,   115,    50,    51,    62,    73,    73,    79,
       3,    57,    58,     3,     0,    95,     6,    96,    64,     3,
      10,    11,    97,    99,   150,    98,   146,    73,   184,    75,
     222,    36,   206,    -1,    80,    81,    -1,    83,    84,    -1,
      86,    -1,    32,    -1,    90,    91,    92,    93,    94,    95,
      -1,    35,    42,    -1,    -1,    39,    -1,    -1,    42,    49,
      -1,    -1,    -1,    47,    -1,    -1,    50,    51,    58,   115,
      -1,    -1,    -1,    57,    -1,    65,    -1,    -1,    -1,    -1,
      64,    71,    -1,    73,    -1,     8,    -1,    -1,    -1,    73,
      -1,    75,    -1,    83,    -1,    85,    80,    81,    -1,    89,
      84,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    35,    -1,    -1,    -1,    39,    -1,    31,    42,
      33,    34,    -1,    -1,    47,    -1,    -1,    50,    51,    -1,
      -1,   115,    45,    -1,    57,    58,     3,    -1,    -1,     6,
      -1,    64,    -1,    10,    11,    -1,    -1,    60,    -1,    -1,
      73,    -1,    75,    66,    67,    -1,    69,    80,    81,    -1,
      83,    84,    -1,    86,    77,    32,    -1,    90,    91,    92,
      93,    94,    95,    -1,    87,    42,    -1,    -1,     3,    -1,
      -1,     6,    49,    96,    -1,    10,    11,    -1,    -1,    -1,
      -1,    58,   115,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,     3,    32,    -1,     6,
      -1,    -1,    79,    10,    11,    -1,    83,    42,    85,    -1,
      -1,    -1,    89,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,     3,    32,    -1,     6,    -1,    -1,
      65,    10,    11,    -1,    -1,    42,    71,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    79,    -1,    -1,    -1,    83,    -1,
      85,    58,     3,    32,    89,     6,    -1,    -1,    65,    10,
      11,    -1,    -1,    42,    71,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    79,    -1,    -1,    -1,    83,    -1,    85,    58,
       3,    32,    89,     6,    -1,    -1,    65,    10,    11,    -1,
      -1,    42,    71,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    58,    -1,    32,
      89,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    42,
      71,    -1,    -1,    -1,    35,    -1,    49,    -1,    39,    -1,
      -1,    42,    83,    -1,    85,    58,    47,    -1,    89,    50,
      51,    -1,    65,    -1,    -1,    -1,    57,    -1,    71,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    -1,    75,    -1,    89,    -1,    -1,    80,
      81,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    35,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    -1,    -1,   115,   116,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    35,    -1,    -1,
      -1,    39,    -1,    73,    42,    75,    -1,    -1,    -1,    47,
      80,    81,    50,    51,    84,    -1,    86,    -1,    -1,    57,
      90,    91,    92,    93,    94,    95,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    -1,   115,    84,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,   115,    -1,    -1,
      -1,    -1,    -1,    64,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    74,    -1,    -1,    51,    -1,    -1,    80,
      81,    -1,    57,    -1,    -1,    86,    -1,    -1,    -1,    64,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,   115,    -1,    91,    92,    93,    94,
      95,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
     115,    -1,    -1,    -1,    -1,    -1,    64,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    -1,    80,    81,    -1,    57,    -1,    -1,    86,    -1,
      -1,    -1,    64,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,   115,    -1,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    42,    58,    85,   130,   131,     6,    10,    11,
      32,    49,    58,    65,    71,    83,    89,   131,   132,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   150,     0,    58,   134,   134,   134,
      39,    42,    47,    51,    57,    64,    80,    81,    86,    91,
      92,    93,    94,    95,   115,   154,   155,   156,   159,   162,
     165,   174,     8,     9,    10,    11,    52,    58,    31,    33,
      34,    45,    60,    66,    67,    69,    77,    87,    96,   149,
     134,   136,    70,    82,    83,    65,    71,    61,    78,    53,
      55,    56,    62,    48,    68,    32,    37,    63,    18,    19,
      72,    41,    73,   174,     3,    59,    42,   159,     3,    59,
       8,    58,    83,   168,   175,   176,   159,    73,   150,     3,
       3,    73,   133,   148,   148,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   139,   140,   140,   141,   142,
     143,   144,   145,   150,   148,    73,    59,     3,   163,   164,
      59,   157,   158,   159,    79,   147,   151,    35,    50,    73,
      75,    84,    90,   152,   153,   154,   165,   170,   171,   172,
     175,   165,   168,   169,   176,     8,    58,   136,    79,    41,
      73,    40,   163,    34,    41,    74,   157,    74,   158,     3,
      40,    58,   160,   161,   166,   167,   168,    79,    58,   166,
     168,   175,   152,   152,   152,    73,    41,    73,   165,   168,
      79,   151,    73,   170,   148,   147,    74,   151,   164,    74,
     151,   166,    41,    46,    40,     8,    58,   167,   116,   172,
      79,    73,    73,   161,   151,    79,   151,     3,    73,   170,
     173,    79,    73,    41,    73,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   129,   130,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   137,   138,   138,   138,   139,   139,
     139,   140,   140,   140,   140,   140,   141,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   150,   151,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     159,   159,   160,   160,   161,   161,   161,   162,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   172,   173,   173,
     174,   174,   175,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 57 "src/c_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].expr); }
#line 1706 "src/c_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "src/c_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Identifier(*(yyvsp[0].string))}
#line 1712 "src/c_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "src/c_parser.y" /* yacc.c:1646  */
    {}
#line 1718 "src/c_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1722 "src/c_parser.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 460 "src/c_parser.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
