#include "ast.hpp"

int main()
{
    const Expression *ast=parseAST();

    std::cout<<"------------------------------------" << std::endl;
    ast->print(std::cout);
    std::cout<<"Does it seg at 2?" << std::endl;

    std::cout<<std::endl;

    return 0;
}
