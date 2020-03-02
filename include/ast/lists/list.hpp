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
     std::cout << "copy  constructor in list made ===================" << std::endl;
      for(int i=0; i<listOfExpressions.size(); i++){
      listOfExpressions[i]->print(std::cout);
     }
    }

  ~List() {
    for(int i=0; i<listOfExpressions.size(); i++) {
      delete listOfExpressions[i];
    }
  }
  virtual void print(std::ostream &dst) const {
     for(int i=0; i<listOfExpressions.size(); i++){
      listOfExpressions[i]->print(dst);
     }
  }
  virtual void pythonGen(std::ostream& os) const { }

  std::vector<NodePtr> getlistOfExpressions() { return listOfExpressions; }

  void addtoList(NodePtr n) {
    std::cout << "hi cunt" << std::endl; 
    listOfExpressions.push_back(n); 
    for(int i=0; i<listOfExpressions.size(); i++){
      listOfExpressions[i]->print(std::cout);
     }
  }

private:
  std::vector<NodePtr> listOfExpressions;
};

#endif
