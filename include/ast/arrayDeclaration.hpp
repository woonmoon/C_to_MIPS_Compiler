#ifndef arrayDeclaration_hpp
#define arrayDeclaration_hpp

class arrayDeclaration;
typedef const arrayDeclaration* arrayDeclPtr;

class arrayDeclaration: public Node {
public:
    arrayDeclaration(NodePtr _dec, ExpressionPtr _exp): declarator(_dec), expression(_exp) {}

    ~arrayDeclaration() {
        delete declarator;
        if(expression!=NULL) { delete expression; }
    }

    void print(std::ostream& dst, pycon& con, int level) const{ }

    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        std::cout << "trying to make a fucking array" << std::endl;
        declarator->mipsGen(os, con);
        if(!con.funcDec().initialize) {
            std::cout << expression->evaluate() << std::endl;
            con.dummyDec.arraySize.push_back(2);
            std::cout << con.dummyDec.arraySize[0] << std::endl;
        }
    }

protected:
    NodePtr declarator;
    ExpressionPtr expression;
};

#endif