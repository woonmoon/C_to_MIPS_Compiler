%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out


  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Expression *expr;
  const ExpressionList *exprList;
  double number;
  std::string *string;
}

%define parse.error verbose
%token T_STAR T_DIVIDE T_PLUS T_MINUS T_EXPONENT T_COMMA
%token T_LSHIFT T_RSHIFT T_LESSTHAN T_GREATERTHAN T_EQUALS T_NOT_EQUALS
%token T_AND T_XOR T_OR T_AND_OP T_OR_OP T_QUESTION
%token T_LBRACKET T_RBRACKET T_LCURLY T_RCURLY T_SEMICOLON T_COLON
%token T_LOG T_EXP T_SQRT
%token T_IF T_ELSE T_WHILE T_RETURN T_MAIN T_INT T_VOID T_STRUCT T_UNION T_ENUM
%token T_ASSIGN
%token T_CONSTANT T_IDENTIFIER T_TYPEDEF T_CONST T_VOLATILE

%type <expr> EXPR TERM UNARY FACTOR
%type <expr> POSTFIX_EXPRESSION PRIMARY_EXPRESSION EXPRESSION ASSIGNMENT_EXPRESSION CAST_EXPRESSION
%type <expr> UNARY_EXPRESSION MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION
%type <expr> SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type <expr> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_OR_EXPRESSION LOGICAL_AND_EXPRESSION
%type <expr> CONDITIONAL_EXPRESSION CONSTANT_EXPRESSION
%type <expr> DECLARATION DECLARATION_SPECIFIERS STORAGE_CLASS_SPECIFIER
%type <expr> TYPE_QUALIFIER DECLARATOR INITIALIZER
%type <expr> STRUCT_OR_UNION_SPECIFIER ENUM_SPECIFIER STRUCT_DECLARATOR ENUMERATOR
%type <expr> DIRECT_DECLARATOR POINTER PARAMETER_DECLARATION ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR
%type <expr> STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT EXPRESSION_STATEMENT SELECTION_STATEMENT ITERATION_STATEMENT JUMP_STATEMENT
%type <expr> TRANSLATION_UNIT EXTERNAL_DECLARATION FUNCTION_DEFINITION

%type <exprList> INIT_DECLARATOR ARGUMENT_EXPRESSION_LIST INIT_DECLARATOR_LIST STRUCT_DECLARATOR_LIST
%type <exprList> SPECIFIER_QUALIFIER_LIST ENUMERATOR_LIST
%type <exprList> PARAMETER_TYPE_LIST IDENTIFIER_LIST TYPE_QUALIFIER_LIST INITIALIZER_LIST

%type <token> ASSIGNMENT_OPERATOR
%type <number> T_CONSTANT
%type <string> T_IF T_ELSE T_WHILE T_RETURN T_MAIN T_INT T_VOID TYPE_SPECIFIER
%type <string> T_IDENTIFIER T_LOG T_EXP T_SQRT FUNCTION_NAME

%start ROOT
%%


PRIMARY_EXPRESSION : T_IDENTIFIER {$$ = new Identifier(*$1); }
                   | T_CONSTANT { std::cout << "issa constant" << std::endl;}
                   | T_LBRACKET EXPRESSION T_RBRACKET { std::cout << "lbr rbr" << std::endl; }
                   ;
POSTFIX_EXPRESSION : PRIMARY_EXPRESSION {$$ = $1;}
                   | POSTFIX_EXPRESSION T_LBRACKET T_RBRACKET
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   ;
ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION
                         ;
UNARY_EXPRESSION : POSTFIX_EXPRESSION {$$ = $1;}
                 | UNARY_OPERATOR CAST_EXPRESSION
                 ;
UNARY_OPERATOR : T_STAR { std::cout << "* found" << std::endl; }
               | T_PLUS { std::cout << "+ found" << std::endl; }
               | T_MINUS { std::cout << "- found" << std::endl; }
               ;

