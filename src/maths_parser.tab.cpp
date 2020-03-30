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
    T_SWITCH = 304,
    T_ASSIGN = 305,
    T_PLUS_EQ = 306,
    T_MINUS_EQ = 307,
    T_TIMES_EQ = 308,
    T_DIV_EQ = 309,
    T_MOD_EQ = 310,
    T_AND_EQ = 311,
    T_OR_EQ = 312,
    T_XOR_EQ = 313,
    T_LSHIFT_EQ = 314,
    T_RSHIFT_EQ = 315,
    T_CONSTANT = 316,
    T_IDENTIFIER = 317,
    T_TYPEDEF = 318,
    T_CONST = 319,
    T_VOLATILE = 320,
    T_PLUS_PLUS = 321,
    T_MINUS_MINUS = 322,
    T_CASE = 323,
    T_DEFAULT = 324
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

#line 204 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    64,    67,    68,    69,    70,    71,
      72,    75,    76,    79,    80,    81,    82,    85,    86,    87,
      88,    89,    90,    93,    94,    97,    98,    99,   100,   103,
     104,   105,   108,   109,   110,   113,   114,   115,   116,   117,
     120,   121,   122,   125,   126,   129,   130,   133,   134,   137,
     138,   141,   142,   145,   146,   149,   150,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   183,   184,
     187,   190,   191,   194,   195,   198,   201,   202,   203,   204,
     209,   212,   213,   223,   224,   225,   226,   238,   239,   240,
     243,   244,   247,   248,   251,   252,   256,   257,   258,   259,
     260,   261,   262,   265,   266,   267,   268,   271,   272,   275,
     278,   279,   282,   283,   284,   287,   288,   291,   292,   295,
     296,   297,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   311,   319,   320,   321,   322,   323,   324,   327,   328,
     329,   332,   333,   334,   335,   338,   339,   342,   343,   345,
     346,   347,   349,   350,   351,   353,   354,   355,   356,   358,
     359,   360,   361,   362,   363,   366,   367,   370,   371,   374,
     375,   376,   377,   380,   381,   384,   385,   388,   389,   392
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
  "T_UNION", "T_ENUM", "T_CONTINUE", "T_BREAK", "T_FOR", "T_SWITCH",
  "T_ASSIGN", "T_PLUS_EQ", "T_MINUS_EQ", "T_TIMES_EQ", "T_DIV_EQ",
  "T_MOD_EQ", "T_AND_EQ", "T_OR_EQ", "T_XOR_EQ", "T_LSHIFT_EQ",
  "T_RSHIFT_EQ", "T_CONSTANT", "T_IDENTIFIER", "T_TYPEDEF", "T_CONST",
  "T_VOLATILE", "T_PLUS_PLUS", "T_MINUS_MINUS", "T_CASE", "T_DEFAULT",
  "$accept", "PRIMARY_EXPRESSION", "POSTFIX_EXPRESSION",
  "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION", "UNARY_OPERATOR",
  "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION",
  "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "EXPRESSION", "CONSTANT_EXPRESSION", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "STORAGE_CLASS_SPECIFIER", "TYPE_SPECIFIER",
  "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "SPECIFIER_QUALIFIER_LIST", "ENUM_SPECIFIER", "ENUMERATOR_LIST",
  "ENUMERATOR", "TYPE_QUALIFIER", "DIRECT_DECLARATOR", "POINTER",
  "TYPE_QUALIFIER_LIST", "PARAMETER_TYPE_LIST", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "TYPE_NAME",
  "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR", "INITIALIZER",
  "STATEMENT", "LABELED_STATEMENT", "COMPOUND_STATEMENT", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "DECLARATION_SPECIFIERS", "DECLARATOR",
  "DECLARATION_LIST", "FUNCTION_DEFINITION", "DECLARATION",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -172

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     641,    40,    88,  -172,  -172,  -172,  -172,    -9,  -172,  -172,
    -172,  -172,   331,   331,  -172,   -39,  -172,   331,     5,   -12,
      31,   163,  -172,  -172,  -172,   641,    28,  -172,  -172,    40,
      11,   -31,    47,  -172,  -172,  -172,  -172,   273,   483,     5,
    -172,    38,  -172,   666,   212,  -172,    31,   163,  -172,  -172,
    -172,  -172,  -172,  -172,    51,    13,  -172,   -31,  -172,  -172,
      16,    70,  -172,   135,    32,  -172,  -172,  -172,  -172,   449,
    -172,  -172,  -172,  -172,  -172,   587,   587,  -172,    -4,  -172,
     607,  -172,   104,   109,   228,   282,   227,    91,    87,   122,
     131,   249,  -172,   126,    88,  -172,   607,  -172,   163,  -172,
    -172,   140,   153,   499,   156,   161,   171,   174,   183,   607,
     185,   692,  -172,  -172,    46,  -172,  -172,  -172,   316,  -172,
    -172,  -172,  -172,   264,   169,  -172,  -172,   607,   -31,  -172,
     148,  -172,   331,   175,  -172,   634,   519,    41,  -172,   120,
    -172,   141,   676,   166,   676,   225,   607,  -172,  -172,   402,
     607,  -172,  -172,  -172,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,  -172,  -172,  -172,  -172,  -172,   607,   607,
    -172,    56,  -172,  -172,   533,   607,   410,   232,   410,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
     607,   607,  -172,  -172,  -172,  -172,   363,  -172,  -172,  -172,
    -172,  -172,  -172,   240,   243,  -172,   260,   120,   158,   553,
    -172,  -172,   168,   130,  -172,  -172,   607,  -172,   145,  -172,
      58,  -172,  -172,  -172,   104,   104,   109,   109,   228,   228,
     228,   228,   282,   282,   227,    91,    87,   122,   131,    14,
     172,   221,  -172,   533,   237,  -172,   410,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,   270,  -172,   291,  -172,   607,
    -172,  -172,   607,   410,   410,   573,   410,  -172,  -172,  -172,
    -172,  -172,   301,  -172,   410,   258,  -172,   410,  -172,   410,
    -172,  -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   103,     0,    77,    76,    81,    82,     0,    96,    75,
      94,    95,   159,   161,    78,     0,    79,   163,   166,     0,
       0,     0,   175,   176,   177,   179,     0,   107,   105,   104,
       0,     0,    89,   160,   162,    80,   164,     0,     0,   165,
     173,     0,    71,    73,     0,   172,     0,     0,   167,   178,
       1,   108,   106,    97,    92,     0,    90,     0,   102,   115,
       0,   109,   110,     0,   114,    17,    18,    19,    20,     0,
      99,    21,    22,     3,     2,     0,     0,     5,    13,    23,
       0,    25,    29,    32,    35,    40,    43,    45,    47,    49,
      51,    53,    70,     0,     0,   174,     0,   170,     0,   141,
     147,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,    23,    55,    68,     0,   145,   132,   133,     0,   134,
     135,   136,   137,     0,    73,   171,   168,     0,     0,    87,
       0,   100,     0,     0,   101,     0,     0,   119,   113,   120,
     112,     0,    84,   117,    86,     0,     0,    15,    16,     0,
       0,     9,    10,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    72,   131,    74,   169,     0,     0,
     155,     0,   157,   158,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,   148,   142,   146,   143,     0,    93,    91,    88,
     111,   116,   123,     0,     0,   124,     0,   121,     0,     0,
       4,    83,     0,   119,   118,    85,     0,     7,     0,    11,
       0,    26,    27,    28,    30,    31,    33,    34,    38,    39,
      36,    37,    41,    42,    44,    46,    48,    50,    52,     0,
       0,     0,   156,     0,     0,   138,     0,   140,    56,    69,
     144,   128,   122,   125,   129,     0,   126,     0,    24,     0,
       8,     6,     0,     0,     0,     0,     0,   139,   130,   127,
      12,    54,   149,   152,     0,     0,   151,     0,   153,     0,
     150,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,  -172,   -38,  -172,   -75,   187,   164,   123,
     182,   190,   134,   189,   184,   170,  -172,   -37,   -90,  -172,
     -11,   -79,  -172,   265,  -172,   -59,  -172,  -172,    43,  -172,
     303,   233,    15,    -1,     3,  -172,   -34,  -172,   235,  -172,
    -172,   -55,  -126,  -172,  -111,  -172,     4,   247,  -171,  -172,
    -172,  -172,     2,     6,   306,  -172,    49,   346,  -172,  -172
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    77,    78,   228,   111,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   112,   113,   200,
     114,    93,    41,    42,    12,    13,    14,    15,   143,    16,
      55,    56,    17,    18,    19,    29,   213,    61,    62,    63,
     145,   214,   139,   176,   115,   116,   117,   118,   119,   120,
     121,   122,    46,    21,    47,    22,    48,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      79,    92,    20,    60,    28,   153,   175,   204,    30,   138,
     142,   217,     2,   253,    33,    34,    27,    31,    39,    36,
     149,   128,   201,    35,   150,    45,    43,    20,    50,    37,
     187,    54,    52,    38,     1,     1,    53,   147,   148,    64,
     129,   131,    79,     1,    51,   272,    94,    97,   207,    23,
       8,   125,   124,    32,   201,     2,   135,   216,   141,   229,
     136,    40,   151,   152,   201,   135,   201,   137,    95,   136,
     140,    79,    92,    57,    23,   255,   202,   257,   132,   231,
     232,   233,   275,   142,   144,   142,   252,   271,   224,    79,
      92,     1,   181,     8,     8,   204,   126,   217,    79,    92,
     124,   127,   177,     8,    10,    11,   168,   154,   155,   167,
     258,   259,     2,   156,   157,   158,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    64,   141,    39,    64,   137,   230,
     267,    30,   169,   133,   218,   277,   223,   126,   219,   201,
       8,   268,   170,   269,   222,   173,   128,   144,   136,   144,
     134,   249,   282,   283,   178,   286,   220,   250,   251,     1,
     270,     1,   126,   288,   254,   209,   290,   179,   291,   280,
     201,    79,    92,   264,   265,   221,   182,   225,    79,    44,
     222,   183,   222,   212,   136,   184,   136,   273,   185,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,   186,    65,   188,    66,    67,    96,
      64,     9,    10,    11,    64,   223,     9,    10,    11,   201,
      68,     9,    10,    11,    79,   281,    69,   211,    44,    99,
     159,   160,   100,   165,   166,   201,   274,    71,    72,   101,
     226,   102,   103,     3,     4,     5,     6,     7,   104,   105,
     106,   107,   276,   256,   285,   261,   201,    65,   262,    66,
      67,   171,   172,    73,   108,     9,    10,    11,    75,    76,
     109,   110,    68,   289,   238,   239,   240,   241,    69,   263,
      44,   205,   161,   162,   100,   278,   163,   164,    58,    71,
      72,   101,   245,   102,   103,     3,     4,     5,     6,     7,
     104,   105,   106,   107,     3,     4,     5,     6,     7,    65,
     279,    66,    67,   236,   237,    73,   108,     9,    10,    11,
      75,    76,   109,   110,    68,    59,     9,    10,    11,   287,
      69,   248,    44,   203,   234,   235,   100,   242,   243,    98,
     123,    71,    72,   101,   247,   102,   103,   244,   246,   174,
     130,   208,   104,   105,   106,   107,    65,   210,    66,    67,
     206,    49,     3,     4,     5,     6,     7,    73,   108,     0,
       0,    68,    75,    76,   109,   110,     0,    69,     0,    44,
     260,     0,     0,   100,     9,    10,    11,     0,    71,    72,
     101,     0,   102,   103,     0,    65,     0,    66,    67,   104,
     105,   106,   107,    65,     0,    66,    67,     0,     0,     0,
      68,     0,     0,     0,    73,   108,    69,   227,    68,    75,
      76,   109,   110,     0,    69,     0,    44,    71,    72,     0,
     100,     0,     0,     0,     0,    71,    72,   101,     0,   102,
     103,     0,    65,     0,    66,    67,   104,   105,   106,   107,
       0,     0,     0,    73,    74,     0,     0,    68,    75,    76,
       0,    73,   108,    69,     0,     0,    75,    76,   109,   110,
       0,     0,     0,     0,    71,    72,    65,     0,    66,    67,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,    68,    65,     0,    66,    67,     0,    69,     0,     0,
      73,    74,    70,    10,    11,    75,    76,    68,    71,    72,
       0,     0,    65,    69,    66,    67,     0,     0,     0,   180,
       0,     0,     0,     0,    71,    72,    65,    68,    66,    67,
       0,     0,     0,    69,    73,    74,     0,     0,   215,    75,
      76,    68,     0,     0,    71,    72,    65,    69,    66,    67,
      73,    74,     0,   100,     0,    75,    76,     0,    71,    72,
       0,    68,     0,     0,     0,     0,    65,    69,    66,    67,
      73,    74,   266,     0,     0,    75,    76,     0,    71,    72,
      65,    68,    66,    67,    73,    74,     0,    69,   284,    75,
      76,     0,     0,     0,     0,    68,     0,     0,    71,    72,
      65,   146,    66,    67,    73,    74,     0,     0,     0,    75,
      76,     0,    71,    72,     0,    68,     0,     0,     0,     0,
       0,    69,     0,     0,    73,    74,     0,     1,     0,    75,
      76,     0,    71,    72,     1,     0,     0,     0,    73,    74,
       0,     0,     0,    75,    76,     0,     0,     0,   135,   212,
       0,     0,   136,     0,     0,     2,     0,     0,    73,    74,
       0,     0,     0,    75,    76,     3,     4,     5,     6,     7,
       0,     0,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     8,     9,    10,    11,
       0,     0,     0,     8,     9,    10,    11,     3,     4,     5,
       6,     7,     0,     0,     0,     0,    96,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199
};

