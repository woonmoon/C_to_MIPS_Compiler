%code requires{
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
}

// Represents the value associated with any kind of
// AST node.
%union{
  Node *expr;
  Expression* actualExpression;
  List *exprList;
  double number;
  yytokentype token;
  std::string *string;
}

%define parse.error verbose
%token T_STAR T_DIVIDE T_PLUS T_MINUS T_EXPONENT T_COMMA T_MOD T_LESSTHAN_EQUAL T_GREATERTHAN_EQUAL
%token T_LSHIFT T_RSHIFT T_LESSTHAN T_GREATERTHAN T_EQUALS T_NOT_EQUALS
%token T_AND T_XOR T_OR T_AND_OP T_OR_OP T_QUESTION
%token T_LBRACKET T_RBRACKET T_LCURLY T_RCURLY T_LSQUARE T_RSQUARE T_SEMICOLON T_COLON
%token T_LOG T_EXP T_SQRT T_NOT T_INVERT
%token T_IF T_ELSE T_WHILE T_RETURN T_INT T_VOID T_STRUCT T_UNION T_ENUM T_CONTINUE T_BREAK T_FOR
%token T_ASSIGN T_PLUS_EQ T_MINUS_EQ T_TIMES_EQ T_DIV_EQ T_MOD_EQ T_AND_EQ T_OR_EQ T_XOR_EQ T_LSHIFT_EQ T_RSHIFT_EQ
%token T_CONSTANT T_IDENTIFIER T_TYPEDEF T_CONST T_VOLATILE T_PLUS_PLUS T_MINUS_MINUS

%type <expr> DECLARATION DECLARATION_SPECIFIERS STORAGE_CLASS_SPECIFIER
%type <expr> TYPE_QUALIFIER DECLARATOR INITIALIZER
%type <expr> STRUCT_OR_UNION_SPECIFIER ENUM_SPECIFIER STRUCT_DECLARATOR ENUMERATOR TYPE_SPECIFIER
%type <expr> DIRECT_DECLARATOR POINTER PARAMETER_DECLARATION ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR
%type <expr> STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT EXPRESSION_STATEMENT SELECTION_STATEMENT ITERATION_STATEMENT JUMP_STATEMENT
%type <expr> EXTERNAL_DECLARATION FUNCTION_DEFINITION INIT_DECLARATOR 

%type <actualExpression> CONSTANT_EXPRESSION MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION PRIMARY_EXPRESSION EXPRESSION ASSIGNMENT_EXPRESSION CAST_EXPRESSION
%type <actualExpression> SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION POSTFIX_EXPRESSION UNARY_EXPRESSION
%type <actualExpression> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_OR_EXPRESSION LOGICAL_AND_EXPRESSION CONDITIONAL_EXPRESSION

%type <exprList> ARGUMENT_EXPRESSION_LIST STRUCT_DECLARATOR_LIST TRANSLATION_UNIT
%type <exprList> SPECIFIER_QUALIFIER_LIST ENUMERATOR_LIST INIT_DECLARATOR_LIST PARAMETER_LIST DECLARATION_LIST
%type <exprList> PARAMETER_TYPE_LIST IDENTIFIER_LIST TYPE_QUALIFIER_LIST INITIALIZER_LIST STATEMENT_LIST

%type <token> ASSIGNMENT_OPERATOR
%type <number> T_CONSTANT
%type <string> T_IF T_ELSE T_WHILE T_RETURN T_INT T_VOID
%type <string> T_IDENTIFIER T_LOG T_EXP T_SQRT UNARY_OPERATOR

%start ROOT
%%


PRIMARY_EXPRESSION : T_IDENTIFIER { $$ = new Identifier(*$1);}
                   | T_CONSTANT { $$ = new Constant($1); }
                   | T_LBRACKET EXPRESSION T_RBRACKET { $$ = $2; }
                   ;

