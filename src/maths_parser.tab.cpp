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
# define YYERROR_VERBOSE 0
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

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 111 "src/maths_parser.tab.cpp" /* yacc.c:355  */

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
    T_LSHIFT = 264,
    T_RSHIFT = 265,
    T_LESSTHAN = 266,
    T_GREATERTHAN = 267,
    T_EQUALS = 268,
    T_NOT_EQUALS = 269,
    T_AND = 270,
    T_XOR = 271,
    T_OR = 272,
    T_AND_OP = 273,
    T_OR_OP = 274,
    T_QUESTION = 275,
    T_LBRACKET = 276,
    T_RBRACKET = 277,
    T_LCURLY = 278,
    T_RCURLY = 279,
    T_SEMICOLON = 280,
    T_COLON = 281,
    T_LOG = 282,
    T_EXP = 283,
    T_SQRT = 284,
    T_IF = 285,
    T_ELSE = 286,
    T_WHILE = 287,
    T_RETURN = 288,
    T_MAIN = 289,
    T_INT = 290,
    T_VOID = 291,
    T_STRUCT = 292,
    T_UNION = 293,
    T_ENUM = 294,
    T_ASSIGN = 295,
    T_CONSTANT = 296,
    T_IDENTIFIER = 297,
    T_TYPEDEF = 298,
    T_CONST = 299,
    T_VOLATILE = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/maths_parser.y" /* yacc.c:355  */

  const Expression *expr;
  const ExpressionList *exprList;
  double number;
  std::string *string;

