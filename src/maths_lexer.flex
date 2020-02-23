%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

digit           [0-9]
letter          [a-zA-Z]

%%
"*"             { return T_STAR; }
"+"             { fprintf(stderr, "returning + "); return T_PLUS; }
"^"            { return T_XOR; }
"/"            { return T_DIVIDE; }
"-"             { return T_MINUS; }
","             { return T_COMMA; }
"="             { return T_ASSIGN; }

">>"            { return T_LSHIFT; }
"<<"            { return T_RSHIFT; }
"<"             { return T_LESSTHAN; }
">"             { return T_GREATERTHAN; }
"=="            { return T_EQUALS; }
"!="            { return T_NOT_EQUALS; }

"("             { return T_LBRACKET; }
")"             { return T_RBRACKET; }
"{"             { return T_LCURLY; }
"}"             { return T_RCURLY; }
";"             { return T_SEMICOLON; }
":"             { return T_COLON; }

"&"             { return T_AND; }
"|"             { return T_OR; }
"&&"            { return T_AND_OP; }
"||"            { return T_OR_OP; }
"?"             { return T_QUESTION; }

log             { return T_LOG; }
exp             { return T_EXP; }
sqrt            { return T_SQRT; }

if              { return T_IF; }
else            { return T_ELSE; }
while           { return T_WHILE; }
return          { return T_RETURN; }
main            { return T_MAIN; }
int             { return T_INT; }
void            { return T_VOID; }
typedef         { return T_TYPEDEF; }
struct          { return T_STRUCT; }
union           { return T_UNION; }
enum            { return T_ENUM; }
const           { return T_CONST; }
volatile        { return T_VOLATILE; }


[0-9]+([.][0-9]*)?              { yylval.number=strtod(yytext, 0); return T_CONSTANT; }
{letter}({letter}|{digit})*     { yylval.string=new std::string(yytext); return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
