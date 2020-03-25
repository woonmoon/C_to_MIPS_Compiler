#ifndef functionCall_hpp
#define functionCall_hpp

class functionCall;
typedef const functionCall* functionCallPtr;

class functionCall: public Expression {
public:
    functionCall(NodePtr funcName, ListPtr argList, bool emptyParams) { branches.push_back(funcName); branches.push_back(argList); empty = emptyParams;}

    void pythonGen(std::ostream& os) const {}

    void print(std::ostream& dst, pycon& con, int level) const { 
        branches[0]->print(dst, con, level); 
        dst << "("; 
        branches[1]->print(dst, con, level); 
        dst <<")";
    }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {

     }

private:
    bool empty;

};

#endif