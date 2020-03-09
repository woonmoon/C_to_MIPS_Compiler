#include "ast.hpp"

int main()
{
    const Node *ast=parseAST();

    pycon context;

    ast->print(std::cout, context, 0);

    std::cout<< "if __name__ == \"__main__\":" << std::endl;
    std::cout<< "    import sys" << std::endl;
    std::cout<< "    ret=main()" << std::endl;
    std::cout<< "    sys.exit(ret)" << std::endl;

    return 0;
}
