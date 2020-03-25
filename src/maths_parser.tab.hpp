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
#line 1 "src/maths_parser.y" /* yacc.c:1909  */

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

#line 60 "src/maths_parser.tab.hpp" /* yacc.c:1909  */

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
#line 19 "src/maths_parser.y" /* yacc.c:1909  */

  Node *expr;
  Expression* actualExpression;
  List *exprList;
  double number;
  yytokentype token;
  std::string *string;

#line 148 "src/maths_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */
