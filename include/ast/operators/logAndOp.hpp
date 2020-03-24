#ifndef logAndOp_hpp
#define logAndOp_hpp

class logAndOp;
typedef const logAndOp* logAndOpPtr;

class logAndOp: public Expression {
public:
    logAndOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " and ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        std::string true_=con.makeALabel("true_and");
        std::string false_=con.makeALabel("false_and");
        int dest1=con.registerSet.freeRegister();
        int dest2=con.registerSet.freeRegister();
        con.flushReg({dest1, dest2}, os);

        branches[0]->mipsGen(os, con, dest1);
        branches[1]->mipsGen(os, con, dest2);

        os << "beq " << con.reg(dest1) << ", " << con.reg(0) << ", " << false_ << std::endl;
        os << "nop" << std::endl;
        os << "beq " << con.reg(dest2) << ", " << con.reg(0) << ", " << false_ << std::endl;
        os << "nop" << std::endl;
        os << "li " << con.reg(dest) << ", 1" << std::endl;
        os << "beq $0, $0, " << true_ << std::endl;
        os << "nop" << std::endl;
        os << false_ << ":" << std::endl;
        os << "li " << con.reg(dest) << ", 0" << std::endl;
        os << true_ << ":" << std::endl;

        con.recoverReg({dest2, dest1}, os); 
    }



    //     void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    //     std::string falseEx=con.makeALabel("false");
    //     std::string ending=con.makeALabel("theEnd");
    //     int dest0=con.registerSet.freeRegister();
    //     int dest1=con.registerSet.freeRegister();
    //     con.flushReg({dest0, dest1}, os);

    //     branches[0]->mipsGen(os, con, dest0);
    //     os << "beq " << con.reg(dest0) << ", " << con.reg(0) << ", " << falseEx;
    //     os << std::endl;
    //     branches[1]->mipsGen(os, con, dest1);
    //     os << "beq " << con.reg(dest1) << ", " << con.reg(0) << ", " << falseEx;
    //     os << std::endl;
    //     os << "addiu " << con.reg(dest) << ", " << con.reg(dest) << ", 1";
    //     os << std::endl;
    //     os << "j " << ending;
    //     os << std::endl;
    //     os << falseEx << ":";
    //     os << std::endl;
    //     os << "addiu " << con.reg(dest) << ", " << con.reg(0) << ", 0";
    //     os << std::endl;
    //     os << ending << ":";
    //     os << std::endl;

    //     con.recoverReg({dest1, dest0}, os); 
    // }

protected:
};

#endif