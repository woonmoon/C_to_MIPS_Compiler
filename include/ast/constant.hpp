//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_CONSTANT_HPP
#define LANGPROC_2019_CW_JETSTREAM_CONSTANT_HPP

#include "node.hpp"

class Constant;

typedef const Constant* ConstantPtr;

class Constant: public Node {
    public:
        Constant(int v) : val(v) {};
        void print(std::ostream& dst, pycon& con, int level) const{
          dst << val;
        }
        void pythonGen(std::ostream &os) const{
          os << val;
        }
        int getVal() { return val; }
        void mipsGen(std::ostream& os, mipsCon& con) const {
          int destReg=con.freeReg();
          os << std::endl;
          os << "li $" << destReg << ", " << val;
          con.tickReg(destReg);
          os << std::endl << "sw $2, " << con.count << "($fp)";
          con.untickReg(destReg);
        }
    private:
        int val;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
