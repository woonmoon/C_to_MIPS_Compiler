#ifndef arrayDeclarator_hpp
#define arrayDeclarator_hpp

class arrayDeclarator;
typedef const arrayDeclarator* arrayDeclPtr;

class arrayDeclarator: public Node {
public:
    arrayDeclarator(NodePtr _dec, ExpressionPtr _exp): declarator(_dec), expression(_exp) {}

    ~arrayDeclarator() {
        delete declarator;
        if(expression!=NULL) { delete expression; }
    }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        declarator->mipsGen(os, con);
        if(!con.funcDec().initialize) {
            if(con.stack.size()>1) {
                con.varBinding()[con.dummyDec.id].arraySize.push_back(expression->evaluate());
            }else{ //global
                //con.stackSize+=4;
                con.gloVar[con.dummyDec.id].arraySize.push_back(expression->evaluate());
                con.gloVar[con.dummyDec.id].offset=con.stackSize;
                con.gloVar[con.dummyDec.id].size=4;
            }
        }
        //std::cout << "left array declarator" << std::endl;
    }

protected:
    NodePtr declarator;
    ExpressionPtr expression;
};

#endif