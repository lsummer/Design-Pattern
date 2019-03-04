//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_COMPOSITE_H
#define DESIGNPATTERN_COMPOSITE_H

#include "headers.h"

class Componment{
public:
    virtual ~Componment();
    virtual void Add(Componment*);
    virtual void Remove(Componment*);
    virtual Componment* getChild(int index); 
    virtual void Display() = 0;
protected:
    Componment();
    Componment(std::string n);
    std::string name;
};


class Leaf: public Componment{
public:
    Leaf();
    Leaf(std::string n);
    virtual ~Leaf();
    void Add(Componment* componment);
    void Remove(Componment* componment);
    Componment* getChild(int index);
    void Display();
};

class Composite: public Componment{
public:
    Composite();
    Composite(std::string n);
    virtual ~Composite();
    void Add(Componment* componment);
    void Remove(Componment* componment);
    Componment* getChild(int index);
    void Display();

private:
    std::vector<Componment*> sons;
};

#endif //DESIGNPATTERN_COMPOSITE_H
