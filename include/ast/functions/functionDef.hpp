#ifndef functionDef_hpp
#define functionDef_hpp
#include <string>

class functionDef;
typedef const functionDef* functionDefPtr;

class functionDef: public Node {
public:
    functionDef(ExpressionPtr decl, NodePtr scope): Declarator(decl), scopeBlock(scope) { }
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        con.setFunc();
        dst << "def ";
        Declarator->print(dst, con, level);
        dst << ":";
        con.addTab();
        con.printGlobals(dst);
        con.indent(dst);
        scopeBlock->print(dst, con, level);
        con.subTab();
        con.clearFunc();
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        //con.enterNewFunc(os);
        con.enterScope();
        con.funcDec().functionDef=true;
        //std::cout << "***functionDef***: entering declarator" << std::endl;
        Declarator->mipsGen(os, con);
        if(!con.firstTime){
         con.enterNewFunc(os);
        }
        con.firstTime = 0;
        //con.funcDec().functionDef=false; probably should do this in declarator
        con.funcContent().functionPatty=true;
        //std::cout << "***functionDef***: entering scopeBlock" << std::endl;
        scopeBlock->mipsGen(os, con);
        //std::cout << "left function def" 
        //con.exitFunc(os);
    }
protected:
    ExpressionPtr Declarator;
    NodePtr scopeBlock;
};

#endif