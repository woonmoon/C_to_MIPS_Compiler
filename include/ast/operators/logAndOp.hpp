#ifndef logAndOp_hpp
#define logAndOp_hpp

class logAndOp;
typedef const logAndOp* logAndOpPtr;

class logAndOp: public Expression {
public:
    logAndOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        branches[0]->print(dst, con, level);
        dst << " && ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
protected:
};

#endif