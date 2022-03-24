#ifndef functionCall_hpp
#define functionCall_hpp

class functionCall;
typedef const functionCall* functionCallPtr;

class functionCall: public Expression {
public:
    functionCall(NodePtr funcName, ListPtr argList, bool emptyParams) { branches.push_back(funcName); branches.push_back(argList); empty = emptyParams;}

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
            
            con.iJustWantTheNameBro = 1;
           
            branches[0]->mipsGen(os,con,dest);
            std::string funcName = con.dummyDec.id;
            //confirmed it does enter and goes into branches[1]
            if(!empty){
                con.inCall = 1;
                branches[1]->mipsGen(os,con,dest);
                con.inCall = 0;
            }

            con.iJustWantTheNameBro = 0;

            os << "jal " << funcName << std::endl;
            os << "nop" << std::endl;

            if(dest!=0){
                os << "move " << con.reg(dest) << ", " << con.reg(2) << std::endl;
            }
            

           // con.stack.back().spOffset = oldTwentyNine;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
private:
    bool empty;

};

#endif