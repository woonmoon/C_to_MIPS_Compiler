#ifndef ifElseStatement_hpp
#define ifElseStatement_hpp

class ifElseStatement;
typedef const ifElseStatement* ifElseStatementPtr;

class ifElseStatement : public Node {
public:
    ifElseStatement(NodePtr exp, NodePtr nod1, NodePtr nod2): condition(exp), ifExecute(nod1), elseExecute(nod2) { std::cout << "hello mate I am an if else statement" << std::endl; }
    NodePtr getCondition() { return condition; }
    NodePtr getIfExecute() { return ifExecute; }
    NodePtr getElseExecute() { return elseExecute; }
    void print(std::ostream& dst, pycon& con, int level) const {
        dst << "if (";
        condition->print(dst, con, level);
        dst << ")";
        ifExecute->print(dst, con, level);
        dst << " else (";
        elseExecute->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr condition;
    NodePtr ifExecute;
    NodePtr elseExecute;
};

#endif