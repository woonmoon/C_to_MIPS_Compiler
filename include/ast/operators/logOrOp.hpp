#ifndef logOrOp_hpp
#define logOrOp_hpp

class logOrOp;
typedef const logOrOp* logOrOpPtr;

class logOrOp: public Expression{
public:
    logOrOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " or ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        std::string falseEx=con.makeALabel("false");
        std::string ending=con.makeALabel("theEnd");
        int dest0=con.registerSet.freeRegister();
        int dest1=con.registerSet.freeRegister();
        con.flushReg({dest0, dest1}, os);

        branches[0]->mipsGen(os, con, dest0);
        os << "bne " << con.reg(dest0) << ", " << con.reg(0) << ", " << falseEx;
        os << std::endl;
        branches[1]->mipsGen(os, con, dest1);
        os << "bne " << con.reg(dest1) << ", " << con.reg(0) << ", " << falseEx;
        os << std::endl;
        os << "addi " << con.reg(dest) << ", " << con.reg(0) << ", 0";
        os << std::endl;
        os << "j " << ending;
        os << std::endl;
        os << falseEx<< ":";
        os << std::endl;
        os << "addi " << con.reg(dest) << ", " << con.reg(dest) << ", 1";
        os << std::endl;
        os << ending << ":";
        os << std::endl;

        con.recoverReg({dest0, dest1}, os); 
    }
protected:
};

#endif