POSTFIX_EXPRESSION : PRIMARY_EXPRESSION { $$ = $1;}
                   | POSTFIX_EXPRESSION T_LSQUARE EXPRESSION T_RSQUARE { $$ = new arrayIndex($1, $3); }
                   | POSTFIX_EXPRESSION T_LBRACKET T_RBRACKET { $$ = new functionCall($1, new List(), 1);}
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET { $$ = new functionCall($1, $3, 0); }
                   | POSTFIX_EXPRESSION T_PLUS_PLUS {$$ = new postInc($1); }
                   | POSTFIX_EXPRESSION T_MINUS_MINUS {$$ = new postDec($1); }
                   ;

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION {$$ = new paramList($1);}
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION {$$ = new paramList($1); ($$)->addtoList($3);}
                         ;

UNARY_EXPRESSION : POSTFIX_EXPRESSION { $$ = $1;}
                 | UNARY_OPERATOR CAST_EXPRESSION {$$ = new unaryOp(*$1, $2);}
                 | T_PLUS_PLUS UNARY_EXPRESSION {$$ = new preInc($2);}
                 | T_MINUS_MINUS UNARY_EXPRESSION {$$ = new preDec($2);}
                 ;

UNARY_OPERATOR : T_STAR { $$ = new std::string("*");}
               | T_PLUS { $$ = new std::string("+");}
               | T_MINUS {$$ = new std::string("-"); }
               | T_AND {$$ = new std::string("&");}
               | T_NOT {$$ = new std::string("!");}
               | T_INVERT {$$ = new std::string("~");}
               ;

CAST_EXPRESSION : UNARY_EXPRESSION { $$ = $1; }
                | T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION { }
                ;

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION { $$ = $1; }
                          | MULTIPLICATIVE_EXPRESSION T_STAR CAST_EXPRESSION { $$ = new mulOp($1, $3); }
                          | MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION { $$ = new divOp($1, $3);  }
                          | MULTIPLICATIVE_EXPRESSION T_MOD CAST_EXPRESSION { $$ = new modOp($1, $3);  }
                          ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION { $$ = $1; }
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION { $$ = new addOp($1, $3);  }
                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION { $$ = new subOp($1, $3); }
                    ;

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION { $$ = $1;  }
                 | SHIFT_EXPRESSION T_LSHIFT ADDITIVE_EXPRESSION { $$ = new leftShiftOp($1, $3);  }
                 | SHIFT_EXPRESSION T_RSHIFT ADDITIVE_EXPRESSION { $$ = new rightShiftOp($1, $3);  }
                 ;

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION { $$ = $1;  }
                      | RELATIONAL_EXPRESSION T_LESSTHAN SHIFT_EXPRESSION { $$ = new lessThan($1, $3); }
                      | RELATIONAL_EXPRESSION T_GREATERTHAN SHIFT_EXPRESSION { $$ = new greaterThan($1, $3);  }
                      | RELATIONAL_EXPRESSION T_LESSTHAN_EQUAL SHIFT_EXPRESSION { $$ = new lessThanEqual($1, $3);  }
                      | RELATIONAL_EXPRESSION T_GREATERTHAN_EQUAL SHIFT_EXPRESSION { $$ = new greaterThanEqual($1, $3);  }
                      ;

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION { $$ = $1;  }
                    | EQUALITY_EXPRESSION T_EQUALS RELATIONAL_EXPRESSION { $$ = new equalTo($1, $3);  }
                    | EQUALITY_EXPRESSION T_NOT_EQUALS RELATIONAL_EXPRESSION { $$ = new notEqualTo($1, $3); }
                    ;

AND_EXPRESSION : EQUALITY_EXPRESSION { $$ = $1;}
               | AND_EXPRESSION T_AND EQUALITY_EXPRESSION { $$ = new andOp($1, $3); }
               ;

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION { $$ = $1; }
                        | EXCLUSIVE_OR_EXPRESSION T_XOR AND_EXPRESSION {  $$ = new xorOp($1, $3); }
                        ;

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION { $$ = $1;  }
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION { $$ = new orOp($1, $3);  }
                        ;

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION { $$ = $1;   }
                       | LOGICAL_AND_EXPRESSION T_AND_OP INCLUSIVE_OR_EXPRESSION { $$ = new logAndOp($1, $3);  }
                       ;

