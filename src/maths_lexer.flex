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
"+"             { return T_PLUS; }
"^"            { return T_XOR; }
"/"            { return T_DIVIDE; }
"%"            { return T_MOD; }
"-"             { return T_MINUS; }
","             { return T_COMMA; }
"!"             {return T_NOT; }
"~"             {return T_INVERT; }

"++"             { return T_PLUS_PLUS; }
"--"             { return T_MINUS_MINUS; }

"="             { return T_ASSIGN; }
"+="            { return T_PLUS_EQ; }
"-="            { return T_MINUS_EQ; }
"*="            { return T_TIMES_EQ; }
"/="            { return T_DIV_EQ; }
"%="            { return T_MOD_EQ; }
"&="            { return T_AND_EQ; }
"|="            { return T_OR_EQ; }
"^="            { return T_XOR_EQ; }
"<<="            { return T_LSHIFT_EQ; }
">>="            { return T_RSHIFT_EQ; }

">>"            { return T_LSHIFT; }
"<<"            { return T_RSHIFT; }
"<"             { return T_LESSTHAN; }
">"             { return T_GREATERTHAN; }
"<="             { return T_LESSTHAN_EQUAL; }
">="             { return T_GREATERTHAN_EQUAL; }

"=="            { return T_EQUALS; }
"!="            { return T_NOT_EQUALS; }

"("             { return T_LBRACKET; }
")"             { return T_RBRACKET; }
"{"             { return T_LCURLY; }
"}"             { return T_RCURLY; }
"["             { return T_LSQUARE; }
"]"             { return T_RSQUARE; }
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
for             { return T_FOR; }
return          { return T_RETURN; }
int             { return T_INT; }
void            { return T_VOID; }
typedef         { return T_TYPEDEF; }
struct          { return T_STRUCT; }
union           { return T_UNION; }
enum            { return T_ENUM; }
const           { return T_CONST; }
volatile        { return T_VOLATILE; }
continue        { return T_CONTINUE; }
break           { return T_BREAK; }


[0-9]+([.][0-9]*)?              { yylval.number=strtod(yytext, 0); return T_CONSTANT; }
[_]*[a-zA-Z0-9_]*     { yylval.string=new std::string(yytext); return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  std::cout << "Parse Error: " << s << std::endl;
  exit(1);
}
