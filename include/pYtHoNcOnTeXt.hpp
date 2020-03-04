#ifndef pycon_hpp
#define pycon_hpp

#include <vector>
#include <string>
#include <iostream>

class pycon {
public:

  pycon(){}

  void addGlobal(std::string glob){
    globals.push_back(glob);
  }

  void printGlobals(std::ostream& os){
    for(int i = 0; i < globals.size(); i++){
      os << std::endl;
      os << globals[i];
    }
  }

  void indent(std::ostream& os){

  }
  
private:
  std::vector<std::string> globals;
};

#endif