LOGICAL_OR_EXPRESSION : LOGICAL_AND_EXPRESSION { $$ = $1;   }
                      | LOGICAL_OR_EXPRESSION T_OR_OP LOGICAL_AND_EXPRESSION { $$ = new logOrOp($1, $3); }
                      ;

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION { $$ = $1; }
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPRESSION T_COLON CONDITIONAL_EXPRESSION { }
                       ;

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION { $$ = $1;}
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION { 
                        
                        switch($2){
                            case T_ASSIGN: $$ = new assignOp($1, $3); break;
                            case T_PLUS_EQ: $$ = new plusAssignOp($1, $3); break;
                            case T_MINUS_EQ: $$ = new subAssignOp($1, $3); break;
                            case T_TIMES_EQ: $$ = new multAssignOp($1, $3); break;
                            case T_DIV_EQ: $$ = new divAssignOp($1, $3); break;
                            case T_MOD_EQ: $$ = new modAssignOp($1, $3); break;
                            case T_AND_EQ: $$ = new andAssignOp($1, $3); break;
                            case T_OR_EQ: $$ = new orAssignOp($1, $3); break;
                            case T_XOR_EQ: $$ = new xorAssignOp($1, $3); break;
                            case T_LSHIFT_EQ: $$ = new leftShiftAssignOp($1, $3); break;
                            case T_RSHIFT_EQ: $$ = new rightShiftAssignOp($1, $3); break;
                            default: break;
                          }  
                        }
                      ;

ASSIGNMENT_OPERATOR : T_ASSIGN { $$ = T_ASSIGN; }
                    | T_PLUS_EQ { $$ = T_PLUS_EQ; }
                    | T_MINUS_EQ { $$ = T_MINUS_EQ; }
                    | T_TIMES_EQ { $$ = T_TIMES_EQ; }
                    | T_DIV_EQ { $$ = T_DIV_EQ; }
                    | T_MOD_EQ { $$ = T_MOD_EQ; }
                    | T_AND_EQ { $$ = T_AND_EQ; }
                    | T_OR_EQ { $$ = T_OR_EQ; }
                    | T_XOR_EQ { $$ = T_XOR_EQ; }
                    | T_LSHIFT_EQ { $$ = T_LSHIFT_EQ; }
                    | T_RSHIFT_EQ { $$ = T_RSHIFT_EQ; }

                    ;

EXPRESSION : ASSIGNMENT_EXPRESSION {  }
           | EXPRESSION T_COMMA ASSIGNMENT_EXPRESSION {  }
           ;

CONSTANT_EXPRESSION : CONDITIONAL_EXPRESSION {  }
                    ;

INIT_DECLARATOR_LIST : INIT_DECLARATOR { $$ = new declList($1); }
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR { $$ = new declList($1); ($$)->addtoList($3);}
                     ;

INIT_DECLARATOR : DECLARATOR {$$ = new initDeclarator($1);  }
                | DECLARATOR T_ASSIGN INITIALIZER { $$ = new initDeclarator($1, $3); } //IMPLEMENT THIS BIG BOI
                ;

STORAGE_CLASS_SPECIFIER : T_TYPEDEF { }
                        ;

TYPE_SPECIFIER : T_VOID { $$ = new PrimitiveType(PrimitiveType::Specifier::_void); }
               | T_INT {$$ = new PrimitiveType(PrimitiveType::Specifier::_int); }
               | STRUCT_OR_UNION_SPECIFIER {  }
               | ENUM_SPECIFIER {  }
               ;

STRUCT_OR_UNION_SPECIFIER : STRUCT_OR_UNION T_IDENTIFIER T_LCURLY STRUCT_DECLARATION_LIST T_RCURLY {  }
                          | STRUCT_OR_UNION T_LCURLY STRUCT_DECLARATION_LIST T_RCURLY {  }
                          | STRUCT_OR_UNION T_IDENTIFIER {  }
                          ;

STRUCT_OR_UNION : T_STRUCT { }
                | T_UNION {  }
                ;

STRUCT_DECLARATION_LIST : STRUCT_DECLARATION {  }
                        | STRUCT_DECLARATION_LIST STRUCT_DECLARATION {  }
                        ;

STRUCT_DECLARATION : SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATION_LIST T_SEMICOLON {  }
                    ;

SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST {  }
                         | TYPE_SPECIFIER { }
                         | TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST {  }
                         | TYPE_QUALIFIER {  }
                         ;

