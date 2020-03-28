#ifndef logOrOp_hpp
#define logOrOp_hpp

class logOrOp;
typedef const logOrOp* logOrOpPtr;

class logOrOp: public Expression{
public:
    logOrOp(ExpressionPtr left, ExpressionPtr right): exp1(left), exp2(right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " or ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        std::string true_=con.makeALabel("true_or");
        std::string false_=con.makeALabel("false_or");
        int dest1=con.registerSet.freeRegister();
        int dest2=con.registerSet.freeRegister();
        con.flushReg({dest1, dest2}, os);

        branches[0]->mipsGen(os, con, dest1);
        branches[1]->mipsGen(os, con, dest2);

        os << "bne " << con.reg(dest1) << ", " << con.reg(0) << ", " << true_ << std::endl;
        os << "nop" << std::endl;
        os << "bne " << con.reg(dest2) << ", " << con.reg(0) << ", " << true_ << std::endl;
        os << "nop" << std::endl;
        os << "li " << con.reg(dest) << ", 0" << std::endl;
        os << "beq $0, $0, " << false_ << std::endl;
        os << "nop" << std::endl;
        os << true_ << ":" << std::endl;
        os << "li " << con.reg(dest) << ", 1" << std::endl;
        os << false_ << ":" << std::endl;

        con.recoverReg({dest2, dest1}, os);  
    }
    int evaluate() const { return exp1->evaluate() || exp2->evaluate(); }
    std::string getName() const { return ""; }
protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

#endif