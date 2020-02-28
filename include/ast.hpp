#ifndef ast_hpp
#define ast_hpp

#include "ast/node.hpp"
#include "ast/identifier.hpp"
#include "ast/expression.hpp"
#include "ast/lists/list.hpp"
#include "ast/type/PrimitiveType.hpp"
#include "ast/declaration.hpp"
#include "ast/constant.hpp"
#include "ast/initDeclarator.hpp"


extern const Node *parseAST();

#endif
