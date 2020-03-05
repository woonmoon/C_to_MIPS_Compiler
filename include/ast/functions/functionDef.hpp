#ifndef functionDef_hpp
#define functionDef_hpp

class functionDef;
typedef const functionDef* functionDefPtr;

class functionDef: public Node {
public:
    functionDef(NodePtr decl, NodePtr scope): Declarator(decl), scopeBlock(scope) { }
    void print(std::ostream& dst, pycon& con, int level) const {
        dst << "def ";
        Declarator->print(dst, con, level);
        dst << ":";
        con.addTab();
        std::cout << std::endl;
        scopeBlock->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr Declarator;
    NodePtr scopeBlock;
};

#endif