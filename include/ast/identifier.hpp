//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
#define LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP

#include "node.hpp"

class Identifier;

typedef const Identifier* IdentifierPtr;

class Identifier: public Node {
    public:
        Identifier(std::string v) : identifierName(v) {};

        void print(std::ostream& dst, pycon& con, int level) const{
          
          if(con.returnTab() == 0 && !con.notFunc()){ 
            con.addGlobal(identifierName);
          }
          dst << identifierName;
        }

        void pythonGen(std::ostream &os) const{
          os << identifierName;
        }

    private:
        std::string identifierName;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
