#ifndef direct_declarator_hpp
#define direct_declarator_hpp

#include <vector>
#include "../ast_expression.hpp"

class directDeclarator: public Expression
{
public:
  directDeclarator();
  directDeclarator(std::string s);
  directDeclarator(ExpressionPtr e);
};

#endif 