static const yytype_int16 yycheck[] =
{
      38,    38,     0,    37,     1,    80,    96,   118,     2,    64,
      69,   137,    24,   184,    12,    13,     1,    26,    19,    17,
      24,     8,     8,    62,    28,    21,    20,    25,     0,    24,
     109,    62,    29,    28,     3,     3,    25,    75,    76,    37,
      27,    25,    80,     3,    29,    31,     8,    43,   127,     0,
      62,    47,    46,    62,     8,    24,    24,   136,    69,   149,
      28,    30,    66,    67,     8,    24,     8,    64,    30,    28,
      64,   109,   109,    26,    25,   186,    30,   188,     8,   154,
     155,   156,   253,   142,    69,   144,    30,    29,   143,   127,
     127,     3,   103,    62,    62,   206,    47,   223,   136,   136,
      94,    50,    98,    62,    64,    65,    19,     3,     4,    18,
     200,   201,    24,     9,     5,     6,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   132,   146,   137,   135,   135,   150,
     219,   135,    20,     8,    24,   256,   143,    98,    28,     8,
      62,   226,    21,     8,    24,    29,     8,   142,    28,   144,
      25,   172,   273,   274,    24,   276,    25,   178,   179,     3,
      25,     3,   123,   284,   185,    27,   287,    24,   289,   269,
       8,   219,   219,    25,   218,   142,    30,   144,   226,    26,
      24,    30,    24,    25,    28,    24,    28,    25,    24,    41,
      42,    43,    44,    45,    41,    42,    43,    44,    45,    41,
      42,    43,    44,    45,    31,     3,    31,     5,     6,    50,
     218,    63,    64,    65,   222,   222,    63,    64,    65,     8,
      18,    63,    64,    65,   272,   272,    24,    62,    26,    27,
      12,    13,    30,    16,    17,     8,    25,    35,    36,    37,
      25,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    25,    31,   275,    25,     8,     3,    25,     5,
       6,    22,    23,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    18,    25,   161,   162,   163,   164,    24,    29,
      26,    27,    10,    11,    30,    25,    14,    15,    25,    35,
      36,    37,   168,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    41,    42,    43,    44,    45,     3,
      29,     5,     6,   159,   160,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    18,    62,    63,    64,    65,    38,
      24,   171,    26,    27,   157,   158,    30,   165,   166,    43,
      44,    35,    36,    37,   170,    39,    40,   167,   169,    94,
      57,   128,    46,    47,    48,    49,     3,   132,     5,     6,
     123,    25,    41,    42,    43,    44,    45,    61,    62,    -1,
      -1,    18,    66,    67,    68,    69,    -1,    24,    -1,    26,
      27,    -1,    -1,    30,    63,    64,    65,    -1,    35,    36,
      37,    -1,    39,    40,    -1,     3,    -1,     5,     6,    46,
      47,    48,    49,     3,    -1,     5,     6,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    61,    62,    24,    25,    18,    66,
      67,    68,    69,    -1,    24,    -1,    26,    35,    36,    -1,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,     3,    -1,     5,     6,    46,    47,    48,    49,
      -1,    -1,    -1,    61,    62,    -1,    -1,    18,    66,    67,
      -1,    61,    62,    24,    -1,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    35,    36,     3,    -1,     5,     6,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    18,     3,    -1,     5,     6,    -1,    24,    -1,    -1,
      61,    62,    29,    64,    65,    66,    67,    18,    35,    36,
      -1,    -1,     3,    24,     5,     6,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    36,     3,    18,     5,     6,
      -1,    -1,    -1,    24,    61,    62,    -1,    -1,    29,    66,
      67,    18,    -1,    -1,    35,    36,     3,    24,     5,     6,
      61,    62,    -1,    30,    -1,    66,    67,    -1,    35,    36,
      -1,    18,    -1,    -1,    -1,    -1,     3,    24,     5,     6,
      61,    62,    29,    -1,    -1,    66,    67,    -1,    35,    36,
       3,    18,     5,     6,    61,    62,    -1,    24,    25,    66,
      67,    -1,    -1,    -1,    -1,    18,    -1,    -1,    35,    36,
       3,    24,     5,     6,    61,    62,    -1,    -1,    -1,    66,
      67,    -1,    35,    36,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    61,    62,    -1,     3,    -1,    66,
      67,    -1,    35,    36,     3,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    -1,    -1,    24,    -1,    -1,    61,    62,
      -1,    -1,    -1,    66,    67,    41,    42,    43,    44,    45,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    62,    63,    64,    65,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    41,    42,    43,    44,    45,    62,    63,
      64,    65,    94,    95,    96,    97,    99,   102,   103,   104,
     122,   123,   125,   126,   127,   128,   129,   102,   104,   105,
     123,    26,    62,   122,   122,    62,   122,    24,    28,   103,
      30,    92,    93,   123,    26,   116,   122,   124,   126,   127,
       0,   102,   104,    25,    62,   100,   101,    26,    25,    62,
     106,   107,   108,   109,   122,     3,     5,     6,    18,    24,
      29,    35,    36,    61,    62,    66,    67,    71,    72,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    91,     8,    30,    50,   116,   124,    27,
      30,    37,    39,    40,    46,    47,    48,    49,    62,    68,
      69,    74,    87,    88,    90,   114,   115,   116,   117,   118,
     119,   120,   121,   124,   123,   116,   126,    50,     8,    27,
     100,    25,     8,     8,    25,    24,    28,   104,   111,   112,
     123,    90,    95,    98,   102,   110,    24,    74,    74,    24,
      28,    66,    67,    76,     3,     4,     9,     5,     6,    12,
      13,    10,    11,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    29,    93,    88,   113,   116,    24,    24,
      30,    90,    30,    30,    24,    24,    31,    91,    31,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      89,     8,    30,    27,   114,    27,   117,    91,   101,    27,
     108,    62,    25,   106,   111,    29,    91,   112,    24,    28,
      25,    98,    24,   104,   111,    98,    25,    25,    73,    88,
      90,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    80,    81,    82,    83,    84,    85,    90,
      90,    90,    30,   118,    90,   114,    31,   114,    88,    88,
      27,    25,    25,    29,    25,   106,    29,    91,    76,     8,
      25,    29,    31,    25,    25,   118,    25,   114,    25,    29,
      88,    87,   114,   114,    25,    90,   114,    38,   114,    25,
     114,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    92,    92,    93,    93,    94,    95,    95,    95,    95,
      96,    97,    97,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   121,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     4,     3,     4,     2,
       2,     1,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     2,     1,     2,     1,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     1,     3,     4,     3,
       4,     4,     3,     1,     2,     2,     3,     1,     2,     1,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     2,     3,     3,     4,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     1,     2,     5,
       7,     5,     5,     6,     7,     2,     3,     2,     2,     1,
       2,     1,     2,     1,     2,     2,     1,     1,     2,     4,
       3,     3,     2,     2,     3,     1,     1,     1,     2,     1
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
#line 62 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new Identifier(*(yyvsp[0].string));}
#line 1628 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new Constant((yyvsp[0].number)); }
#line 1634 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[-1].actualExpression); }
#line 1640 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);}
#line 1646 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new arrayIndex((yyvsp[-3].actualExpression), (yyvsp[-1].actualExpression)); }
#line 1652 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new functionCall((yyvsp[-2].actualExpression), new List(), 1);}
#line 1658 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new functionCall((yyvsp[-3].actualExpression), (yyvsp[-1].exprList), 0); }
#line 1664 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 71 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.actualExpression) = new postInc((yyvsp[-1].actualExpression)); }
#line 1670 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.actualExpression) = new postDec((yyvsp[-1].actualExpression)); }
#line 1676 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new paramList((yyvsp[0].actualExpression));}
#line 1682 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new paramList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].actualExpression));}
#line 1688 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);}
#line 1694 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.actualExpression) = new unaryOp(*(yyvsp[-1].string), (yyvsp[0].actualExpression));}
#line 1700 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.actualExpression) = new preInc((yyvsp[0].actualExpression));}
#line 1706 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.actualExpression) = new preDec((yyvsp[0].actualExpression));}
#line 1712 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 85 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string("*");}
#line 1718 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string("+");}
#line 1724 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("-"); }
#line 1730 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("&");}
#line 1736 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("!");}
#line 1742 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.string) = new std::string("~");}
#line 1748 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression); }
#line 1754 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 1760 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression); }
#line 1766 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new mulOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1772 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new divOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1778 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new modOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1784 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression); }
#line 1790 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new addOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1796 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new subOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1802 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);  }
#line 1808 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new leftShiftOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1814 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new rightShiftOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1820 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);  }
#line 1826 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new lessThan((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1832 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new greaterThan((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1838 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new lessThanEqual((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1844 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 117 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new greaterThanEqual((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1850 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);  }
#line 1856 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new equalTo((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1862 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new notEqualTo((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1868 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);}
#line 1874 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new andOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1880 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression); }
#line 1886 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    {  (yyval.actualExpression) = new xorOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1892 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);  }
#line 1898 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new orOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1904 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);   }
#line 1910 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new logAndOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression));  }
#line 1916 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);   }
#line 1922 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = new logOrOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); }
#line 1928 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression); }
#line 1934 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 1940 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.actualExpression) = (yyvsp[0].actualExpression);}
#line 1946 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "src/maths_parser.y" /* yacc.c:1646  */
    { 
                        
                        switch((yyvsp[-1].token)){
                            case T_ASSIGN: (yyval.actualExpression) = new assignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_PLUS_EQ: (yyval.actualExpression) = new plusAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_MINUS_EQ: (yyval.actualExpression) = new subAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_TIMES_EQ: (yyval.actualExpression) = new multAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_DIV_EQ: (yyval.actualExpression) = new divAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_MOD_EQ: (yyval.actualExpression) = new modAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_AND_EQ: (yyval.actualExpression) = new andAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_OR_EQ: (yyval.actualExpression) = new orAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_XOR_EQ: (yyval.actualExpression) = new xorAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_LSHIFT_EQ: (yyval.actualExpression) = new leftShiftAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            case T_RSHIFT_EQ: (yyval.actualExpression) = new rightShiftAssignOp((yyvsp[-2].actualExpression), (yyvsp[0].actualExpression)); break;
                            default: break;
                          }  
                        }
#line 1968 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_ASSIGN; }
#line 1974 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 170 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_PLUS_EQ; }
#line 1980 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_MINUS_EQ; }
#line 1986 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_TIMES_EQ; }
#line 1992 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_DIV_EQ; }
#line 1998 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_MOD_EQ; }
#line 2004 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_AND_EQ; }
#line 2010 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 176 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_OR_EQ; }
#line 2016 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_XOR_EQ; }
#line 2022 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_LSHIFT_EQ; }
#line 2028 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 179 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.token) = T_RSHIFT_EQ; }
#line 2034 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2040 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 184 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2046 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 187 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2052 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 190 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new declList((yyvsp[0].expr)); }
#line 2058 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 191 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new declList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));}
#line 2064 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new initDeclarator((yyvsp[0].expr));  }
#line 2070 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new initDeclarator((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2076 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 198 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2082 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 201 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PrimitiveType(PrimitiveType::Specifier::_void); }
#line 2088 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 202 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new PrimitiveType(PrimitiveType::Specifier::_int); }
#line 2094 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 203 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2100 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 204 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2106 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2112 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2118 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2124 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2130 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2136 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 225 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2142 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 226 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2148 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new enumSpecifier("", (yyvsp[-1].exprList)); }
#line 2154 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new enumSpecifier(*(yyvsp[-3].string), (yyvsp[-1].exprList)); }
#line 2160 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 240 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new enumSpecifier(*(yyvsp[0].string), NULL); }
#line 2166 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 243 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new enumList((yyvsp[0].expr)); }
#line 2172 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new enumList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2178 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 247 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Enumerator(*(yyvsp[0].string), NULL); }
#line 2184 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 248 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Enumerator(*(yyvsp[-2].string), (yyvsp[0].actualExpression)); }
#line 2190 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 251 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2196 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 252 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2202 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Identifier(*(yyvsp[0].string)); }
#line 2208 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);  }
#line 2214 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 258 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new arrayDeclarator((yyvsp[-3].expr), (yyvsp[-1].actualExpression)); }
#line 2220 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 259 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new arrayDeclarator((yyvsp[-2].expr), NULL); }
#line 2226 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-3].expr), (yyvsp[-1].exprList));  }
#line 2232 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 261 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-3].expr), (yyvsp[-1].exprList)); delete (yyvsp[-1].exprList); }
#line 2238 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 262 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDec((yyvsp[-2].expr)); }
#line 2244 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 265 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2250 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 266 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2256 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 267 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2262 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2268 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 271 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.exprList) = new List((yyvsp[0].expr));}
#line 2274 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 272 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2280 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2286 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new paramList((yyvsp[0].expr));}
#line 2292 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new paramList((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Declaration((yyvsp[-1].expr), (yyvsp[0].expr)); }
#line 2304 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2310 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 284 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Declaration((yyvsp[0].expr)); }
#line 2316 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List(new Identifier(*(yyvsp[0].string)));}
#line 2322 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 288 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-2].exprList)); ((yyval.exprList))->addtoList(new Identifier(*(yyvsp[0].string))); }
#line 2328 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2334 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 292 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2340 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2346 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 296 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2352 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2358 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 300 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2364 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2370 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2376 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2382 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2388 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2394 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2400 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 307 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2406 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2412 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 311 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].actualExpression);  }
#line 2418 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 319 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2424 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 320 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2430 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 321 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2436 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2442 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 323 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2448 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 324 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2454 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 327 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2460 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 328 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2466 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 332 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope();}
#line 2472 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 333 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-1].exprList));  }
#line 2478 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 334 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-1].exprList));  }
#line 2484 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 335 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new localScope((yyvsp[-2].exprList), (yyvsp[-1].exprList)); }
#line 2490 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 338 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2496 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 339 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr)); }
#line 2502 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 342 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2508 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 343 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2514 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 345 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ifStatement((yyvsp[-2].actualExpression), (yyvsp[0].expr));  }
#line 2520 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 346 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ifElseStatement((yyvsp[-4].actualExpression), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2526 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 347 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new switchStatement((yyvsp[-2].actualExpression), (yyvsp[0].expr)); }
#line 2532 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new whileLoop((yyvsp[-2].actualExpression), (yyvsp[0].expr)); }
#line 2538 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 350 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new forLoop((yyvsp[-3].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].expr)); }
#line 2544 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 351 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new forLoop((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-2].actualExpression), (yyvsp[0].expr)); }
#line 2550 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 353 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2556 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 354 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Return((yyvsp[-1].actualExpression));  }
#line 2562 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 355 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Continue(); }
#line 2568 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 356 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Break(); }
#line 2574 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 358 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2580 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 359 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2586 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 360 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2592 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 361 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2598 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 362 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2604 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 363 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2610 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 366 "src/maths_parser.y" /* yacc.c:1646  */
    {  }
#line 2616 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 367 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2622 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 370 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2628 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 371 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));  }
#line 2634 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 374 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2640 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 375 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new functionDef(new Declaration((yyvsp[-2].expr), (yyvsp[-1].expr)), (yyvsp[0].expr)); }
#line 2646 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    {}
#line 2652 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 377 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2658 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 380 "src/maths_parser.y" /* yacc.c:1646  */
    { }
#line 2664 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr)  = new Declaration((yyvsp[-2].expr), (yyvsp[-1].exprList)); }
#line 2670 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 384 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);  }
#line 2676 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 385 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); }
#line 2682 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 388 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[0].expr));  }
#line 2688 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 389 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = new List((yyvsp[-1].exprList)); ((yyval.exprList))->addtoList((yyvsp[0].expr));}
#line 2694 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 392 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = new globalScope((yyvsp[0].exprList));}
#line 2700 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2704 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 393 "src/maths_parser.y" /* yacc.c:1906  */

const Node *g_root; // Definition of variable (to match declaration earlier)
const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
