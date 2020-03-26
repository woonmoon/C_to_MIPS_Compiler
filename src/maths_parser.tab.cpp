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

#line 67 "src/maths_parser.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "maths_parser.tab.hpp".  */
#ifndef YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/maths_parser.y" /* yacc.c:355  */

  #include "ast.hpp"
  #define RED     "\033[31m"      /* Red */
  #define RESET   "\033[0m"
  #include <cassert>

  extern const Node *g_root; // A way of getting the AST out


  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 113 "src/maths_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_STAR = 258,
    T_DIVIDE = 259,
    T_PLUS = 260,
    T_MINUS = 261,
    T_EXPONENT = 262,
    T_COMMA = 263,
    T_MOD = 264,
    T_LESSTHAN_EQUAL = 265,
    T_GREATERTHAN_EQUAL = 266,
    T_LSHIFT = 267,
    T_RSHIFT = 268,
    T_LESSTHAN = 269,
    T_GREATERTHAN = 270,
    T_EQUALS = 271,
    T_NOT_EQUALS = 272,
    T_AND = 273,
    T_XOR = 274,
    T_OR = 275,
    T_AND_OP = 276,
    T_OR_OP = 277,
    T_QUESTION = 278,
    T_LBRACKET = 279,
    T_RBRACKET = 280,
    T_LCURLY = 281,
    T_RCURLY = 282,
    T_LSQUARE = 283,
    T_RSQUARE = 284,
    T_SEMICOLON = 285,
    T_COLON = 286,
    T_LOG = 287,
    T_EXP = 288,
    T_SQRT = 289,
    T_NOT = 290,
    T_INVERT = 291,
    T_IF = 292,
    T_ELSE = 293,
    T_WHILE = 294,
    T_RETURN = 295,
    T_INT = 296,
    T_VOID = 297,
    T_STRUCT = 298,
    T_UNION = 299,
    T_ENUM = 300,
    T_CONTINUE = 301,
    T_BREAK = 302,
    T_FOR = 303,
    T_ASSIGN = 304,
    T_PLUS_EQ = 305,
    T_MINUS_EQ = 306,
    T_TIMES_EQ = 307,
    T_DIV_EQ = 308,
    T_MOD_EQ = 309,
    T_AND_EQ = 310,
    T_OR_EQ = 311,
    T_XOR_EQ = 312,
    T_LSHIFT_EQ = 313,
    T_RSHIFT_EQ = 314,
    T_CONSTANT = 315,
    T_IDENTIFIER = 316,
    T_TYPEDEF = 317,
    T_CONST = 318,
    T_VOLATILE = 319,
    T_PLUS_PLUS = 320,
    T_MINUS_MINUS = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "src/maths_parser.y" /* yacc.c:355  */

  Node *expr;
  Expression* actualExpression;
  List *exprList;
  double number;
  yytokentype token;
  std::string *string;

