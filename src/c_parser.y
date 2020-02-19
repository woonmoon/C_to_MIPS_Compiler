
%token T_IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP T_PLUS_PLUS T_MINUS_MINUS LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION T_ENUM ELLIPSIS

%token CASE DEFAULT T_IF T_ELSE SWITCH T_WHILE DO T_FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: T_IDENTIFIER {$$ = new Identifier(*$1)}
	| T_CONST
	| T_STRING_LITERAL
	| T_LBRACKET expression T_RBRACKET
	;

postfix_expression
	: primary_expression
	| postfix_expression T_LSQRBRACKET expression T_RSQRBRACKET
	| postfix_expression T_LBRACKET T_RBRACKET
	| postfix_expression T_LBRACKET argument_expression_list T_RBRACKET
	| postfix_expression T_FULLSTOP T_IDENTIFIER
	| postfix_expression PTR_OP T_IDENTIFIER
	| postfix_expression T_PLUS_PLUS
	| postfix_expression T_MINUS_MINUS
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list T_COMMA assignment_expression
	;

unary_expression
	: postfix_expression
	| T_PLUS_PLUS unary_expression
	| T_MINUS_MINUS unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF T_LBRACKET type_name T_RBRACKET
	;

unary_operator
	: T_AMPERSAND
	| T_STAR
	| T_PLUS
	| T_MINUS
	| T_TILDE
	| T_EXCLAMATION
	;

cast_expression
	: unary_expression
	| T_LBRACKET type_name T_RBRACKET cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression T_STAR cast_expression
	| multiplicative_expression T_SLASH cast_expression
	| multiplicative_expression T_PERCENT cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression T_PLUS multiplicative_expression
	| additive_expression T_MINUS multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression T_LEFT_OP additive_expression
	| shift_expression T_RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression T_LESSTHAN shift_expression
	| relational_expression T_GREATERTHAN shift_expression
	| relational_expression T_LE_OP shift_expression
	| relational_expression T_GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression T_EQ_OP relational_expression
	| equality_expression T_NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression T_AMPERSAND equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression T_CARET and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression T_LINE exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression T_QUESTIONMARK expression T_COLON conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: T_ASSIGN
	| T_MUL_ASSIGN
	| T_DIV_ASSIGN
	| T_MOD_ASSIGN
	| T_ADD_ASSIGN
	| T_SUB_ASSIGN
	| T_LEFT_ASSIGN
	| T_RIGHT_ASSIGN
	| T_AND_ASSIGN
	| T_XOR_ASSIGN
	| T_OR_ASSIGN
	;

expression
	: assignment_expression
	| expression T_COMMA assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers T_SEMICOLON
	| declaration_specifiers init_declarator_list T_SEMICOLON
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list T_COMMA init_declarator
	;

init_declarator
	: declarator
	| declarator T_ASSIGN initializer
	;

storage_class_specifier
	: T_TYPEDEF
	| T_EXTERN
	| T_STATIC
	| T_AUTO
	| T_REGISTER
	;

type_specifier
	: T_VOID
	| T_CHAR
	| T_SHORT
	| T_INT
	| T_LONG
	| T_FLOAT
	| T_DOUBLE
	| T_SIGNED
	| T_UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| T_TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union T_IDENTIFIER T_LCURLY struct_declaration_list T_RCURLY
	| struct_or_union T_LCURLY struct_declaration_list T_RCURLY
	| struct_or_union T_IDENTIFIER
	;

struct_or_union
	: T_STRUCT
	| T_UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list T_SEMICOLON
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list T_COMMA struct_declarator
	;

struct_declarator
	: declarator
	| T_COLON constant_expression
	| declarator T_COLON constant_expression
	;

enum_specifier
	: T_ENUM T_LCURLY enumerator_list T_RCURLY
	| T_ENUM T_IDENTIFIER T_LCURLY enumerator_list T_RCURLY
	| T_ENUM T_IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list T_COMMA enumerator
	;

enumerator
	: T_IDENTIFIER
	| T_IDENTIFIER T_ASSIGN constant_expression
	;

type_qualifier
	: T_CONST
	| T_VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: T_IDENTIFIER
	| T_LBRACKET declarator T_RBRACKET
	| direct_declarator T_LSQRBRACKET constant_expression T_RSQRBRACKET
	| direct_declarator T_LSQRBRACKET T_RSQRBRACKET
	| direct_declarator T_LBRACKET parameter_type_list T_RBRACKET
	| direct_declarator T_LBRACKET identifier_list T_RBRACKET
	| direct_declarator T_LBRACKET T_RBRACKET
	;

pointer
	: T_STAR
	| T_STAR type_qualifier_list
	| T_STAR pointer
	| T_STAR type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list T_COMMA ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list T_COMMA parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: T_IDENTIFIER
	| identifier_list T_COMMA T_IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: T_LBRACKET abstract_declarator T_RBRACKET
	| T_LSQRBRACKET T_RSQRBRACKET
	| T_LSQRBRACKET constant_expression T_RSQRBRACKET
	| direct_abstract_declarator T_LSQRBRACKET T_RSQRBRACKET
	| direct_abstract_declarator T_LSQRBRACKET constant_expression T_RSQRBRACKET
	| T_LBRACKET T_RBRACKET
	| T_LBRACKET parameter_type_list T_RBRACKET
	| direct_abstract_declarator T_LBRACKET T_RBRACKET
	| direct_abstract_declarator T_LBRACKET parameter_type_list T_RBRACKET
	;

initializer
	: assignment_expression
	| T_LCURLY initializer_list T_RCURLY
	| T_LCURLY initializer_list T_COMMA T_RCURLY
	;

initializer_list
	: initializer
	| initializer_list T_COMMA initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: T_IDENTIFIER T_COLON statement
	| T_CASE constant_expression T_COLON statement
	| T_DEFAULT T_COLON statement
	;

compound_statement
	: T_LCURLY T_RCURLY
	| T_LCURLY statement_list T_RCURLY
	| T_LCURLY declaration_list T_RCURLY
	| T_LCURLY declaration_list statement_list T_RCURLY
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: T_SEMICOLON
	| expression T_SEMICOLON
	;

selection_statement
	: T_IF T_LBRACKET expression T_RBRACKET statement
	| T_IF T_LBRACKET expression T_RBRACKET statement T_ELSE statement
	| T_SWITCH T_LBRACKET expression T_RBRACKET statement
	;

iteration_statement
	: T_WHILE T_LBRACKET expression T_RBRACKET statement
	| T_DO statement T_WHILE T_LBRACKET expression T_RBRACKET T_SEMICOLON
	| T_FOR T_LBRACKET expression_statement expression_statement T_RBRACKET statement
	| T_FOR T_LBRACKET expression_statement expression_statement expression T_RBRACKET statement
	;

jump_statement
	: T_GOTO T_IDENTIFIER T_SEMICOLON
	| T_CONTINUE T_SEMICOLON
	| T_BREAK T_SEMICOLON
	| T_RETURN T_SEMICOLON
	| T_RETURN expression T_SEMICOLON
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%
#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