#line 176 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    62,    63,    64,    66,    67,
      69,    70,    72,    73,    74,    77,    78,    81,    82,    85,
      86,    87,    90,    91,    92,    95,    96,    97,   100,   101,
     102,   105,   106,   109,   110,   113,   114,   117,   118,   121,
     122,   125,   126,   129,   130,   133,   136,   137,   140,   143,
     144,   147,   148,   149,   150,   151,   152,   155,   156,   159,
     160,   163,   166,   167,   168,   169,   174,   177,   178,   188,
     189,   190,   191,   203,   204,   205,   208,   209,   212,   213,
     216,   217,   220,   221,   224,   225,   226,   227,   228,   231,
     232,   233,   234,   237,   238,   241,   244,   245,   248,   249,
     250,   253,   254,   257,   258,   261,   262,   263,   266,   267,
     268,   269,   270,   273,   274,   275,   278,   279,   282,   283,
     284,   285,   286,   287,   290,   293,   294,   295,   296,   298,
     299,   302,   303,   306,   307,   310,   311,   314,   317,   318,
     320,   321,   323,   324,   327,   328,   329,   330,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STAR", "T_DIVIDE", "T_PLUS",
  "T_MINUS", "T_EXPONENT", "T_COMMA", "T_LSHIFT", "T_RSHIFT", "T_LESSTHAN",
  "T_GREATERTHAN", "T_EQUALS", "T_NOT_EQUALS", "T_AND", "T_XOR", "T_OR",
  "T_AND_OP", "T_OR_OP", "T_QUESTION", "T_LBRACKET", "T_RBRACKET",
  "T_LCURLY", "T_RCURLY", "T_SEMICOLON", "T_COLON", "T_LOG", "T_EXP",
  "T_SQRT", "T_IF", "T_ELSE", "T_WHILE", "T_RETURN", "T_MAIN", "T_INT",
  "T_VOID", "T_STRUCT", "T_UNION", "T_ENUM", "T_ASSIGN", "T_CONSTANT",
  "T_IDENTIFIER", "T_TYPEDEF", "T_CONST", "T_VOLATILE", "$accept",
  "PRIMARY_EXPRESSION", "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST",
  "UNARY_EXPRESSION", "UNARY_OPERATOR", "CAST_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION",
  "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION", "AND_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "EXPRESSION", "CONSTANT_EXPRESSION", "DECLARATION",
  "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "STORAGE_CLASS_SPECIFIER", "TYPE_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER",
  "STRUCT_OR_UNION", "SPECIFIER_QUALIFIER_LIST", "ENUM_SPECIFIER",
  "ENUMERATOR_LIST", "ENUMERATOR", "TYPE_QUALIFIER", "DECLARATOR",
  "DIRECT_DECLARATOR", "POINTER", "TYPE_QUALIFIER_LIST",
  "PARAMETER_TYPE_LIST", "PARAMETER_LIST", "PARAMETER_DECLARATION",
  "IDENTIFIER_LIST", "TYPE_NAME", "ABSTRACT_DECLARATOR",
  "DIRECT_ABSTRACT_DECLARATOR", "INITIALIZER", "INITIALIZER_LIST",
  "STATEMENT", "LABELED_STATEMENT", "COMPOUND_STATEMENT",
  "DECLARATION_LIST", "STATEMENT_LIST", "EXPRESSION_STATEMENT",
  "SELECTION_STATEMENT", "ITERATION_STATEMENT", "JUMP_STATEMENT",
  "TRANSLATION_UNIT", "EXTERNAL_DECLARATION", "FUNCTION_DEFINITION",
  "ROOT", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     227,     7,    22,  -110,  -110,  -110,  -110,    -2,  -110,  -110,
    -110,  -110,  -110,     3,   424,   424,  -110,   -26,  -110,   424,
     413,     8,    15,   227,  -110,  -110,    47,  -110,  -110,     7,
      49,    27,    71,  -110,    41,  -110,   402,  -110,  -110,  -110,
    -110,   147,  -110,     3,  -110,   413,   374,     8,  -110,  -110,
    -110,  -110,  -110,    80,    73,  -110,    27,    22,  -110,    32,
    -110,   413,  -110,  -110,  -110,    77,  -110,  -110,   137,   142,
     350,  -110,   139,  -110,   148,   138,   198,  -110,   184,    87,
     136,   164,   134,   166,   189,   192,   199,   178,  -110,  -110,
      51,  -110,  -110,  -110,   190,   271,  -110,  -110,  -110,  -110,
     172,  -110,  -110,  -110,  -110,    58,   216,   213,  -110,    81,
     198,    27,  -110,    93,  -110,    32,  -110,  -110,  -110,  -110,
     132,   435,    10,   435,   221,   198,   198,  -110,    82,   340,
     373,  -110,   198,  -110,  -110,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,  -110,  -110,   294,  -110,  -110,   215,  -110,    42,  -110,
     225,  -110,   424,   205,  -110,  -110,  -110,  -110,  -110,  -110,
     135,  -110,  -110,   246,   240,  -110,  -110,   198,   186,   194,
    -110,  -110,  -110,   202,  -110,  -110,  -110,   184,   184,    87,
      87,   136,   136,   164,   164,   134,   166,   189,   192,   199,
      18,  -110,  -110,  -110,   251,   253,   225,   385,  -110,  -110,
     363,  -110,  -110,   317,   340,   198,  -110,   198,  -110,  -110,
    -110,   256,  -110,  -110,   340,  -110,  -110,  -110,  -110,  -110,
    -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,     0,    63,    62,    67,    68,     0,    84,    61,
      80,    81,   143,     0,    51,    53,    64,     0,    65,    55,
       0,    83,     0,   148,   140,   142,     0,    93,    91,    90,
       0,     0,    75,    49,     0,    57,    59,    52,    54,    66,
      56,     0,   129,     0,   147,     0,     0,    82,   141,     1,
      94,    92,    85,    78,     0,    76,     0,     0,    50,     0,
     145,     0,    12,    13,    14,     0,   125,   133,     0,     0,
       0,     3,     2,     5,    10,    15,     0,    17,    19,    22,
      25,    28,    31,    33,    35,    37,    39,    41,    43,    46,
       0,   131,   118,   119,     0,     0,   120,   121,   122,   123,
      59,   130,   146,    88,   101,   100,     0,    95,    96,     0,
       0,     0,    73,     0,    58,     0,     2,   113,    60,   144,
       0,    70,   103,    72,     0,     0,     0,   138,     0,     0,
       0,    45,     0,    15,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   127,     0,   126,   132,     0,    98,   105,    99,
     106,    86,     0,     0,    87,    48,    79,    77,    74,   116,
       0,     4,    69,     0,   105,   104,    71,     0,     0,     0,
     139,   124,     6,     0,     8,    44,    18,    20,    21,    23,
      24,    26,    27,    29,    30,    32,    34,    36,    38,    40,
       0,    47,   128,   109,     0,     0,   107,     0,    97,   102,
       0,   114,    16,     0,     0,     0,     7,     0,   110,   108,
     111,     0,   115,   117,     0,   135,   137,     9,    42,   112,
     136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,   -11,  -110,   -68,    63,   103,   104,
     113,   143,   141,   133,   146,   140,  -110,  -109,   -55,  -110,
     -38,  -110,    11,     0,  -110,   223,  -110,   -53,  -110,  -110,
     -82,  -110,   242,   191,    21,     5,   -17,     1,  -110,   -43,
    -110,   144,  -110,  -110,   -20,    -7,  -106,  -110,   -75,  -110,
      -3,    55,   211,  -110,  -110,  -110,  -110,  -110,   284,  -110,
    -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   183,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   132,
      90,   166,    42,    43,    34,    35,    14,    15,    16,    17,
     122,    18,    54,    55,    19,    20,    21,    22,    29,   204,
     107,   108,   109,   124,   205,   160,   118,   170,    91,    92,
      93,    45,    95,    96,    97,    98,    99,    23,    24,    25,
      26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,   165,    28,   106,   117,    47,     1,    30,   134,   169,
       1,    12,   121,     1,    37,    38,    39,    44,    36,    40,
     155,    31,    27,    13,     2,     1,   150,   120,    33,    46,
      51,   173,   128,    60,    12,    62,     2,    63,    64,   172,
      32,   176,   102,     2,   217,     8,   105,    49,   100,    57,
      50,    10,    11,    65,   181,   115,   101,     8,   119,   150,
     117,     1,   100,   156,     8,   133,    58,   186,   121,    53,
     121,    52,   101,    71,   116,   184,   151,   185,   155,   156,
      62,   111,    63,    64,     8,   159,   123,   178,   179,   163,
     150,    61,   136,   137,    56,   201,    94,   112,    65,   133,
       8,   111,   175,   164,   223,   101,   158,   180,   228,   212,
     157,   200,     3,     4,     5,     6,     7,   168,    71,   116,
     110,    10,    11,   174,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   225,   226,
     150,    47,   123,   210,   123,   138,   139,   142,   143,   230,
      62,   206,    63,    64,   171,   117,   105,   158,   125,   211,
     227,    30,   105,   126,   221,   129,   133,   206,    65,   130,
      41,    66,    67,   105,   174,   140,   141,    68,   131,    69,
      70,   144,     3,     4,     5,     6,     7,   135,    71,    72,
       9,    10,    11,    62,   150,    63,    64,   148,   149,   187,
     188,    62,   150,    63,    64,   145,   133,   105,   213,   146,
     215,    65,    59,    41,   152,    67,   214,   147,     1,    65,
      68,   162,    69,    70,   216,     3,     4,     5,     6,     7,
       1,    71,    72,     9,    10,    11,   156,   203,   161,    71,
     116,   189,   190,   177,   191,   192,   207,   209,     2,     1,
       3,     4,     5,     6,     7,   193,   194,     8,     9,    10,
      11,   173,     3,     4,     5,     6,     7,   173,   203,     8,
       9,    10,    11,   218,    62,   219,    63,    64,   229,   197,
     114,     3,     4,     5,     6,     7,   196,   195,   199,     9,
      10,    11,    65,   198,    41,   154,    67,    62,   113,    63,
      64,    68,   167,    69,    70,   153,   208,    48,     0,     0,
       0,     0,    71,    72,     0,    65,     0,    41,   202,    67,
      62,     0,    63,    64,    68,     0,    69,    70,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,    65,     0,
      41,     0,    67,    62,     0,    63,    64,    68,   224,    69,
      70,     0,     0,    62,     0,    63,    64,     0,    71,    72,
       0,    65,     0,    41,     0,    67,    62,     0,    63,    64,
      68,    65,    69,    70,     0,   127,    62,     0,    63,    64,
       0,    71,    72,     0,    65,     0,   115,   222,     0,     0,
       0,    71,   116,     0,    65,   182,   103,     0,     0,     0,
       0,     0,     0,     0,    71,   116,     0,   220,     0,     3,
       4,     5,     6,     7,    71,   116,   104,     9,    10,    11,
       3,     4,     5,     6,     7,    41,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,    41,     3,     4,     5,
       6,     7,    59,     0,     0,     9,    10,    11,     3,     4,
       5,     6,     7,     0,     0,     0,     9,    10,    11,     3,
       4,     5,     6,     7,     0,     0,     0,     9,    10,    11,
       3,     4,     5,     6,     7,     0,     0,     0,     0,    10,
      11
};

