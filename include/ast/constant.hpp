//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_CONSTANT_HPP
#define LANGPROC_2019_CW_JETSTREAM_CONSTANT_HPP

#include "expression.hpp"

class Constant;

typedef const Constant* ConstantPtr;

class Constant: public Expression {
    public:
        Constant(int v) : val(v) { };
        void print(std::ostream& dst, pycon& con, int level) const{
          dst << val;
        }
        void pythonGen(std::ostream &os) const{
          os << val;
        }
        int evaluate() const { return val; }
        void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
          os << "li " << con.reg(dest) << ", " << val;
          os << std::endl;
        }
        std::string getName() const { return ""; }
        void look(mipsCon& con) const {}
        void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
    private:
        int val;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
