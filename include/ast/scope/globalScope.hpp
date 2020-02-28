#ifndef globalScope_hpp
#define globalScope_hpp

class globalScope;
typedef const globalScope* globalScopePtr;

class globalScope: public Scope{
public:
    globalScope() { std::cout << "Scope made!" << std::endl; }

    globalScope(NodePtr inNode) {
        sequence.push_back(inNode);
    }

    globalScope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }

    void print(std::ostream& dst) const {
        for(int i=0; i<sequence.size(); i++) {
            sequence[i]->print(dst);
        }
    }
    void genPython(std::ostream& os) const { }
};

#endif