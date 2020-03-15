#ifndef lessThan_hpp
#define lessThan_hpp

class lessThan: public Expression {
public:
    lessThan(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " < ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con) const {
        if(con.isConditional) {
            branches[0]->mipsGen(os, con);
            branches[1]->mipsGen(os, con);
            os << std::endl;
            os << "bgt $2, $3, ";
            con.untickReg(2);
            con.untickReg(3);
            con.isConditional=false;
        }
    }

protected:
};

#endif