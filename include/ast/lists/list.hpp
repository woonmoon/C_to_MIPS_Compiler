#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>


class List;
typedef List* ListPtr;

class List : public Node {
public:
  List() {}
  List(NodePtr b) {
    listOfExpressions.push_back(b);
  }
  
  List(const ListPtr& lol) {
    listOfExpressions = lol->listOfExpressions; 
  }

  void print(std::ostream& dst, pycon& con, int level) const {
     for(unsigned int i=0; i<listOfExpressions.size(); i++){
      
      listOfExpressions[i]->print(dst, con, level);
      if(i!=listOfExpressions.size()-1) {
        dst << ", ";
      }
     }
  }
  
  void pythonGen(std::ostream& os) const { }

  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    int reg=con.registerSet.freeRegister();
    for(unsigned int i=0; i<listOfExpressions.size(); i++) {
      listOfExpressions[i]->mipsGen(os, con, reg);
    }
  }

  std::vector<NodePtr> getlistOfExpressions() { return listOfExpressions; }

  void addtoList(NodePtr n) {
    listOfExpressions.push_back(n); 
  }
protected:
  std::vector<NodePtr> listOfExpressions;
};

#endif
