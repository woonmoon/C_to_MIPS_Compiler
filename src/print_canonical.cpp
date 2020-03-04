#include "ast.hpp"

int main()
{
    const Node *ast=parseAST();

    pycon context;

    ast->print(std::cout, context, 0);

    std::cout<<std::endl;

    return 0;
}
