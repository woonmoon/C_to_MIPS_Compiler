#ifndef leftShiftOp_hpp
#define leftShiftOp_hpp

class leftShiftOp;
typedef const leftShiftOp* leftShiftOpPtr;

class leftShiftOp: public Expression {
public:
    leftShiftOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        branches[1]->mipsGen(os, con, addrDest2);

        os << std::endl;
        os << "sll "<< con.reg(dest) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2);
        os << std::endl;

        con.recoverReg({addrDest2, addrDest1}, os); 

    }
    int evaluate() const { return exp1->evaluate()<<exp2->evaluate(); }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

#endif