STRUCT_DECLARATOR_LIST : STRUCT_DECLARATOR { }
                       | STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR { }
                       ;

STRUCT_DECLARATOR : DECLARATOR { }
                  | T_COLON CONSTANT_EXPRESSION {  }
                  | DECLARATOR T_COLON CONSTANT_EXPRESSION {  }
                  ;

ENUM_SPECIFIER : T_ENUM T_LCURLY ENUMERATOR_LIST T_RCURLY {  }
               | T_ENUM T_IDENTIFIER T_LCURLY ENUMERATOR_LIST T_RCURLY {  }
               | T_ENUM T_IDENTIFIER {  }
               ;

ENUMERATOR_LIST : ENUMERATOR {  }
                | ENUMERATOR_LIST T_COMMA ENUMERATOR { }
                ;

ENUMERATOR : T_IDENTIFIER { $$ = new Enumerator(*$1, NULL); }
           | T_IDENTIFIER T_ASSIGN CONSTANT_EXPRESSION { $$ = new Enumerator(*$1, $3); }
           ;

TYPE_QUALIFIER : T_CONST {  }
               | T_VOLATILE { }
               ;


DIRECT_DECLARATOR : T_IDENTIFIER  { $$ = new Identifier(*$1); }
                  | T_LBRACKET DECLARATOR T_RBRACKET { $$ = $2;  }
                  | DIRECT_DECLARATOR T_LSQUARE CONSTANT_EXPRESSION T_RSQUARE { $$ = new arrayDeclarator($1, $3); }
                  | DIRECT_DECLARATOR T_LSQUARE T_RSQUARE { $$ = new arrayDeclarator($1, NULL); }
                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET { $$ = new functionDec($1, $3);  }
                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET { $$ = new functionDec($1, $3); delete $3; }
                  | DIRECT_DECLARATOR T_LBRACKET T_RBRACKET { $$ = new functionDec($1); }
                  ;

POINTER : T_STAR { }
        | T_STAR TYPE_QUALIFIER_LIST { }
        | T_STAR POINTER {  }
        | T_STAR TYPE_QUALIFIER_LIST POINTER {  }
        ;

TYPE_QUALIFIER_LIST : TYPE_QUALIFIER {$$ = new List($1);}
                    | TYPE_QUALIFIER_LIST TYPE_QUALIFIER { $$ = new List($1); ($$)->addtoList($2); }
                    ;

PARAMETER_TYPE_LIST : PARAMETER_LIST {}
                    ;

PARAMETER_LIST : PARAMETER_DECLARATION { $$ = new paramList($1);}
               | PARAMETER_LIST T_COMMA PARAMETER_DECLARATION { $$ = new paramList($1); ($$)->addtoList($3); }
               ;

PARAMETER_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR { $$ = new Declaration($1, $2); }
                      | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR {  }
                      | DECLARATION_SPECIFIERS { $$ = new Declaration($1); }
                      ;

IDENTIFIER_LIST : T_IDENTIFIER { $$ = new List(new Identifier(*$1));}
                | IDENTIFIER_LIST T_COMMA T_IDENTIFIER { $$ = new List($1); ($$)->addtoList(new Identifier(*$3)); }
                ;

TYPE_NAME : SPECIFIER_QUALIFIER_LIST { }
          | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR {  }
          ;

ABSTRACT_DECLARATOR : POINTER { }
                    | DIRECT_ABSTRACT_DECLARATOR {}
                    | POINTER DIRECT_ABSTRACT_DECLARATOR {  }
                    ;

DIRECT_ABSTRACT_DECLARATOR : T_LBRACKET ABSTRACT_DECLARATOR T_RBRACKET {  }
                           | T_LBRACKET T_RBRACKET {  }
                           | T_LSQUARE T_RSQUARE { }
                           | T_LSQUARE CONSTANT_EXPRESSION T_RSQUARE {  }
                           | DIRECT_ABSTRACT_DECLARATOR T_LSQUARE T_RSQUARE {  }
                           | DIRECT_ABSTRACT_DECLARATOR T_LSQUARE CONSTANT_EXPRESSION T_RSQUARE {  }
                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {  }
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET T_RBRACKET {  }
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {  }
                           ;