CAST_EXPRESSION : UNARY_EXPRESSION { std::cout << "cast expression: unary expression" << std::endl; }
                | T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION { std::cout << "cast expression: ( type name ) cast expression" << std::endl; }
                ;

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION { std::cout << "multiplicative expression: cast expression" << std::endl; }
                          | MULTIPLICATIVE_EXPRESSION T_STAR CAST_EXPRESSION { std::cout << "multiplicative expression: multiplicative expression * cast expression" << std::endl; }
                          ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION { std::cout << "additive expression: multiplicative expression" << std::endl; }
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION { std::cout << "additive expression: additive expression + multiplicative expression" << std::endl; }
                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION { std::cout << "additive expression: additive expression - multiplicative expression" << std::endl; }
                    ;

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION { std::cout << "shift expression: additive expression" << std::endl; }
                 | SHIFT_EXPRESSION T_LSHIFT ADDITIVE_EXPRESSION { std::cout << "shift expression: shift expression << additive expression" << std::endl; }
                 | SHIFT_EXPRESSION T_RSHIFT ADDITIVE_EXPRESSION { std::cout << "shift expression: shift expression >> additive expression" << std::endl; }
                 ;

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION { std::cout << "relational expression: shift expression" << std::endl; }
                      | RELATIONAL_EXPRESSION T_LESSTHAN SHIFT_EXPRESSION { std::cout << "relational expression: relational expression < shift expression" << std::endl; }
                      | RELATIONAL_EXPRESSION T_GREATERTHAN SHIFT_EXPRESSION { std::cout << "relational expression: relational expression > shift expression" << std::endl; }
                      ;

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION { std::cout << "equality expression: relational expression" << std::endl; }
                    | EQUALITY_EXPRESSION T_EQUALS RELATIONAL_EXPRESSION { std::cout << "equality expression: equality expression = relational expression" << std::endl; }
                    | EQUALITY_EXPRESSION T_NOT_EQUALS RELATIONAL_EXPRESSION { std::cout << "equality expression: equality expression != relational expression" << std::endl; }
                    ;

AND_EXPRESSION : EQUALITY_EXPRESSION { std::cout << "and expression: equality expression" << std::endl; }
               | AND_EXPRESSION T_AND EQUALITY_EXPRESSION { std::cout << "and expression: and expression & equality expression" << std::endl; }
               ;

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION { std::cout << "exclusive or expression: and expression" << std::endl; }
                        | EXCLUSIVE_OR_EXPRESSION T_XOR AND_EXPRESSION { std::cout << "exclusive or expression: exclusive or expression ^ and expression" << std::endl; }
                        ;

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION { std::cout << "inclusive or expression: exclusive or expression" << std::endl; }
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION { std::cout << "inclusive or expression: inclusive or expression | exclusive or expression" << std::endl; }
                        ;

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION { std::cout << "logical and expression: inclusive or expression" << std::endl; }
                       | LOGICAL_AND_EXPRESSION T_AND_OP INCLUSIVE_OR_EXPRESSION { std::cout << "logical and expression: logical and expression & inclusive or expression" << std::endl; }
                       ;

LOGICAL_OR_EXPRESSION : LOGICAL_AND_EXPRESSION { std::cout << "logical or expression: logical and expression" << std::endl; }
                      | LOGICAL_OR_EXPRESSION T_OR_OP LOGICAL_AND_EXPRESSION { std::cout << "logical or expression: logical or expression | logical and expression" << std::endl; }
                      ;

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION { std::cout << "conditional expression: logical or expression" << std::endl; }
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPRESSION T_COLON CONDITIONAL_EXPRESSION { std::cout << "conditional expression: logical or expression? conditional expression" << std::endl; }
                       ;

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION { std::cout << "assignment expression: conditional expression" << std::endl; }
                      | UNARY_EXPRESSION T_ASSIGN ASSIGNMENT_EXPRESSION { std::cout << "assignment expression: unary expression = assignment expression" << std::endl; }
                      ;

ASSIGNMENT_OPERATOR : T_ASSIGN { std::cout << "assignment operator: =" << std::endl; }
                      ;

EXPRESSION : ASSIGNMENT_EXPRESSION { std::cout << "expression: assignment expression" << std::endl; }
           | EXPRESSION T_COMMA ASSIGNMENT_EXPRESSION { std::cout << "expression: expression, assignment expression" << std::endl; }
           ;

CONSTANT_EXPRESSION : CONDITIONAL_EXPRESSION { std::cout << "constant expression: condiitional expression" << std::endl; }
                      ;

INIT_DECLARATOR_LIST : INIT_DECLARATOR { std::cout << "init declarator list: init declarator" << std::endl; }
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR { std::cout << "init declarator list: init declarator list, init declarator" << std::endl; }
                     ;

INIT_DECLARATOR : DECLARATOR { std::cout << "init declarator: declarator" << std::endl; }
                | DECLARATOR T_ASSIGN INITIALIZER { std::cout << "init declarator: declarator = initializer" << std::endl; }
                ;

