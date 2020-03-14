#ifndef mulOp_hpp
#define mulOp_hpp

class mulOp;
typedef const mulOp* mulOpPtr;

class mulOp: public Expression {
public:
    mulOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " * ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con) const {
        std::string tempName = con.tempIdentifierName;
        branches[0]->mipsGen(os, con);
        branches[1]->mipsGen(os, con);
        os << std::endl;
        os << "nop";
        os << std::endl;
        os << "mult $2, $3";
        os << std::endl;
        os << "mfhi $2";
        os << std::endl;
        int offset = con.findOffset(tempName);
        os << "sw $2, " << offset << "($fp)";
        os << std::endl;
        os << "mflo $2";
        os << std::endl;
        offset=con.lastOffset();
        con.addBinding(tempName+"_hi", offset);
        os << "sw $2, " << offset+4 << "($fp)";
        con.untickReg(2);
        con.untickReg(3);
    }
protected:
};

#endif