#ifndef localScope_hpp
#define localScope_hpp

class localScope;
typedef const localScope* localScopePtr;

class localScope: public Scope {
public:
    localScope(){ std::cout << "Scope made!" << std::endl; }

    localScope(NodePtr inNode) {
        sequence.push_back(inNode);
    }

    localScope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }

    void print(std::ostream& dst, pycon& con, int level) const {
        for(int i=0; i<sequence.size(); i++) {
            sequence[i]->print(dst, con, level);
        }
    }
    void genPython(std::ostream& os) const { }
};

#endif