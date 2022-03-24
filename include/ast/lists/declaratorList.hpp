#ifndef declaration_lists_hpp
#define declaration_lists_hpp

#include <vector>


class declList;
typedef declList* declListPtr;

class declList : public List {
public:
  declList() {}
  declList(NodePtr b) {
    listOfExpressions.push_back(b);
  }
  
  declList(const ListPtr& lol) {
    listOfExpressions = lol->getlistOfExpressions(); 
  }

  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    //std::cout << "in declarator list" << std::endl;
    int reg=con.registerSet.freeRegister();
    for(unsigned int i=0; i<listOfExpressions.size(); i++) {
      listOfExpressions[i]->mipsGen(os, con, reg);
    }
  }
};

#endif
