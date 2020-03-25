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
            if(!empty){
                con.iJustWantTheNameBro = 1;
                branches[0]->mipsGen(os,con,dest);
                con.iJustWantTheNameBro = 0;
                std::string funcName = con.dummyDec.id;
                
            }
     }

private:
    bool empty;

};

#endif