#line 201 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   767

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    69,    70,    71,    72,    73,
      75,    76,    79,    80,    81,    82,    84,    85,    86,    87,
      88,    89,    92,    93,    96,    97,    98,    99,   102,   103,
     104,   107,   108,   109,   112,   113,   114,   115,   116,   119,
     120,   121,   124,   125,   128,   129,   132,   133,   136,   137,
     140,   141,   144,   145,   148,   149,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   182,   183,   186,
     189,   190,   193,   194,   197,   200,   201,   202,   203,   208,
     211,   212,   222,   223,   224,   225,   237,   238,   239,   242,
     243,   246,   247,   250,   251,   256,   257,   258,   259,   260,
     261,   262,   265,   266,   267,   268,   271,   272,   275,   278,
     279,   282,   283,   284,   287,   288,   291,   292,   295,   296,
     297,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     311,   319,   320,   321,   322,   323,   324,   327,   330,   331,
     332,   333,   337,   338,   341,   342,   345,   346,   349,   350,
     351,   354,   355,   356,   357,   360,   361,   362,   363,   364,
     365,   368,   369,   372,   373,   376,   377,   378,   379,   382,
     383,   386,   387,   390,   391,   394
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STAR", "T_DIVIDE", "T_PLUS",
  "T_MINUS", "T_EXPONENT", "T_COMMA", "T_MOD", "T_LESSTHAN_EQUAL",
  "T_GREATERTHAN_EQUAL", "T_LSHIFT", "T_RSHIFT", "T_LESSTHAN",
  "T_GREATERTHAN", "T_EQUALS", "T_NOT_EQUALS", "T_AND", "T_XOR", "T_OR",
  "T_AND_OP", "T_OR_OP", "T_QUESTION", "T_LBRACKET", "T_RBRACKET",
  "T_LCURLY", "T_RCURLY", "T_LSQUARE", "T_RSQUARE", "T_SEMICOLON",
  "T_COLON", "T_LOG", "T_EXP", "T_SQRT", "T_NOT", "T_INVERT", "T_IF",
  "T_ELSE", "T_WHILE", "T_RETURN", "T_INT", "T_VOID", "T_STRUCT",
  "T_UNION", "T_ENUM", "T_CONTINUE", "T_BREAK", "T_FOR", "T_ASSIGN",
  "T_PLUS_EQ", "T_MINUS_EQ", "T_TIMES_EQ", "T_DIV_EQ", "T_MOD_EQ",
  "T_AND_EQ", "T_OR_EQ", "T_XOR_EQ", "T_LSHIFT_EQ", "T_RSHIFT_EQ",
  "T_CONSTANT", "T_IDENTIFIER", "T_TYPEDEF", "T_CONST", "T_VOLATILE",
  "T_PLUS_PLUS", "T_MINUS_MINUS", "$accept", "PRIMARY_EXPRESSION",
  "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION",
  "UNARY_OPERATOR", "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION",
  "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION",
  "EQUALITY_EXPRESSION", "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION",
  "INCLUSIVE_OR_EXPRESSION", "LOGICAL_AND_EXPRESSION",
  "LOGICAL_OR_EXPRESSION", "CONDITIONAL_EXPRESSION",
  "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR", "EXPRESSION",
  "CONSTANT_EXPRESSION", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "STORAGE_CLASS_SPECIFIER", "TYPE_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER",
  "STRUCT_OR_UNION", "SPECIFIER_QUALIFIER_LIST", "ENUM_SPECIFIER",
  "ENUMERATOR_LIST", "ENUMERATOR", "TYPE_QUALIFIER", "DIRECT_DECLARATOR",
  "POINTER", "TYPE_QUALIFIER_LIST", "PARAMETER_TYPE_LIST",
  "PARAMETER_LIST", "PARAMETER_DECLARATION", "IDENTIFIER_LIST",
  "TYPE_NAME", "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR",
  "INITIALIZER", "STATEMENT", "LABELED_STATEMENT", "COMPOUND_STATEMENT",
  "STATEMENT_LIST", "EXPRESSION_STATEMENT", "SELECTION_STATEMENT",
  "ITERATION_STATEMENT", "JUMP_STATEMENT", "DECLARATION_SPECIFIERS",
  "DECLARATOR", "DECLARATION_LIST", "FUNCTION_DEFINITION", "DECLARATION",
  "EXTERNAL_DECLARATION", "TRANSLATION_UNIT", "ROOT", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -165

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-165)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     118,    44,    25,  -165,  -165,  -165,  -165,     4,  -165,  -165,
    -165,  -165,   682,   682,  -165,   -17,  -165,   682,   120,     0,
      42,   692,  -165,  -165,  -165,   118,    17,  -165,  -165,    44,
      48,    33,    71,  -165,  -165,  -165,  -165,   142,   453,   120,
    -165,    34,  -165,   668,   207,  -165,    42,   692,  -165,  -165,
    -165,  -165,  -165,  -165,    64,    10,  -165,    33,  -165,  -165,
     100,   119,  -165,    97,   111,  -165,  -165,  -165,  -165,   403,
    -165,  -165,  -165,  -165,  -165,   592,   592,  -165,     3,  -165,
     630,  -165,   218,    57,   177,   163,   191,   114,   124,   144,
     148,   213,  -165,   162,    25,  -165,   630,  -165,   692,  -165,
    -165,   147,   174,   467,   170,   172,   185,   180,   708,  -165,
    -165,    40,  -165,  -165,  -165,   305,  -165,  -165,  -165,  -165,
     256,   183,  -165,  -165,   630,    33,  -165,    30,  -165,   682,
     184,  -165,   618,   475,    32,  -165,   128,  -165,   101,   152,
      26,   152,   233,   630,  -165,  -165,   519,  -165,  -165,  -165,
     630,   630,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   630,   630,   630,   630,   630,   630,   630,   630,  -165,
    -165,  -165,  -165,  -165,   630,   630,  -165,    50,  -165,  -165,
     542,   389,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,   630,   630,  -165,  -165,  -165,  -165,   351,
    -165,  -165,  -165,  -165,  -165,  -165,   235,   252,  -165,   249,
     128,   658,   558,  -165,  -165,   644,   164,  -165,  -165,   630,
    -165,   104,  -165,  -165,  -165,  -165,   218,   218,    57,    57,
     177,   177,   177,   177,   163,   163,   191,   114,   124,   144,
     148,    43,   108,   109,  -165,   542,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,   254,  -165,   255,  -165,   630,  -165,
     630,   389,   389,   565,  -165,  -165,  -165,  -165,   243,  -165,
     389,   115,   389,  -165,   389,  -165,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   102,     0,    76,    75,    80,    81,     0,    95,    74,
      93,    94,   155,   157,    77,     0,    78,   159,   162,     0,
       0,     0,   171,   172,   173,   175,     0,   106,   104,   103,
       0,     0,    88,   156,   158,    79,   160,     0,     0,   161,
     169,     0,    70,    72,     0,   168,     0,     0,   163,   174,
       1,   107,   105,    96,    91,     0,    89,     0,    99,   114,
       0,   108,   109,     0,   113,    16,    17,    18,    19,     0,
     101,    20,    21,     3,     2,     0,     0,     5,    12,    22,
       0,    24,    28,    31,    34,    39,    42,    44,    46,    48,
      50,    52,    69,     0,     0,   170,     0,   166,     0,   138,
     144,     0,     0,     0,     0,     0,     0,     2,    22,    54,
      67,     0,   142,   131,   132,     0,   133,   134,   135,   136,
       0,    72,   167,   164,     0,     0,    86,     0,    97,     0,
       0,    98,     0,     0,   118,   112,   119,   111,     0,    83,
     116,    85,     0,     0,    14,    15,     0,     8,     9,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
      71,   130,    73,   165,     0,     0,   151,     0,   153,   154,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,   145,   139,   143,   140,     0,
      92,    90,    87,   110,   115,   122,     0,     0,   123,     0,
     120,     0,     0,     4,    82,     0,   118,   117,    84,     0,
       6,     0,    10,    25,    26,    27,    29,    30,    32,    33,
      37,    38,    35,    36,    40,    41,    43,    45,    47,    49,
      51,     0,     0,     0,   152,     0,   137,    55,    68,   141,
     127,   121,   124,   128,     0,   125,     0,    23,     0,     7,
       0,     0,     0,     0,   129,   126,    11,    53,   146,   148,
       0,     0,     0,   149,     0,   147,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,  -165,   -44,  -165,   -68,   103,   110,    81,
     102,   122,   123,   125,   139,   121,  -165,   -37,   -93,  -165,
     -64,  -114,  -165,   195,  -165,   -49,  -165,  -165,   -21,  -165,
     237,   181,     6,   -15,    14,  -165,   -35,  -165,   178,  -165,
    -165,   -51,  -128,  -165,  -104,  -165,    -7,   189,  -164,  -165,
    -165,  -165,     9,    21,   232,  -165,     8,   287,  -165,  -165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    77,    78,   221,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   109,   110,   193,
     111,    93,    41,    42,    12,    13,    14,    15,   140,    16,
      55,    56,    17,    18,    19,    29,   206,    61,    62,    63,
     142,   207,   136,   172,   112,   113,   114,   115,   116,   117,
     118,   119,    46,    21,    47,    22,    48,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     108,    92,    60,   171,    39,   138,   210,    27,    23,    20,
     200,   197,   149,   135,    45,    28,   245,    50,   125,   209,
     139,    33,    34,    30,     2,   108,    36,   146,     1,     1,
      31,   144,   145,    23,    20,    51,    97,   126,   125,   177,
     122,    43,    94,    52,    35,     1,    64,     1,   194,     2,
     215,   194,   108,   222,   133,   123,   132,   202,   194,   108,
     133,     8,   153,   154,    95,    32,     2,   121,   147,   148,
     195,   108,    40,    53,   260,   141,   108,   246,   134,   138,
     244,   263,   223,   224,   225,   137,     8,    92,   210,   217,
     139,   173,   139,     8,    54,   197,    92,    57,   256,   108,
     247,   248,   108,     8,   241,   130,   123,    10,    11,   194,
     242,   243,   258,   124,     1,   121,   194,   194,   214,    39,
     218,     1,   131,   194,   108,   128,   213,   129,   123,   259,
     108,   108,   163,   261,   262,   132,   108,   108,    64,   133,
     274,    64,     2,   164,    37,   141,   134,   141,    38,   108,
     108,   257,   211,    30,   216,   108,   212,   268,   269,     3,
       4,     5,     6,     7,   165,   266,   273,    58,   275,   166,
     276,   174,     8,   157,   158,    92,   254,   159,   160,     8,
       9,    10,    11,     3,     4,     5,     6,     7,   215,   155,
     156,   169,   133,     3,     4,     5,     6,     7,   175,   271,
     178,   108,   179,    59,     9,    10,    11,   161,   162,   180,
      65,   181,    66,    67,   108,    10,    11,   108,   108,   108,
      64,   150,   151,   267,    64,    68,   108,   152,   108,   216,
     108,    69,    96,    44,    99,   167,   168,   100,   230,   231,
     232,   233,    71,    72,   101,   204,   102,   103,     3,     4,
       5,     6,     7,   104,   105,   106,   226,   227,   219,    65,
     250,    66,    67,   234,   235,   228,   229,    73,   107,     9,
      10,    11,    75,    76,    68,    98,   120,   251,   252,   264,
      69,   272,    44,   198,   265,   236,   100,   237,   240,   170,
     238,    71,    72,   101,   127,   102,   103,     3,     4,     5,
       6,     7,   104,   105,   106,   239,   201,   203,    65,   199,
      66,    67,    49,     0,     0,     0,    73,   107,     9,    10,
      11,    75,    76,    68,     0,     0,     0,     0,     0,    69,
       0,    44,   196,     0,     0,   100,     0,     0,     0,     0,
      71,    72,   101,     0,   102,   103,     0,     0,     0,     0,
       0,   104,   105,   106,    65,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,    73,   107,     0,     0,    68,
      75,    76,     0,     0,     0,    69,     0,    44,   249,     0,
       0,   100,     0,     0,     0,     0,    71,    72,   101,     0,
     102,   103,    65,     0,    66,    67,     0,   104,   105,   106,
       0,     0,     0,     0,     0,     0,    65,    68,    66,    67,
       0,    73,   107,    69,     0,    44,    75,    76,     0,   100,
       0,    68,     0,     0,    71,    72,   101,    69,   102,   103,
       0,     0,     0,     0,     0,   104,   105,   106,    71,    72,
       0,     0,     0,     0,     3,     4,     5,     6,     7,    73,
     107,     0,     0,     0,    75,    76,    65,     0,    66,    67,
       0,     0,     0,    73,    74,     0,    10,    11,    75,    76,
      65,    68,    66,    67,     0,     0,     0,    69,    65,     0,
      66,    67,    70,     0,     0,    68,     0,     0,    71,    72,
       0,    69,     0,    68,     0,     0,     0,   176,     0,    69,
       0,     0,    71,    72,   208,     0,     0,     0,     0,     0,
      71,    72,     0,    73,    74,     0,     0,     0,    75,    76,
       0,     0,    65,     0,    66,    67,     0,    73,    74,     0,
       0,     0,    75,    76,     0,    73,    74,    68,     0,     0,
      75,    76,     0,    69,   220,    65,     0,    66,    67,     0,
       0,     0,     0,     0,    71,    72,     0,     0,     0,     0,
      68,    65,     0,    66,    67,     0,    69,     0,    65,     0,
      66,    67,   100,     0,     0,     0,    68,    71,    72,    73,
      74,     0,    69,    68,    75,    76,     0,   255,     0,    69,
     270,     0,     0,    71,    72,    65,     0,    66,    67,     0,
      71,    72,    73,    74,     0,     0,     0,    75,    76,     0,
      68,     0,     0,     0,     0,     0,   143,     0,    73,    74,
       0,     1,     0,    75,    76,    73,    74,    71,    72,     0,
      75,    76,     0,    65,     0,    66,    67,     0,     0,     0,
       0,     0,   132,   205,     0,     0,   133,     1,    68,     0,
       0,     0,    73,    74,    69,     0,     0,    75,    76,     3,
       4,     5,     6,     7,     0,    71,    72,     0,   215,   205,
       0,     0,   133,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,   253,     0,     3,     4,     5,     6,     7,
      73,    74,     0,     0,    44,    75,    76,     0,     0,     3,
       4,     5,     6,     7,     0,     0,     9,    10,    11,     3,
       4,     5,     6,     7,     0,     0,     0,    96,    44,     0,
       9,    10,    11,     3,     4,     5,     6,     7,     0,     0,
       9,    10,    11,     3,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192
};

