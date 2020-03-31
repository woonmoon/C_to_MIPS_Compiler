#ifndef pointer_hpp
#define pointer_hpp

#include <vector>


class Pointer;
typedef Pointer* pointerPtr;

class Pointer : public List {
public:
  Pointer() {}

  Pointer(const ListPtr& lol) {
    std::cout << "pointer madeee" << std::endl;
    listOfExpressions = lol->getlistOfExpressions(); 
  }

  void print(std::ostream& dst, pycon& con, int level) const { }
  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { }
  void look(mipsCon& con) const {}
};

#endif
