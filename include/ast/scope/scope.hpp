#ifndef scope_hpp
#define scope_hpp

class Scope;
typedef const Scope* ScopePtr;

class Scope: public Node {
public:

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
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { }
protected:
    std::vector<NodePtr> sequence;
};

#endif