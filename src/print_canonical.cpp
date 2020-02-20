#include "ast.hpp"

int main()
{
    const Expression *ast=parseAST();

    ast->pythonGen(std::cout);
    std::cout<<std::endl;

    return 0;
}
