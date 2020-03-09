#ifndef mipsContext_hpp
#define mipsContext_hpp
#include <vector>
#include <string>

class mipsContext;
typedef const mipsContext* mipsContextPtr;

class Instruction {
public:
    virtual ~Instruction();
};

class Label: public Instruction {
public:
    ~Label();
    Label(std::string _id): id(_id+":") {}  
protected:
    std::string id;
};

class Directive: public Instruction {
public:
    ~Directive();
    Directive(std::string _id): id("."+_id) {}
protected:
    std::string id;
};

class RType: public Instruction {
    ~RType();
    enum type{SLL, SRL, SRA, SLLV, SRLV, SRAV, JR, JALR, 
    MFHI, MTHI, MFLO, MTLO, MULT, MULTU, DIV, DIVU, ADD, ADDU, 
    SUB, SUBU, AND, OR, XOR, NOR, SLT, SLTU};
};

class IType: public Instruction {
    enum type{BEQ, BNE, BLEZ, BGTZ, ADDI, ADDIU, SLTI, SLTIU, 
    ANDI, ORI, XORI, LUI, LB, LH, LH, LBU, LHU, SB, SH, SW};
};

class JType: public Instruction {
    enum type{J, JAL};
};

class mipsContext{
public:
private:
    std::vector<Instruction> Instructions;
};

#endif