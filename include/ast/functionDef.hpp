#ifndef functionDef_hpp
#define functionDef_hpp

class functionDef;
typedef const functionDef* functionDefPtr;

class functionDef: public Node {
public:
    functionDef(NodePtr decl, NodePtr scope): Declarator(decl), scopeBlock(scope) { }
    void print(std::ostream& dst) const {
        dst << "def ";
        Declarator->print(dst);
        dst << ":";
        scopeBlock->print(dst);
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr Declarator;
    NodePtr scopeBlock;
};

#endif