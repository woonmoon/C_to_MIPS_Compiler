//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
#define LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP


class Identifier: public Expression {
    public:
        Identifier(std::string variableName);
        void pythonGen(std::ostream &dst) const override
          {
              dst<<variableName;
          }
    private:
        std::string variableName;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
