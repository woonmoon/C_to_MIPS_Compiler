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
        Identifier(std::string v) : variableName(v){};
        virtual void print(std::ostream &dst) const override
          {
              dst<<variableName;
              dst<<" = 0";
          }
    private:
        std::string variableName;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
