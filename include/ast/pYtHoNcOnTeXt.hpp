#ifndef pycon_hpp
#define pycon_hpp

#include <vector>
#include <string>
#include <iostream>

class pycon {
public:
  pycon(): tab(0), isFunc(0), isAssign(0) {}

  void addGlobal(std::string glob) {
    globals.push_back(glob);
  }

  void printGlobals(std::ostream& os) {
    for(unsigned int i = 0; i < globals.size(); i++){
      //os << std::endl;
      indent(os);
      os << "global ";
      os << globals[i];
      os << std::endl;
    }
  }

  void indent(std::ostream& os) {
    os << std::endl;
    for(int i = 0; i < tab; i++){
      os << "    ";
    }
  }

  void addScope(std::ostream& os) {
    os << std::endl;
    //indent(os);
  }
  
  void addTab() { tab++; }
  void subTab() { tab--; }
  void zeroTab() { tab = 0; }
  int returnTab() { return tab; }
  bool notFunc() { return isFunc; }
  void setFunc(){ isFunc = 1; }
  void clearFunc() { isFunc = 0;}
  void setAssign() { isAssign = 1; }
  void clearAssign() { isAssign = 0; }
  bool getAssign() { return isAssign; }

private:
  std::vector<std::string> globals;
  int tab;
  bool isFunc;
  bool isAssign;
};

#endif
