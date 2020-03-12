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
    std::cout << " :constructed a list" << std::endl;
  }
  
  List(const ListPtr& lol) {
    listOfExpressions = lol->listOfExpressions; 
  }

  ~List() {
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
  
  void pythonGen(std::ostream& os) const { }

  void mipsGen(std::ostream& os) const { 
      for(int i=0; i<listOfExpressions.size(); i++){
      
      listOfExpressions[i]->mipsGen(os);
      if(i!=listOfExpressions.size()-1) {
        os << std::endl;
      }
     }
  }

  std::vector<NodePtr> getlistOfExpressions() { return listOfExpressions; }

  void addtoList(NodePtr n) {
    listOfExpressions.push_back(n); 
  }
private:
  std::vector<NodePtr> listOfExpressions;
};

#endif
