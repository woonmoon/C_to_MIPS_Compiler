#ifndef scope_hpp
#define scope_hpp

class Scope;
typedef const Scope* ScopePtr;

class Scope: public Node {
public:
    ~Scope() {
        for(int i=0; i<sequence.size(); i++) {
            delete sequence[i];
        }
    }
    Scope() { /*std::cout << "Scope made!" << std::endl;*/ }
    Scope(NodePtr inNode) {
        sequence.push_back(inNode);
    }
    Scope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }
    
    std::vector<NodePtr> getSequence() {
        return sequence;
    }
    void print(std::ostream& dst, pycon& con, int level) const=0;
    void pythonGen(std::ostream& os) const { } 
    void mipsGen(std::ostream& os) const { }
protected:
    std::vector<NodePtr> sequence;
};

#endif