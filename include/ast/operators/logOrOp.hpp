#ifndef logOrOp_hpp
#define logOrOp_hpp

class logOrOp;
typedef const logOrOp* logOrOpPtr;

class logOrOp: public Expression{
public:
    logOrOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        branches[0]->print(dst, con, level);
        dst << " || ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
protected:
};

#endif