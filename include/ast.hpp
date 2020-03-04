#ifndef ast_hpp
#define ast_hpp

#include "ast/pYtHoNcOnTeXt.hpp"
#include "ast/node.hpp"
#include "ast/identifier.hpp"
#include "ast/expression.hpp"
#include "ast/lists/list.hpp"
#include "ast/type/PrimitiveType.hpp"
#include "ast/declaration.hpp"
#include "ast/constant.hpp"
#include "ast/initDeclarator.hpp"
#include "ast/scope/scope.hpp"
#include "ast/scope/globalScope.hpp"
#include "ast/scope/localScope.hpp"
#include "ast/conditionals/ifStatement.hpp"
#include "ast/conditionals/ifElseStatement.hpp"
#include "ast/functions/functionDef.hpp"
#include "ast/functions/functionDec.hpp"
#include "ast/functions/functionCall.hpp"
#include "ast/operators/addOp.hpp"
#include "ast/loop/while.hpp"
#include "ast/return.hpp"

extern const Node *parseAST();

#endif
