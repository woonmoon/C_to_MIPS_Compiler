#ifndef node_hpp
#define node_hpp

#include <string>
#include <iostream>
#include <fstream>
#include <map>

#include <memory>

class Node;

typedef const Node *NodePtr;

class Node
{
public:
     ~Node(){}
    virtual void print(std::ostream& dst, pycon& con, int level) const = 0;
    virtual void pythonGen(std::ostream& os) const = 0;
    virtual void mipsGen(std::ostream& os, mipsCon& con) const = 0;
};


#endif
