#ifndef mipsCon_hpp
#define mipsCon_hpp
#include <map>

class mipsCon;
typedef const mipsCon* mipsConPtr;

class mipsCon {
public:
    mipsCon() {
        for(int i=0; i<32; i++) { regTrack[i]=false; }
    }
    void addBinding(std::string _label, uint32_t offset) { bindings[_label]=offset; }
    void rmBinding(std::string _label) { std::map<std::string, uint32_t>::iterator it=bindings.find(_label); bindings.erase(it); }
    void tickReg(int num) { regTrack[num]=true; }
    void untickReg(int num) { regTrack[num]=false; }
    bool regTicked(int num) { if(regTrack[num]) { return true;} return false; }
private:
    std::map<std::string, uint32_t> bindings;
    std::map<int, bool> regTrack;
};

#endif