%option noyywrap

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "c_parser.tab.hpp"

void count();

%}

%%

"auto"			{ count(); return T_AUTO; }
"break"			{ count(); return T_BREAK; }
"case"			{ count(); return T_CASE; }
"char"			{ count(); return T_CHAR; }
"const"			{ count(); return T_CONSTANT; }
"continue"	{ count(); return T_CONTINUE; }
"default"		{ count(); return T_DEFAULT; }
"do"			  { count(); return T_DO; }
"double"		{ count(); return T_DOUBLE; }
"else"			{ count(); return T_ELSE; }
"enum"			{ count(); return T_ENUM; }
"extern"		{ count(); return T_EXTERN; }
"float"			{ count(); return T_FLOAT; }
"for"			{ count(); return T_FOR; }
"goto"			{ count(); return T_GOTO; }
"if"			{ count(); return T_IF; }
"int"			{ count(); return T_INT; }
"long"			{ count(); return T_LONG; }
"register"		{ count(); return T_REGISTER; }
"return"		{ count(); return T_RETURN; }
"short"			{ count(); return T_SHORT; }
"signed"		{ count(); return T_SIGNED; }
"sizeof"		{ count(); return T_SIZEOF; }
"static"		{ count(); return T_STATIC; }
"struct"		{ count(); return T_STRUCT; }
"switch"		{ count(); return T_SWITCH; }
"typedef"		{ count(); return T_TYPEDEF; }
"union"			{ count(); return T_UNION; }
"unsigned"		{ count(); return T_UNSIGNED; }
"void"			{ count(); return T_VOID; }
"volatile"		{ count(); return T_VOLATILE; }
"while"			{ count(); return T_WHILE; }

{L}({L}|{D})*		{ count(); return T_IDENTIFIER; }

0[xX]{H}+{IS}?		{ count(); return T_CONSTANT; }
0{D}+{IS}?		{ count(); return T_CONSTANT; }
{D}+{IS}?		{ count(); return T_CONSTANT; }
L?'(\\.|[^\\'])+'	{ count(); return T_CONSTANT; }

{D}+{E}{FS}?		{ count(); return T_CONSTANT; }
{D}*"."{D}+({E})?{FS}?	{ count(); return T_CONSTANT; }
{D}+"."{D}*({E})?{FS}?	{ count(); return T_CONSTANT; }

L?\"(\\.|[^\\"])*\"	{ count(); return T_STRING_LITERAL; }

"..."			{ count(); return T_ELLIPSIS; }
">>="			{ count(); return T_RIGHT_ASSIGN; }
"<<="			{ count(); return T_LEFT_ASSIGN; }
"+="			{ count(); return T_ADD_ASSIGN; }
"-="			{ count(); return T_SUB_ASSIGN; }
"*="			{ count(); return T_MUL_ASSIGN; }
"/="			{ count(); return T_DIV_ASSIGN; }
"%="			{ count(); return T_MOD_ASSIGN; }
"&="			{ count(); return T_AND_ASSIGN; }
"^="			{ count(); return T_XOR_ASSIGN; }
"|="			{ count(); return T_OR_ASSIGN; }
">>"			{ count(); return T_RIGHT_OP; }
"<<"			{ count(); return T_LEFT_OP; }
"++"			{ count(); return T_PLUS_PLUS; }
"--"			{ count(); return T_MINUS_MINUS; }
"->"			{ count(); return T_PTR_OP; }
"&&"			{ count(); return T_AND_OP; }
"||"			{ count(); return T_OR_OP; }
"<="			{ count(); return T_LE_OP; }
">="			{ count(); return T_GE_OP; }
"=="			{ count(); return T_EQ_OP; }
"!="			{ count(); return T_NE_OP; }
";"			{ count(); return T_SEMICOLON; }
("{"|"<%")		{ count(); return T_LCURLY; }
("}"|"%>")		{ count(); return T_RCURLY; }
","			{ count(); return T_COMMA; }
":"			{ count(); return T_COLON; }
"="			{ count(); return T_ASSIGN; }
"("			{ count(); return T_LBRACKET; }
")"			{ count(); return T_RBRACKET; }
("["|"<:")		{ count(); return T_LSQRBRACKET; }
("]"|":>")		{ count(); return T_RSQRBRACKET; }
"."			{ count(); return T_FULLSTOP; }
"&"			{ count(); return T_AMPERSAND; }
"!"			{ count(); return T_EXCLAMATION; }
"~"			{ count(); return T_TILDE; }
"-"			{ count(); return T_MINUS; }
"+"			{ count(); return T_PLUS; }
"*"			{ count(); return T_STAR; }
"/"			{ count(); return T_SLASH; }
"%"			{ count(); return T_PERCENT; }
"<"			{ count(); return T_LESSTHAN; }
">"			{ count(); return T_GREATERTHAN; }
"^"			{ count(); return T_CARET; }
"|"			{ count(); return T_LINE; }
"?"			{ count(); return T_QUESTIONMARK; }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}
