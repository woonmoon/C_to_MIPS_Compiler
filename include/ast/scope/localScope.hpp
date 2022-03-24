#ifndef localScope_hpp
#define localScope_hpp

class localScope;
typedef const localScope* localScopePtr;

class localScope: public Scope {
public:
    localScope(){ /*std::cout << "Scope made!" << std::endl;*/ }

    localScope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }

    localScope(ListPtr inList, ListPtr inList2) {
        sequence=inList->getlistOfExpressions();
        std::vector<NodePtr> sequenceTemp;
        sequenceTemp = inList2->getlistOfExpressions(); 
        sequence.insert(sequence.end(), sequenceTemp.begin(), sequenceTemp.end());
    }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        if(con.funcContent().functionPatty) {
            con.funcContent().functionPatty=false;
            for(unsigned int i=0; i<sequence.size(); i++) {
                sequence[i]->mipsGen(os, con);
            }
        }else if(con.conditional().conditionalPatty) {
            con.conditional().conditionalPatty=false;
            //con.enterScope();
            for(unsigned int i=0; i<sequence.size(); i++) {
                sequence[i]->mipsGen(os, con);
            }
            //con.exitScope(os);
        }
        //std::cout << "left localscope" << std::endl;
    }

};

#endif