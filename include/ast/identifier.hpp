//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
#define LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP

#include "ast_expression.hpp"

class Identifier;

typedef const Identifier* IdentifierPtr;

class Identifier: public Expression {
    public:
        Identifier(std::string v) : variableName(v) { };
        // Identifier(std::string v) {
        //   std::cout << "Identifier constructed" << std::endl;
        //   variableName=v;
        // }

        void print(std::ostream& os) const{
          os << "constructed identifier in print ";
        }

        void gen_python(std::ostream &os) const{
          os << "constructed identifier ";
        }
    private:
        std::string variableName;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