static const yytype_int16 yycheck[] =
{
      44,    38,    37,    96,    19,    69,   134,     1,     0,     0,
     124,   115,    80,    64,    21,     1,   180,     0,     8,   133,
      69,    12,    13,     2,    24,    69,    17,    24,     3,     3,
      26,    75,    76,    25,    25,    29,    43,    27,     8,   103,
      47,    20,     8,    29,    61,     3,    37,     3,     8,    24,
      24,     8,    96,   146,    28,    47,    24,    27,     8,   103,
      28,    61,     5,     6,    30,    61,    24,    46,    65,    66,
      30,   115,    30,    25,    31,    69,   120,   181,    64,   143,
      30,   245,   150,   151,   152,    64,    61,   124,   216,   140,
     139,    98,   141,    61,    61,   199,   133,    26,   212,   143,
     193,   194,   146,    61,   168,     8,    98,    63,    64,     8,
     174,   175,     8,    49,     3,    94,     8,     8,   139,   134,
     141,     3,    25,     8,   168,    25,    25,     8,   120,    25,
     174,   175,    18,    25,    25,    24,   180,   181,   129,    28,
      25,   132,    24,    19,    24,   139,   132,   141,    28,   193,
     194,   219,    24,   132,   140,   199,    28,   261,   262,    41,
      42,    43,    44,    45,    20,   258,   270,    25,   272,    21,
     274,    24,    61,    10,    11,   212,   211,    14,    15,    61,
      62,    63,    64,    41,    42,    43,    44,    45,    24,    12,
      13,    29,    28,    41,    42,    43,    44,    45,    24,   263,
      30,   245,    30,    61,    62,    63,    64,    16,    17,    24,
       3,    31,     5,     6,   258,    63,    64,   261,   262,   263,
     211,     3,     4,   260,   215,    18,   270,     9,   272,   215,
     274,    24,    49,    26,    27,    22,    23,    30,   157,   158,
     159,   160,    35,    36,    37,    61,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   153,   154,    25,     3,
      25,     5,     6,   161,   162,   155,   156,    60,    61,    62,
      63,    64,    65,    66,    18,    43,    44,    25,    29,    25,
      24,    38,    26,    27,    29,   163,    30,   164,   167,    94,
     165,    35,    36,    37,    57,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   166,   125,   129,     3,   120,
       5,     6,    25,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,     3,    -1,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    18,
      65,    66,    -1,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,     3,    -1,     5,     6,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    18,     5,     6,
      -1,    60,    61,    24,    -1,    26,    65,    66,    -1,    30,
      -1,    18,    -1,    -1,    35,    36,    37,    24,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    60,
      61,    -1,    -1,    -1,    65,    66,     3,    -1,     5,     6,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
       3,    18,     5,     6,    -1,    -1,    -1,    24,     3,    -1,
       5,     6,    29,    -1,    -1,    18,    -1,    -1,    35,    36,
      -1,    24,    -1,    18,    -1,    -1,    -1,    30,    -1,    24,
      -1,    -1,    35,    36,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    60,    61,    -1,    -1,    -1,    65,    66,
      -1,    -1,     3,    -1,     5,     6,    -1,    60,    61,    -1,
      -1,    -1,    65,    66,    -1,    60,    61,    18,    -1,    -1,
      65,    66,    -1,    24,    25,     3,    -1,     5,     6,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      18,     3,    -1,     5,     6,    -1,    24,    -1,     3,    -1,
       5,     6,    30,    -1,    -1,    -1,    18,    35,    36,    60,
      61,    -1,    24,    18,    65,    66,    -1,    29,    -1,    24,
      25,    -1,    -1,    35,    36,     3,    -1,     5,     6,    -1,
      35,    36,    60,    61,    -1,    -1,    -1,    65,    66,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    60,    61,
      -1,     3,    -1,    65,    66,    60,    61,    35,    36,    -1,
      65,    66,    -1,     3,    -1,     5,     6,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    28,     3,    18,    -1,
      -1,    -1,    60,    61,    24,    -1,    -1,    65,    66,    41,
      42,    43,    44,    45,    -1,    35,    36,    -1,    24,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    25,    -1,    41,    42,    43,    44,    45,
      60,    61,    -1,    -1,    26,    65,    66,    -1,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    62,    63,    64,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    49,    26,    -1,
      62,    63,    64,    41,    42,    43,    44,    45,    -1,    -1,
      62,    63,    64,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    41,    42,    43,    44,    45,    61,    62,
      63,    64,    91,    92,    93,    94,    96,    99,   100,   101,
     119,   120,   122,   123,   124,   125,   126,    99,   101,   102,
     120,    26,    61,   119,   119,    61,   119,    24,    28,   100,
      30,    89,    90,   120,    26,   113,   119,   121,   123,   124,
       0,    99,   101,    25,    61,    97,    98,    26,    25,    61,
     103,   104,   105,   106,   119,     3,     5,     6,    18,    24,
      29,    35,    36,    60,    61,    65,    66,    68,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    88,     8,    30,    49,   113,   121,    27,
      30,    37,    39,    40,    46,    47,    48,    61,    71,    84,
      85,    87,   111,   112,   113,   114,   115,   116,   117,   118,
     121,   120,   113,   123,    49,     8,    27,    97,    25,     8,
       8,    25,    24,    28,   101,   108,   109,   120,    87,    92,
      95,    99,   107,    24,    71,    71,    24,    65,    66,    73,
       3,     4,     9,     5,     6,    12,    13,    10,    11,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    29,
      90,    85,   110,   113,    24,    24,    30,    87,    30,    30,
      24,    31,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    86,     8,    30,    27,   111,    27,   114,
      88,    98,    27,   105,    61,    25,   103,   108,    29,    88,
     109,    24,    28,    25,    95,    24,   101,   108,    95,    25,
      25,    70,    85,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    77,    77,    78,    79,    80,    81,
      82,    87,    87,    87,    30,   115,   111,    85,    85,    27,
      25,    25,    29,    25,   103,    29,    88,    73,     8,    25,
      31,    25,    25,   115,    25,    29,    85,    84,   111,   111,
      25,    87,    38,   111,    25,   111,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   102,   102,   103,   104,
     104,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   111,   111,   111,   111,   111,   111,   112,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     4,     2,     2,
       1,     3,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     2,     1,     4,     5,     2,     1,
       3,     1,     3,     1,     1,     1,     3,     4,     4,     3,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     2,     3,     3,     4,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     4,     1,     2,     1,     2,     5,     7,     5,     6,
       7,     2,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     2,     4,     3,     3,     2,     2,
       3,     1,     1,     1,     2,     1
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
#line 65 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new Identifier(*(yyvsp[0].string));}
#line 1620 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Constant((yyvsp[0].number));}
#line 1626 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1632 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1638 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionCall((yyvsp[-2].expr), new List(), 1);}
#line 1644 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionCall((yyvsp[-3].expr), (yyvsp[-1].exprList), 0); }
#line 1650 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new postInc((yyvsp[-1].expr)); }
#line 1656 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new postDec((yyvsp[-1].expr)); }
#line 1662 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new List((yyvsp[0].expr));}
#line 1668 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new List((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));}
#line 1674 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1680 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new unaryOp(*(yyvsp[-1].string), (yyvsp[0].expr));}
#line 1686 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new preInc((yyvsp[0].expr));}
#line 1692 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new preDec((yyvsp[0].expr));}
#line 1698 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string("*");}
#line 1704 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 85 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string("+");}
#line 1710 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("-"); }
#line 1716 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("&");}
#line 1722 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("!");}
#line 1728 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("~");}
#line 1734 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1740 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 1746 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1752 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new mulOp((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1758 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new divOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1764 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new modOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1770 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1776 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new addOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1782 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new subOp((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1788 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 1794 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new leftShiftOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1800 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new rightShiftOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1806 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 112 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 1812 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new lessThan((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1818 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new greaterThan((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1824 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new lessThanEqual((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1830 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new greaterThanEqual((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1836 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 1842 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new equalTo((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1848 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new notEqualTo((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1854 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1860 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new andOp((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1866 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1872 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "src/maths_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new xorOp((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1878 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 132 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 1884 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new orOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1890 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);   }
#line 1896 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new logAndOp((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 1902 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 140 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);   }
#line 1908 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new logOrOp((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1914 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1920 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 1926 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1932 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    { 
                        
                        switch((yyvsp[-1].token)){
                            case T_ASSIGN: (yyval.expr) = new assignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_PLUS_EQ: (yyval.expr) = new plusAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_MINUS_EQ: (yyval.expr) = new subAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_TIMES_EQ: (yyval.expr) = new multAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_DIV_EQ: (yyval.expr) = new divAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_MOD_EQ: (yyval.expr) = new modAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_AND_EQ: (yyval.expr) = new andAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_OR_EQ: (yyval.expr) = new orAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_XOR_EQ: (yyval.expr) = new xorAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_LSHIFT_EQ: (yyval.expr) = new leftShiftAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            case T_RSHIFT_EQ: (yyval.expr) = new rightShiftAssignOp((yyvsp[-2].expr), (yyvsp[0].expr)); break;
                            default: break;
                          }  
                        }
