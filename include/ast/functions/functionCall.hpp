#ifndef functionCall_hpp
#define functionCall_hpp

class functionCall;
typedef const functionCall* functionCallPtr;

class functionCall: public Expression {
public:
    functionCall(NodePtr funcName, ListPtr argList) { branches.push_back(funcName); branches.push_back(argList); }
    void pythonGen(std::ostream& os) const {}
    void print(std::ostream& dst, pycon& con, int level) const { 
        branches[0]->print(dst, con, level); 
        dst << "("; branches[1]->print(dst, con, level); 
        dst <<")" << std::endl; }
};

#endif