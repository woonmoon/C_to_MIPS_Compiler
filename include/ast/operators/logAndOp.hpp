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
    void mipsGen(std::ostream& os, mipsCon& con) const {
        std::string tempName;
        if(con.newIsInt){           //this whole thing is to distinguish beween functions and int declarations
            con.newIsInt = 0;
            tempName = con.justForInt;
        }else tempName = con.storeTo;
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
            os << "and $2, $2, $3";
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