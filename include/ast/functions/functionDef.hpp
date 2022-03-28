#ifndef functionDef_hpp
#define functionDef_hpp
#include <string>

class functionDef;
typedef const functionDef* functionDefPtr;

class functionDef: public Node {
public:
    functionDef(ExpressionPtr decl, NodePtr scope): Declarator(decl), scopeBlock(scope) { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        con.enterScope();
        con.funcDec().functionDef=true;
        Declarator->mipsGen(os, con);
        if(!con.firstTime){
         con.enterNewFunc(os);
        }
        con.firstTime = false;
        con.funcDec().functionPatty=true;
        scopeBlock->mipsGen(os, con);
    }
    
protected:
    ExpressionPtr Declarator;
    NodePtr scopeBlock;
};

#endif