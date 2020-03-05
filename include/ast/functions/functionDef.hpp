#ifndef functionDef_hpp
#define functionDef_hpp

class functionDef;
typedef const functionDef* functionDefPtr;

class functionDef: public Node {
public:
    functionDef(NodePtr decl, NodePtr scope): Declarator(decl), scopeBlock(scope) { }
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        con.setFunc();
        dst << "def ";
        Declarator->print(dst, con, level);
        dst << ":";
        //dst << std::endl;
        con.addTab();
        con.printGlobals(dst);
        con.indent(dst);
        scopeBlock->print(dst, con, level);
        con.subTab();
        con.clearFunc();
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr Declarator;
    NodePtr scopeBlock;
};

#endif