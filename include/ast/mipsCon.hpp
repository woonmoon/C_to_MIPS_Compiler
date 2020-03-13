#ifndef mipsCon_hpp
#define mipsCon_hpp
#include <map>

class mipsCon;
typedef const mipsCon* mipsConPtr;

class mipsCon {
public:
    mipsCon() {
        for(int i=0; i<32; i++) { regTrack[i]=false; }
        count = 0;
        isFunction = 0;
    }
    std::string makeALabel(const std::string &str) {
        static int id = 0;
        return "_" + str + "_" + std::to_string(id++);
    }
    void addBinding(std::string _label, uint32_t offset) { bindings[_label]=offset; }
    void rmBinding(std::string _label) { std::map<std::string, uint32_t>::iterator it=bindings.find(_label); bindings.erase(it); }
    bool variableBound(std::string _label) { 
        std::map<std::string, uint32_t>::iterator it=bindings.find(_label); 
        if(it!=bindings.end()) {
            return true;
        }
        return false;
    }
    int freeReg() { //finding free registers to put shit in
        if(!regTicked(2)) { return 2; } 
        else if(!regTicked(3)) { return 3; } 
        else if(!regTicked(8)) { return 8; }
        else if(!regTicked(9)) { return 9; }
        else if(!regTicked(10)) { return 10; }
        else if(!regTicked(11)) { return 11; }
        else if(!regTicked(12)) { return 12; }
        else if(!regTicked(13)) { return 13; }
        else if(!regTicked(14)) { return 14; }
        else if(!regTicked(15)) { return 15; }
        else if(!regTicked(24)) { return 24; }
        else if(!regTicked(25)) { return 25; }
        return -1;
    }
    uint32_t findOffset(std::string _label) { return bindings[_label]; }
    void tickReg(int num) { regTrack[num]=true; }
    void untickReg(int num) { regTrack[num]=false; }
    bool regTicked(int num) { if(regTrack[num]) { return true; } return false; }
    void setAssign() { isAssign = 1; }
    void clearAssign() { isAssign = 0; }
    int count; 
    bool isFunction;

private:
    std::map<std::string, uint32_t> bindings;
    std::map<int, bool> regTrack;
    std::map<int, std::string> regVar;
    bool isAssign;
    
};

#endif