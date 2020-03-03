#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>


class List;
typedef List* ListPtr;

class List : public Node {
public:
  List(NodePtr b) {
    b->print(std::cout);
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
  void print(std::ostream &dst) const {
     for(int i=0; i<listOfExpressions.size(); i++){
      listOfExpressions[i]->print(dst);
      if(i!=listOfExpressions.size()-1) {
        dst << ", ";
      }
     }
  }
  void pythonGen(std::ostream& os) const { }

  std::vector<NodePtr> getlistOfExpressions() { return listOfExpressions; }

  void addtoList(NodePtr n) {
    //std::cout << "hi cunt" << std::endl; 
    listOfExpressions.push_back(n); 
    for(int i=0; i<listOfExpressions.size(); i++){
      listOfExpressions[i]->print(std::cout);
     }
  }

private:
  std::vector<NodePtr> listOfExpressions;
};

#endif
