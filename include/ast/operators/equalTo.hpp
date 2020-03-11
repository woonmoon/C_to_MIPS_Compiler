#ifndef equalTo_hpp
#define equalTo_hpp

class equalTo;
typedef const equalTo* equalToPtr;

class equalTo: public Expression{
public:
    equalTo(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " == ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os) const { }
protected:
};

#endif