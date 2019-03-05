//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_SIMPLEFACTORY_H
#define DESIGNPATTERN_SIMPLEFACTORY_H

#include "headers.h"
class Car{
public:
    Car();
    virtual ~Car(){}
    virtual void display();
    std::string car_name;
};

class Benz: public Car{
public:
    Benz();
    ~Benz(){}
};

class Bmw: public Car{
public:
    Bmw();
    ~Bmw(){}
};

class Audi: public Car{
public:
    Audi();
    ~Audi(){}
};

class Factory{
public:
    enum CarType{
        BENZ,
        BMW,
        AUDI
    };
    Factory(){}
    ~Factory(){}
    Car* getCar(Factory::CarType type);
};

#endif