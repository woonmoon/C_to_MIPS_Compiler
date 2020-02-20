/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 1 "src/c_parser.y" /* yacc.c:1909  */

  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 58 "src/c_parser.tab.hpp" /* yacc.c:1909  */

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
#line 15 "src/c_parser.y" /* yacc.c:1909  */

	ExpressionPtr* expr;
	double number;
	std::string *string;

#line 205 "src/c_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