STORAGE_CLASS_SPECIFIER : T_TYPEDEF { std::cout << "storage class specifier: typedef" << std::endl; }
                        ;

TYPE_SPECIFIER : T_VOID { std::cout << "type specifier: void" << std::endl; }
               | T_INT {std::cout << "type specifier: int" << std::endl; $$ = $1; }
               | STRUCT_OR_UNION_SPECIFIER { std::cout << "type specifier: struct or union specifier" << std::endl; }
               | ENUM_SPECIFIER { std::cout << "type specifier: enum specifier" << std::endl; }
               ;

STRUCT_OR_UNION_SPECIFIER : STRUCT_OR_UNION T_IDENTIFIER T_LCURLY STRUCT_DECLARATION_LIST T_RCURLY { std::cout << "struct or union specifier: struct or union { struct declaration list}" << std::endl; }
                          | STRUCT_OR_UNION T_LCURLY STRUCT_DECLARATION_LIST T_RCURLY { std::cout << "struct or union specifier: struct or union { struct declaration list }" << std::endl; }
                          | STRUCT_OR_UNION T_IDENTIFIER { std::cout << "struct or union specifier: struct or union identifier" << std::endl; }
                          ;

STRUCT_OR_UNION : T_STRUCT { std::cout << "struct or union: struct" << std::endl; }
                | T_UNION { std::cout << "struct or union: union" << std::endl; }
                ;

STRUCT_DECLARATION_LIST : STRUCT_DECLARATION { std::cout << "struct declaration list: struct declaration" << std::endl; }
                        | STRUCT_DECLARATION_LIST STRUCT_DECLARATION { std::cout << "struct declaration list: struct declaration list struct declaration" << std::endl; }
                        ;

STRUCT_DECLARATION : SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATION_LIST T_SEMICOLON { std::cout << "struct declaration: specifier qualifier list struct declaration list;" << std::endl; }
                    ;

SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST { std::cout << "specifier qualifier list: type specifier specifier qualifier list" << std::endl; }
                         | TYPE_SPECIFIER { std::cout << "specifier qualifier list: type specifier" << std::endl; }
                         | TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST { std::cout << "specifier qualifier list: type qualifier specifier qualifier list" << std::endl; }
                         | TYPE_QUALIFIER { std::cout << "specifier qualifier list: type qualifier" << std::endl; }
                         ;

STRUCT_DECLARATOR_LIST : STRUCT_DECLARATOR { std::cout << "struct declarator list: struct declarator" << std::endl; }
                       | STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR { std::cout << "struct declarator list: struct declarator list, struct declarator" << std::endl; }
                       ;

STRUCT_DECLARATOR : DECLARATOR { std::cout << "struct declarator: declarator" << std::endl; }
                  | T_COLON CONSTANT_EXPRESSION { std::cout << "struct declarator: : constant expression" << std::endl; }
                  | DECLARATOR T_COLON CONSTANT_EXPRESSION { std::cout << "struct declarator: declarator : constant expression" << std::endl; }
                  ;

ENUM_SPECIFIER : T_ENUM T_LCURLY ENUMERATOR_LIST T_RCURLY { std::cout << "enum specifier: enum { enumerator list }" << std::endl; }
               | T_ENUM T_IDENTIFIER T_LCURLY ENUMERATOR_LIST T_RCURLY { std::cout << "enum specifier: enum identifier { enumerator list }" << std::endl; }
               | T_ENUM T_IDENTIFIER { std::cout << "enum identifier" << std::endl; }
               ;

ENUMERATOR_LIST : ENUMERATOR { std::cout << "enumerator list: enumerator" << std::endl; }
                | ENUMERATOR_LIST T_COMMA ENUMERATOR { std::cout << "enumerator list: enumerator list, enumerator" << std::endl; }
                ;

ENUMERATOR : T_IDENTIFIER { std::cout << "enumerator: identifier" << std::endl; }
           | T_IDENTIFIER T_ASSIGN CONSTANT_EXPRESSION { std::cout << "enumerator: identifier = constant expression" << std::endl; }
           ;

TYPE_QUALIFIER : T_CONST { std::cout << "type qualifier: const" << std::endl; }
               | T_VOLATILE { std::cout << "type qualifier: volatile" << std::endl; }
               ;



