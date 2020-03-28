#ifndef enumerator_hpp
#define enumerator_hpp

class Enumerator;
typedef const Enumerator* EnumeratorPtr; 

class Enumerator: public Node{
public:
    Enumerator(std::string _id, ExpressionPtr _exp): id(_id), exp(_exp) { }
    ~Enumerator() { if(exp!=NULL) { delete exp; } }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        exp->evaluate();
    }
protected:
    std::string id;
    ExpressionPtr exp;
};

#endif