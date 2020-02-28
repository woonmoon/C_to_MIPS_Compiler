#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>


class List;
typedef const List* ListPtr;

class List : public Node{
public:
  List(NodePtr b) {
    listOfExpressions.push_back(b);
    std::cout << "constructed a list" << std::endl;
  };
  ~List(){
    for(int i=0; i<listOfExpressions.size(); i++) {
      delete listOfExpressions[i];
  }
  };
  virtual void print(std::ostream &dst) const {
      listOfExpressions[0]->print(dst);
  }
  virtual void pythonGen(std::ostream& os) const { }
  std::vector<NodePtr> getlistOfExpressions();
private:
  std::vector<NodePtr> listOfExpressions;
};

#endif
