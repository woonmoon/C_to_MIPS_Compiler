#include "ast.hpp"

int main()
{
    const Node *ast=parseAST();

    mipsCon con;

    ast->mipsGen(std::cout, con);
    std::cout<<std::endl;

    return 0;
}