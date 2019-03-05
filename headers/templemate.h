#ifndef DESIGNPATTERN_TEMPLEMATE_H
#define DESIGNPATTERN_TEMPLEMATE_H

class Templemate{
public:
    Templemate(){}
    virtual ~Templemate(){}

    virtual void stepA();
    virtual void stepB();
    virtual void stepC();
    virtual void stepD();

    void process();
};

class Way1: public Templemate{
public:
    Way1(){}
    ~Way1(){}

    void stepB();
    void stepC();
};

class Way2: public Templemate{
public:
    Way2(){}
    ~Way2(){}

    void stepB();
    void stepC();
};

#endif