#line 1954 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_ASSIGN; }
#line 1960 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_PLUS_EQ; }
#line 1966 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 170 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_MINUS_EQ; }
#line 1972 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_TIMES_EQ; }
#line 1978 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_DIV_EQ; }
#line 1984 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_MOD_EQ; }
#line 1990 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_AND_EQ; }
#line 1996 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_OR_EQ; }
#line 2002 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 176 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_XOR_EQ; }
#line 2008 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_LSHIFT_EQ; }
#line 2014 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_RSHIFT_EQ; }
#line 2020 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 182 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2026 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2032 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 186 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2038 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 189 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new declList((yyvsp[0].expr)); }
#line 2044 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 190 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new declList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));}
#line 2050 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new initDeclarator((yyvsp[0].expr));  }
#line 2056 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new initDeclarator((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2062 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 197 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2068 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 200 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PrimitiveType(PrimitiveType::Specifier::_void); }
#line 2074 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 201 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new PrimitiveType(PrimitiveType::Specifier::_int); }
#line 2080 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 202 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2086 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 203 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2092 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2098 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 211 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2104 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2110 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 222 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2116 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2122 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2128 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 225 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2134 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 237 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2140 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2146 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2152 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 242 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2158 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 243 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2164 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 246 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2170 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 247 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2176 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 250 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2182 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 251 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2188 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Identifier(*(yyvsp[0].string)); }
#line 2194 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);  }
#line 2200 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 258 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-3].expr), (yyvsp[-1].exprList));  }
#line 2206 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 259 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-3].expr), (yyvsp[-1].exprList)); delete (yyvsp[-1].exprList); }
#line 2212 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-2].expr)); }
#line 2218 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 265 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2224 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 266 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2230 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 267 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2236 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2242 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 271 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new List((yyvsp[0].expr));}
#line 2248 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 272 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2254 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2260 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new paramList((yyvsp[0].expr));}
#line 2266 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new paramList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2272 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Declaration((yyvsp[-1].expr), (yyvsp[0].expr)); }
#line 2278 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2284 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 284 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Declaration((yyvsp[0].expr)); }
#line 2290 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List(new Identifier(*(yyvsp[0].string)));}
#line 2296 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 288 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList(new Identifier(*(yyvsp[0].string))); }
#line 2302 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2308 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 292 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2314 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2320 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 296 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2326 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 297 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2332 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 300 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2338 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2344 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2350 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2356 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2362 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2368 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2374 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 307 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2380 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2386 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 311 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2392 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 319 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2398 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 320 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2404 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 321 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2410 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2416 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 323 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2422 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 324 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2428 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 327 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2434 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 330 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope();}
#line 2440 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 331 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-1].exprList));  }
#line 2446 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 332 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-1].exprList));  }
#line 2452 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 333 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-2].exprList), (yyvsp[-1].exprList)); }
#line 2458 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 337 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2464 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 338 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2470 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 341 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2476 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 342 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2482 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 345 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ifStatement((yyvsp[-2].expr), (yyvsp[0].expr));  }
#line 2488 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 346 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ifElseStatement((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2494 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new whileLoop((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2500 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 350 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new forLoop((yyvsp[-3].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].expr)); }
#line 2506 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 351 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new forLoop((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2512 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 354 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2518 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 355 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Return((yyvsp[-1].expr));  }
#line 2524 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 356 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2530 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 357 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2536 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 360 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2542 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 361 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2548 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 362 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);  }
#line 2554 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 363 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2560 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 364 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2566 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 365 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2572 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 368 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2578 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 369 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2584 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 372 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2590 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 373 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));  }
#line 2596 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2602 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 377 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDef(new Declaration((yyvsp[-2].expr), (yyvsp[-1].expr)), (yyvsp[0].expr)); }
#line 2608 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 378 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2614 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 379 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2620 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 382 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2626 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 383 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr)  = new Declaration((yyvsp[-2].expr), (yyvsp[-1].exprList)); }
#line 2632 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 386 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2638 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 387 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); }
#line 2644 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 390 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2650 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 391 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));}
#line 2656 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 394 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = new globalScope((yyvsp[0].exprList));}
#line 2662 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2666 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 396 "src/maths_parser.y" /* yacc.c:1906  */


const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