DIRECT_DECLARATOR : T_IDENTIFIER  { $$ = new Identifier(*$1); std::cout << "direct declarator: identifier" << std::endl;}
                  | T_LBRACKET DECLARATOR T_RBRACKET { $$ = $2; std::cout << "direct declarator: ( declarator )" << std::endl; }
                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET { std::cout << "direct declarator: direct declarator ( parameter type list )" << std::endl; }
                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET { std::cout << "direct declarator: direct declarator ( identifier list )" << std::endl; }
                  | DIRECT_DECLARATOR T_LBRACKET T_RBRACKET { std::cout << "direct declarator: direct declarator( )" << std::endl; }
                  ;

POINTER : T_STAR { std::cout << "pointer: *" << std::endl; }
        | T_STAR TYPE_QUALIFIER_LIST { std::cout << "pointer: * type qualifier list" << std::endl; }
        | T_STAR POINTER { std::cout << "pointer: * pointer" << std::endl; }
        | T_STAR TYPE_QUALIFIER_LIST POINTER { std::cout << "pointer: * type qualifier list pointer" << std::endl; }
        ;

TYPE_QUALIFIER_LIST : TYPE_QUALIFIER { std::cout << "type qualifier list: type qualifier" << std::endl; }
                    | TYPE_QUALIFIER_LIST TYPE_QUALIFIER { std::cout << "type qualifier list: type qualifier list type qualifier" << std::endl; }
                    ;

PARAMETER_TYPE_LIST : PARAMETER_LIST { std::cout << "parameter type list: parameter list" << std::endl; }
                    ;

PARAMETER_LIST : PARAMETER_DECLARATION { std::cout << "parameter list: parameter declaration" << std::endl; }
               | PARAMETER_LIST T_COMMA PARAMETER_DECLARATION { std::cout << "parameter list: parameter list, parameter declaration" << std::endl; }
               ;

PARAMETER_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR { std::cout << "parameter declaration: declaration specifiers declarator" << std::endl; }
                      | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR { std::cout << "parameter declaration: declaration specifiers abstract declarator" << std::endl; }
                      | DECLARATION_SPECIFIERS { std::cout << "parameter declaration: declaration specifiers" << std::endl; }
                      ;

IDENTIFIER_LIST : T_IDENTIFIER { std::cout << "identifier list: identifier" << std::endl; }
                | IDENTIFIER_LIST T_COMMA T_IDENTIFIER { std::cout << "identifier list: identifier list, identifier" << std::endl; }
                ;

TYPE_NAME : SPECIFIER_QUALIFIER_LIST { std::cout << "type name: specifier qualifier list" << std::endl; }
          | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR { std::cout << "type name: specifier qualifier list abstract declarator" << std::endl; }
          ;

ABSTRACT_DECLARATOR : POINTER { std::cout << "abstract declarator: pointer" << std::endl; }
                    | DIRECT_ABSTRACT_DECLARATOR { std::cout << "abstract declarator: direct abstract declarator" << std::endl; }
                    | POINTER DIRECT_ABSTRACT_DECLARATOR { std::cout << "abstract declarator: pointer direct abstract declarator" << std::endl; }
                    ;

DIRECT_ABSTRACT_DECLARATOR : T_LBRACKET ABSTRACT_DECLARATOR T_RBRACKET { std::cout << "direct abstract declarator: ( abstract declarator )" << std::endl; }
                           | T_LBRACKET T_RBRACKET { std::cout << "direct abstract declarator: ()" << std::endl; }
                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET { std::cout << "direct abstract declarator: ( parameter type list)" << std::endl; }
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET T_RBRACKET { std::cout << "direct abstract declarator: ()" << std::endl; }
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET { std::cout << "direct abstract declator: ( parameter type list)" << std::endl; }
                           ;

INITIALIZER : ASSIGNMENT_EXPRESSION { std::cout << "initializer: assignment expression" << std::endl; }
            //removed other 2 because we aren't doing 2D arrays
            ;

INITIALIZER_LIST : INITIALIZER { std::cout << "initializer list: initializer" << std::endl; }
                 | INITIALIZER_LIST T_COMMA INITIALIZER { std::cout << "initializer list: init list, initializer" << std::endl; }
                 ;

