#ifndef assignOp_hpp
#define assignOp_hpp

class assignOp;
typedef const assignOp* assignOpPtr;

class assignOp: public Expression {
public:
    assignOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " = ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con) const {
        con.isAss = 1;
        branches[0]->mipsGen(os, con);

        std::string storeTo = con.storeTo = con.tempIdentifierName;
        con.isAss = 0;
        con.newIsInt = 0;
        con.isInt = 0;
        os << std::endl;

        branches[1]->mipsGen(os, con);

        //THIS IS WHERE I WANT TO DO SW, we know it is the end of the ENTIRE operation, theres no way it isnt, therefore we store here.
        //store to storeTo

        int offset = con.findOffset(storeTo);

        os << std::endl;
        os << "sw $8, " << offset << "($fp)";
        os << std::endl;
        os << "addiu $sp, $sp, -4";
    }

protected:
};

#endif