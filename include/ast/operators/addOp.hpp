#ifndef addOp_hpp
#define addOp_hpp

class addOp;
typedef const addOp* addOpPtr;

class addOp: public Expression {
public:
    addOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " + ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
protected:
};

class unaryOp : public Expression{
    public:
        unaryOp(std::string opi, NodePtr expri) { op=opi; branches.push_back(expri); }
        ~unaryOp(){}
        void print(std::ostream& dst, pycon& con, int level) const {
            dst << op;
            branches[0]->print(dst, con, level);
        }
        void pythonGen(std::ostream& os) const { }
    private:
        std::string op;
        ExpressionPtr expr;
};

#endif