STATEMENT : LABELED_STATEMENT { std::cout << "statement: labeled statement" << std::endl; }
          | COMPOUND_STATEMENT { std::cout << "statement: compound statement" << std::endl; }
          | EXPRESSION_STATEMENT { std::cout << "statement: expression statement" << std::endl; }
          | SELECTION_STATEMENT { std::cout << "statement: selection statement" << std::endl; }
          | ITERATION_STATEMENT { std::cout << "statement: iteration statement" << std::endl; }
          | JUMP_STATEMENT { std::cout << "statement: jump statement" << std::endl; }
          ;

LABELED_STATEMENT : T_IDENTIFIER T_COLON STATEMENT { std::cout << "labelled statement: identifier: statement" << std::endl; }
                  ;

COMPOUND_STATEMENT : T_LCURLY T_RCURLY { std::cout << "compound statement: { }" << std::endl; }
                   | T_LCURLY STATEMENT_LIST T_RCURLY { std::cout << "compound statement: { statement list }" << std::endl; }
                   | T_LCURLY DECLARATION_LIST T_RCURLY { std::cout << "compound statement: { declaration list }" << std::endl; }
                   | T_LCURLY DECLARATION_LIST STATEMENT_LIST T_RCURLY { std::cout << "compound statement: { declaration list }" << std::endl; }
                   ;


STATEMENT_LIST : STATEMENT { std::cout << "statement list: statement" << std::endl; }
               | STATEMENT_LIST STATEMENT { std::cout << "statement list: statement list statement" << std::endl; }
               ;

EXPRESSION_STATEMENT : T_SEMICOLON { std::cout << "expression statement: ; " << std::endl; }
                     | EXPRESSION T_SEMICOLON { std::cout << "expression statement: expression;" << std::endl; }
                     ;

SELECTION_STATEMENT : T_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT { std::cout << "if statement" << std::endl; }
                    | T_IF T_LBRACKET EXPRESSION T_RBRACKET T_ELSE STATEMENT { std::cout << "if else statement" << std::endl; }
                    ;

ITERATION_STATEMENT : T_WHILE T_LBRACKET EXPRESSION T_RBRACKET STATEMENT { std::cout << "while loop" << std::endl; }
                    ;

JUMP_STATEMENT : T_RETURN T_SEMICOLON { std::cout << "jump statement: return" << std::endl; }
               | T_RETURN EXPRESSION T_SEMICOLON { std::cout << "jump statement: return expression" << std::endl; }
               ;

DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER { std::cout << "declaration specifier: storage class specifier" << std::endl; }
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS { std::cout << "declaration specifier: storage class specifier declaration specifier" << std::endl; }
                       | TYPE_SPECIFIER  { std::cout << "declaration specifier: type specifier" << std::endl; }
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS  { std::cout << "declaration specifier: type specifier declaration specifiers" << std::endl; }
                       | TYPE_QUALIFIER  { std::cout << "declaration specifier: type qualifier" << std::endl; }
                       | TYPE_QUALIFIER DECLARATION_SPECIFIERS  { std::cout << "declaration specifier: type qualifier declaration specifiers" << std::endl; }
                       ;

DECLARATOR : POINTER DIRECT_DECLARATOR { std::cout << "declarator: pointer direct declarator" << std::endl; }
           | DIRECT_DECLARATOR { std::cout << "declarator: direct declarator" << std::endl; }
           ;

DECLARATION_LIST : DECLARATION { std::cout << "declaration list: declaration" << std::endl; }
                 | DECLARATION_LIST DECLARATION { std::cout << "declaration list: declaration list declaration" << std::endl; }
                 ;

FUNCTION_DEFINITION : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT
                    | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT
                    | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT
                    | DECLARATOR COMPOUND_STATEMENT
                    ;

DECLARATION : DECLARATION_SPECIFIERS T_SEMICOLON  { $$ = $1; std::cout << "declaration: declaration specifiers;" << std::endl;}
            | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON  { std::cout << "declaration: declaration specifiers init declarator list;" << std::endl;}
            ;

EXTERNAL_DECLARATION : FUNCTION_DEFINITION { std::cout << "external declaration: funct declaration"<<std::endl; }
                     | DECLARATION {$$ = $1; std::cout << "external declaration: declaration" << std::endl;}
                     ;

TRANSLATION_UNIT : EXTERNAL_DECLARATION { $$ = $1; std::cout << "translational unit: external declaration" << std::endl; }
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION {std::cout << "translational unit: translational unit external declaration" << std::endl;}
                 ;

ROOT : TRANSLATION_UNIT { g_root = $1; std::cout << "Made the root" << std::endl;}

%%

const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
