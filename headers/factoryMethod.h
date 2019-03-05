//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_FACTORYMETHOD_H
#define DESIGNPATTERN_FACTORYMETHOD_H

#include "headers.h"
#include "simpleFactory.h"

class basicFactory{
public:
    basicFactory(){}
    virtual ~basicFactory(){}
    virtual Car* getCar() = 0;
};

class BenzFactory: public basicFactory{
public:
    BenzFactory(){}
    ~BenzFactory(){}
    Car* getCar();
};

class AudiFactory: public basicFactory{
public:
    AudiFactory(){}
    ~AudiFactory(){}
    Car* getCar();
};


// add a new car brind called tesla;
class Tesla : public Car{
public:
    Tesla(){car_name = "Tesla";}
    ~Tesla(){}
};

// so I can add a new factory to create a new Tsela car.
class TeslaFactory: public basicFactory{
public:
    TeslaFactory(){}
    ~TeslaFactory(){}
    Car* getCar();
};

#endif