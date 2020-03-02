#ifndef ifStatement_hpp
#define ifStatement_hpp

class ifStatement;
typedef const ifStatement* ifStatementPtr;

class ifStatement: public Node{
public:
    ifStatement(NodePtr exp, NodePtr nod): condition(exp), executeBlock(nod) { std::cout << "hello mate im an if" << std::endl;}
    NodePtr getCondition() { return condition; }
    NodePtr getExecution() { return executeBlock; }
    void print(std::ostream &dst) const {
        dst << "if (";
        condition->print(dst);
        dst<< ")";
        executeBlock->print(dst);
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr condition;
    NodePtr executeBlock;    
};

#endif