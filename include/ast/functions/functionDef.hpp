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

    void mipsGen(std::ostream& os, mipsCon& con) const {
        con.isFunc = 1;
        Declarator->mipsGen(os, con);
        scopeBlock->mipsGen(os, con);
        con.isFunc = 0;
        //os << "should've done shit in the scopeBlock";
        os << std::endl;
        os << "move $sp, $fp";
        os << std::endl;
        os << "addiu $sp, $sp, 8";
        os << std::endl;
        os << "lw $fp, 4($sp)";
        os << std::endl;
        os << "j $31";
    }
protected:
    ExpressionPtr Declarator;
    NodePtr scopeBlock;
};

#endif