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
    void mipsGen(std::ostream& os, mipsCon& con) const { 
        if(con.isConditional) {
            con.isLogical=true;
            branches[0]->mipsGen(os, con);
            os << std::endl;
            os << "move $2, $8";
            os << std::endl;
            con.isLogical=true;
            branches[1]->mipsGen(os, con);
            os << std::endl;
            os << "move $3, $8";
            os << std::endl;
            os << "or $2, $2, $3";
            os << std::endl;
            os << "li $3, 1";
            os << std::endl;
            os << "bne #2, $3 "; 
            con.isLogical=false;
            con.isConditional=false;
        }
    }
protected:
};

#endif