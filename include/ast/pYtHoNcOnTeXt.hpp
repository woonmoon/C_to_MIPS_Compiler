#ifndef pycon_hpp
#define pycon_hpp

#include <vector>
#include <string>
#include <iostream>

class pycon {
public:
  pycon(): tab(0) {}

  void addGlobal(std::string glob) {
    globals.push_back(glob);
  }

  void printGlobals(std::ostream& os) {
    for(int i = 0; i < globals.size(); i++){
      os << std::endl;
      os << "global ";
      os << globals[i];
    }
  }

  void indent(std::ostream& os) {
    //os << std::endl;
    for(int i = 0; i < tab; i++){
      os << "\t";
    }
  }

  void addScope(std::ostream& os) {
    os << std::endl;
    indent(os);
  }
  
  void addTab() { tab++; }
  void subTab() { tab--; }
  void zeroTab() { tab = 0; }

private:
  std::vector<std::string> globals;
  int tab;
};

#endif