static const yytype_int16 yycheck[] =
{
       0,   110,     1,    46,    59,    22,     3,     2,    76,   115,
       3,     0,    65,     3,    14,    15,    42,    20,    13,    19,
      95,    23,     1,    23,    21,     3,     8,    65,    25,    21,
      29,    21,    70,    36,    23,     3,    21,     5,     6,   121,
      42,   123,    45,    21,    26,    42,    46,     0,    43,     8,
      29,    44,    45,    21,   129,    23,    45,    42,    61,     8,
     115,     3,    57,    21,    42,    76,    25,   135,   121,    42,
     123,    22,    61,    41,    42,   130,    25,   132,   153,    21,
       3,     8,     5,     6,    42,   105,    65,   125,   126,     8,
       8,    36,     5,     6,    23,   150,    41,    24,    21,   110,
      42,     8,   122,    22,   210,    94,   105,    25,   217,   177,
     105,   149,    35,    36,    37,    38,    39,    24,    41,    42,
      40,    44,    45,   122,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   213,   214,
       8,   158,   121,     8,   123,     9,    10,    13,    14,   224,
       3,   158,     5,     6,    22,   210,   156,   156,    21,    24,
     215,   156,   162,    21,   207,    26,   177,   174,    21,    21,
      23,    24,    25,   173,   173,    11,    12,    30,    40,    32,
      33,    15,    35,    36,    37,    38,    39,     3,    41,    42,
      43,    44,    45,     3,     8,     5,     6,    19,    20,   136,
     137,     3,     8,     5,     6,    16,   217,   207,    22,    17,
       8,    21,    40,    23,    24,    25,    22,    18,     3,    21,
      30,     8,    32,    33,    22,    35,    36,    37,    38,    39,
       3,    41,    42,    43,    44,    45,    21,    22,    22,    41,
      42,   138,   139,    22,   140,   141,    21,    42,    21,     3,
      35,    36,    37,    38,    39,   142,   143,    42,    43,    44,
      45,    21,    35,    36,    37,    38,    39,    21,    22,    42,
      43,    44,    45,    22,     3,    22,     5,     6,    22,   146,
      57,    35,    36,    37,    38,    39,   145,   144,   148,    43,
      44,    45,    21,   147,    23,    24,    25,     3,    56,     5,
       6,    30,   111,    32,    33,    94,   162,    23,    -1,    -1,
      -1,    -1,    41,    42,    -1,    21,    -1,    23,    24,    25,
       3,    -1,     5,     6,    30,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    21,    -1,
      23,    -1,    25,     3,    -1,     5,     6,    30,    31,    32,
      33,    -1,    -1,     3,    -1,     5,     6,    -1,    41,    42,
      -1,    21,    -1,    23,    -1,    25,     3,    -1,     5,     6,
      30,    21,    32,    33,    -1,    25,     3,    -1,     5,     6,
      -1,    41,    42,    -1,    21,    -1,    23,    24,    -1,    -1,
      -1,    41,    42,    -1,    21,    22,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    22,    -1,    35,
      36,    37,    38,    39,    41,    42,    42,    43,    44,    45,
      35,    36,    37,    38,    39,    23,    -1,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    23,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    43,    44,    45,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    43,    44,    45,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    21,    35,    36,    37,    38,    39,    42,    43,
      44,    45,    68,    69,    72,    73,    74,    75,    77,    80,
      81,    82,    83,   103,   104,   105,   106,    80,    83,    84,
      81,    23,    42,    25,    70,    71,    81,    69,    69,    42,
      69,    23,    68,    69,    96,    97,    21,    82,   104,     0,
      80,    83,    22,    42,    78,    79,    23,     8,    25,    40,
      96,    97,     3,     5,     6,    21,    24,    25,    30,    32,
      33,    41,    42,    47,    48,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      66,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      81,    68,    96,    22,    42,    69,    85,    86,    87,    88,
      40,     8,    24,    78,    71,    23,    42,    64,    92,    96,
      66,    73,    76,    80,    89,    21,    21,    25,    66,    26,
      21,    40,    65,    50,    52,     3,     5,     6,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       8,    25,    24,    98,    24,    94,    21,    81,    83,    90,
      91,    22,     8,     8,    22,    63,    67,    79,    24,    92,
      93,    22,    76,    21,    83,    90,    76,    22,    66,    66,
      25,    94,    22,    49,    64,    64,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    58,    59,    60,    61,
      66,    64,    24,    22,    85,    90,    91,    21,    87,    42,
       8,    24,    52,    22,    22,     8,    22,    26,    22,    22,
      22,    85,    24,    92,    31,    94,    94,    64,    63,    22,
      94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    55,    55,    55,    56,    56,    56,    57,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    66,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    73,    73,    73,    73,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    96,    96,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     4,     1,     3,
       1,     2,     1,     1,     1,     1,     4,     1,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     3,     1,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     2,     1,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     6,     5,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2,     1
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
#line 58 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Identifier(*(yyvsp[0].string)); std::cout << "issa identifier" << std::endl; }
#line 1513 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "issa constant" << std::endl;}
#line 1519 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "lbr rbr" << std::endl; }
#line 1525 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 72 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "* found" << std::endl; }
#line 1531 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "+ found" << std::endl; }
#line 1537 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "- found" << std::endl; }
#line 1543 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "cast expression: unary expression" << std::endl; }
#line 1549 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "cast expression: ( type name ) cast expression" << std::endl; }
#line 1555 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "multiplicative expression: cast expression" << std::endl; }
#line 1561 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "multiplicative expression: multiplicative expression * cast expression" << std::endl; }
#line 1567 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "additive expression: multiplicative expression" << std::endl; }
#line 1573 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "additive expression: additive expression + multiplicative expression" << std::endl; }
#line 1579 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "additive expression: additive expression - multiplicative expression" << std::endl; }
#line 1585 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "shift expression: additive expression" << std::endl; }
#line 1591 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "shift expression: shift expression << additive expression" << std::endl; }
#line 1597 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "shift expression: shift expression >> additive expression" << std::endl; }
#line 1603 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "relational expression: shift expression" << std::endl; }
#line 1609 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "relational expression: relational expression < shift expression" << std::endl; }
#line 1615 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "relational expression: relational expression > shift expression" << std::endl; }
#line 1621 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "equality expression: relational expression" << std::endl; }
#line 1627 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "equality expression: equality expression = relational expression" << std::endl; }
#line 1633 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "equality expression: equality expression != relational expression" << std::endl; }
#line 1639 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "and expression: equality expression" << std::endl; }
#line 1645 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 106 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "and expression: and expression & equality expression" << std::endl; }
#line 1651 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "exclusive or expression: and expression" << std::endl; }
#line 1657 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "exclusive or expression: exclusive or expression ^ and expression" << std::endl; }
#line 1663 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "inclusive or expression: exclusive or expression" << std::endl; }
#line 1669 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "inclusive or expression: inclusive or expression | exclusive or expression" << std::endl; }
#line 1675 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "logical and expression: inclusive or expression" << std::endl; }
#line 1681 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 118 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "logical and expression: logical and expression & inclusive or expression" << std::endl; }
#line 1687 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "logical or expression: logical and expression" << std::endl; }
#line 1693 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "logical or expression: logical or expression | logical and expression" << std::endl; }
#line 1699 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "conditional expression: logical or expression" << std::endl; }
#line 1705 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "conditional expression: logical or expression? conditional expression" << std::endl; }
#line 1711 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 129 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "assignment expression: conditional expression" << std::endl; }
#line 1717 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "assignment expression: unary expression = assignment expression" << std::endl; }
#line 1723 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "assignment operator: =" << std::endl; }
#line 1729 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "expression: assignment expression" << std::endl; }
#line 1735 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "expression: expression, assignment expression" << std::endl; }
#line 1741 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 140 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "constant expression: condiitional expression" << std::endl; }
#line 1747 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 143 "src/maths_parser.y" /* yacc.c:1646  */
    {std::cout << "declaration: declaration specifiers;" << std::endl;}
#line 1753 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    {std::cout << "declaration: declaration specifiers init declarator list;" << std::endl;}
#line 1759 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 147 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: storage class specifier" << std::endl; }
#line 1765 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: storage class specifier declaration specifier" << std::endl; }
#line 1771 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: type specifier" << std::endl; }
#line 1777 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: type specifier declaration specifiers" << std::endl; }
#line 1783 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 151 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: type qualifier" << std::endl; }
#line 1789 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 152 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration specifier: type qualifier declaration specifiers" << std::endl; }
#line 1795 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 155 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "init declarator list: init declarator" << std::endl; }
#line 1801 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 156 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "init declarator list: init declarator list, init declarator" << std::endl; }
#line 1807 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 159 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "init declarator: declarator" << std::endl; }
#line 1813 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 160 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "init declarator: declarator = initializer" << std::endl; }
#line 1819 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "storage class specifier: typedef" << std::endl; }
#line 1825 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 166 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type specifier: void" << std::endl; }
#line 1831 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 167 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type specifier: int" << std::endl; }
#line 1837 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type specifier: struct or union specifier" << std::endl; }
#line 1843 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type specifier: enum specifier" << std::endl; }
#line 1849 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "struct or union specifier: struct or union identifier" << std::endl; }
#line 1855 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "struct or union: struct" << std::endl; }
#line 1861 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "struct or union: union" << std::endl; }
#line 1867 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "specifier qualifier list: type specifier specifier qualifier list" << std::endl; }
#line 1873 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 189 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "specifier qualifier list: type specifier" << std::endl; }
#line 1879 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 190 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "specifier qualifier list: type qualifier specifier qualifier list" << std::endl; }
#line 1885 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 191 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "specifier qualifier list: type qualifier" << std::endl; }
#line 1891 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 203 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enum specifier: enum { enumerator list }" << std::endl; }
#line 1897 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enum specifier: enum identifier { enumerator list }" << std::endl; }
#line 1903 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enum identifier" << std::endl; }
#line 1909 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enumerator list: enumerator" << std::endl; }
#line 1915 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enumerator list: enumerator list, enumerator" << std::endl; }
#line 1921 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enumerator: identifier" << std::endl; }
#line 1927 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "enumerator: identifier = constant expression" << std::endl; }
#line 1933 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type qualifier: const" << std::endl; }
#line 1939 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 217 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type qualifier: volatile" << std::endl; }
#line 1945 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 220 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declarator: pointer direct declarator" << std::endl; }
#line 1951 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 221 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declarator: direct declarator" << std::endl; }
#line 1957 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Identifier(*(yyvsp[0].string)); std::cout << "direct declarator: identifier" << std::endl; delete (yyvsp[0].string);  }
#line 1963 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 225 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct declarator: ( declarator )" << std::endl; }
#line 1969 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct declarator: direct declarator ( parameter type list )" << std::endl; }
#line 1975 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 227 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct declarator: direct declarator ( identifier list )" << std::endl; }
#line 1981 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 228 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct declarator: direct declarator( )" << std::endl; }
#line 1987 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 231 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "pointer: *" << std::endl; }
#line 1993 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "pointer: * type qualifier list" << std::endl; }
#line 1999 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "pointer: * pointer" << std::endl; }
#line 2005 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 234 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "pointer: * type qualifier list pointer" << std::endl; }
#line 2011 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 237 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type qualifier list: type qualifier" << std::endl; }
#line 2017 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type qualifier list: type qualifier list type qualifier" << std::endl; }
#line 2023 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 241 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter type list: parameter list" << std::endl; }
#line 2029 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter list: parameter declaration" << std::endl; }
#line 2035 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 245 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter list: parameter list, parameter declaration" << std::endl; }
#line 2041 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 248 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter declaration: declaration specifiers declarator" << std::endl; }
#line 2047 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 249 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter declaration: declaration specifiers abstract declarator" << std::endl; }
#line 2053 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 250 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "parameter declaration: declaration specifiers" << std::endl; }
#line 2059 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 253 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "identifier list: identifier" << std::endl; }
#line 2065 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 254 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "identifier list: identifier list, identifier" << std::endl; }
#line 2071 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type name: specifier qualifier list" << std::endl; }
#line 2077 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 258 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "type name: specifier qualifier list abstract declarator" << std::endl; }
#line 2083 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 261 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "abstract declarator: pointer" << std::endl; }
#line 2089 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 262 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "abstract declarator: direct abstract declarator" << std::endl; }
#line 2095 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 263 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "abstract declarator: pointer direct abstract declarator" << std::endl; }
#line 2101 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 266 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct abstract declarator: ( abstract declarator )" << std::endl; }
#line 2107 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 267 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct abstract declarator: ()" << std::endl; }
#line 2113 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct abstract declarator: ( parameter type list)" << std::endl; }
#line 2119 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 269 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct abstract declarator: ()" << std::endl; }
#line 2125 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 270 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "direct abstract declator: ( parameter type list)" << std::endl; }
#line 2131 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 273 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "initializer: assignment expression" << std::endl; }
#line 2137 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "initializer: { initializer list }" << std::endl; }
#line 2143 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "initializer: { initializer list, }" << std::endl; }
#line 2149 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "initializer list: initializer" << std::endl; }
#line 2155 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "initializer list: init list, initializer" << std::endl; }
#line 2161 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: labeled statement" << std::endl; }
#line 2167 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: compound statement" << std::endl; }
#line 2173 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 284 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: expression statement" << std::endl; }
#line 2179 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 285 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: selection statement" << std::endl; }
#line 2185 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 286 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: iteration statement" << std::endl; }
#line 2191 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement: jump statement" << std::endl; }
#line 2197 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 290 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "labelled statement: identifier: statement" << std::endl; }
#line 2203 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 293 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "compound statement: { }" << std::endl; }
#line 2209 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 294 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "compound statement: { statement list }" << std::endl; }
#line 2215 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "compound statement: { declaration list }" << std::endl; }
#line 2221 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 296 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "compound statement: { declaration list }" << std::endl; }
#line 2227 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 298 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration list: declaration" << std::endl; }
#line 2233 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "declaration list: declaration list declaration" << std::endl; }
#line 2239 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement list: statement" << std::endl; }
#line 2245 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "statement list: statement list statement" << std::endl; }
#line 2251 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "expression statement: ; " << std::endl; }
#line 2257 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 307 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "expression statement: expression;" << std::endl; }
#line 2263 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 310 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "if statement" << std::endl; }
#line 2269 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 311 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "if else statement" << std::endl; }
#line 2275 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 314 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "while loop" << std::endl; }
#line 2281 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 317 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "jump statement: return" << std::endl; }
#line 2287 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 318 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "jump statement: return expression" << std::endl; }
#line 2293 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 320 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "translational unit: external declaration" << std::endl; }
#line 2299 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 321 "src/maths_parser.y" /* yacc.c:1646  */
    {std::cout << "translational unit: translational unit external declaration" << std::endl;}
#line 2305 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 323 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "external declaration: funct declaration"<<std::endl; }
#line 2311 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 324 "src/maths_parser.y" /* yacc.c:1646  */
    {std::cout << "external declaration: declaration" << std::endl;}
#line 2317 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 333 "src/maths_parser.y" /* yacc.c:1646  */
    { std::cout << "Made the root" << std::endl; g_root = (yyvsp[0].expr);}
#line 2323 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2327 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 335 "src/maths_parser.y" /* yacc.c:1906  */


const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
