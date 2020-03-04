#ifndef localScope_hpp
#define localScope_hpp

class localScope;
typedef const localScope* localScopePtr;

class localScope: public Scope {
public:
    localScope(){ std::cout << "Scope made!" << std::endl; }

    localScope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }
    localScope(ListPtr inList, ListPtr inList2) {
        sequence=inList->getlistOfExpressions();
        std::vector<NodePtr> sequenceTemp;
        sequenceTemp = inList2->getlistOfExpressions(); 
        sequence.insert(sequence.end(), sequenceTemp.begin(), sequenceTemp.end());
 
    }

    void print(std::ostream& dst, pycon& con, int level) const {
        for(int i=0; i<sequence.size(); i++) {
            //con.addTab();
            sequence[i]->print(dst, con, level);
        }
    }
    void genPython(std::ostream& os) const { }
};

#endif