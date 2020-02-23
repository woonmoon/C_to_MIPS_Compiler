#include "ast.hpp"

int main()
{
    const Expression *ast=parseAST();
    std::cout << "parsed AST" << std::endl;
    ast->gen_python(std::cout);
    std::cout<<std::endl;

    return 0;
}