INITIALIZER : ASSIGNMENT_EXPRESSION { $$ = $1;  }
            //removed other 2 because we aren't doing 2D arrays
            ;

INITIALIZER_LIST : INITIALIZER { $$ = new List($1);  }
                 | INITIALIZER_LIST T_COMMA INITIALIZER { $$ = new List($1); ($$)->addtoList($3);  }
                 ;

STATEMENT : LABELED_STATEMENT { $$ = $1;  }
          | COMPOUND_STATEMENT { $$ = $1; }
          | EXPRESSION_STATEMENT { $$ = $1;  }
          | SELECTION_STATEMENT { $$ = $1;  }
          | ITERATION_STATEMENT { $$ = $1;  }
          | JUMP_STATEMENT { $$ = $1;  }
          ;

LABELED_STATEMENT : T_IDENTIFIER T_COLON STATEMENT {  }
                  ;

COMPOUND_STATEMENT : T_LCURLY T_RCURLY { $$ = new localScope();}
                   | T_LCURLY STATEMENT_LIST T_RCURLY { $$ = new localScope($2);  }
                   | T_LCURLY DECLARATION_LIST T_RCURLY { $$ = new localScope($2);  }
                   | T_LCURLY DECLARATION_LIST STATEMENT_LIST T_RCURLY { $$ = new localScope($2, $3); }
                   ;

STATEMENT_LIST : STATEMENT { $$ = new List($1);  }
               | STATEMENT_LIST STATEMENT { $$ = new List($1); ($$)->addtoList($2); }
               ;

EXPRESSION_STATEMENT : T_SEMICOLON {  }
                     | EXPRESSION T_SEMICOLON { }
                     ;
SELECTION_STATEMENT : T_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT { $$ = new ifStatement($3, $5);  }
                    | T_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT T_ELSE STATEMENT { $$ = new ifElseStatement($3, $5, $7); }
                    ;
ITERATION_STATEMENT : T_WHILE T_LBRACKET EXPRESSION T_RBRACKET STATEMENT { $$ = new whileLoop($3, $5); }
                    | T_FOR T_LBRACKET EXPRESSION_STATEMENT EXPRESSION_STATEMENT T_RBRACKET STATEMENT { $$ = new forLoop($3, $4, NULL, $6); }
                    | T_FOR T_LBRACKET EXPRESSION_STATEMENT EXPRESSION_STATEMENT EXPRESSION T_RBRACKET STATEMENT { $$ = new forLoop($3, $4, $5, $7); }
                    ;
JUMP_STATEMENT : T_RETURN T_SEMICOLON {  }
               | T_RETURN EXPRESSION T_SEMICOLON { $$ = new Return($2);  }
               | T_CONTINUE T_SEMICOLON { }
               | T_BREAK T_SEMICOLON { }
               ;
DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER { }
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS {  }
                       | TYPE_SPECIFIER  { $$ = $1;  }
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS  {  }
                       | TYPE_QUALIFIER  {  }
                       | TYPE_QUALIFIER DECLARATION_SPECIFIERS  {  }
                       ;

DECLARATOR : POINTER DIRECT_DECLARATOR {  }
           | DIRECT_DECLARATOR { $$ = $1;  }
           ;

DECLARATION_LIST : DECLARATION { $$ = new List($1);  }
                 | DECLARATION_LIST DECLARATION { $$ = new List($1); ($$)->addtoList($2);  }
                 ;

FUNCTION_DEFINITION : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT { }
                    | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT { $$ = new functionDef(new Declaration($1, $2), $3); }
                    | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT {}
                    | DECLARATOR COMPOUND_STATEMENT { }
                    ;

DECLARATION : DECLARATION_SPECIFIERS T_SEMICOLON  { }
            | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON  { $$  = new Declaration($1, $2); }
            ;

EXTERNAL_DECLARATION : FUNCTION_DEFINITION { $$ = $1;  }
                     | DECLARATION {$$ = $1; }
                     ;

TRANSLATION_UNIT : EXTERNAL_DECLARATION { $$ = new List($1);  }
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION { $$ = new List($1); ($$)->addtoList($2);}
                 ;

ROOT : TRANSLATION_UNIT { g_root = new globalScope($1);}
%%
const Node *g_root; // Definition of variable (to match declaration earlier)
const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}