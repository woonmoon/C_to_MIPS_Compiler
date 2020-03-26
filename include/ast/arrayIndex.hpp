#ifndef arrayIndex_hpp
#define arrayIndex_hpp

class arrayIndex;
typedef const arrayIndex* arrayIndexPtr;

class arrayIndex: public Expression {
public:
    arrayIndex(ExpressionPtr _name, ExpressionPtr _ind): arrayName(_name), index(_ind) {}
    ~arrayIndex() { if(arrayName!=NULL) { delete arrayName;} if(index!=NULL) { delete index; } }
    void print(std::ostream& dst, pycon& con, int level) const{ }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        //std::cout << "current stacksize is " << con.stackSize << std::endl;
        int ind_offset=con.varBinding()[arrayName->getName()].offset + (index->evaluate()*4);
        os << "lw " << con.reg(dest) << ", " << con.stackSize - ind_offset << "(" << con.reg(29) << ")";
        os << std::endl;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
protected:
    ExpressionPtr arrayName;
    ExpressionPtr index;
};

#endif