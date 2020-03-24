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

  ~declList() {
    for(int i=0; i<listOfExpressions.size(); i++) {
      delete listOfExpressions[i];
    }
  }

  void print(std::ostream& dst, pycon& con, int level) const {
     for(int i=0; i<listOfExpressions.size(); i++){
      
      listOfExpressions[i]->print(dst, con, level);
      if(i!=listOfExpressions.size()-1) {
        dst << ", ";
      }
     }
  }

  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    int reg=con.registerSet.freeRegister();
    for(int i=0; i<listOfExpressions.size(); i++) {
      listOfExpressions[i]->mipsGen(os, con, reg);
    }
  }
};

#endif
