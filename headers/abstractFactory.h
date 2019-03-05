//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORY_H
#define DESIGNPATTERN_ABSTRACTFACTORY_H

#include "headers.h"

class Electrical{
public:
    Electrical(){}
    virtual ~Electrical(){}
    virtual void display(){
        std::cout << "未知电器" << std::endl;
    }
};

class AbstractFactory{
public:
    AbstractFactory(){}
    virtual ~AbstractFactory(){}

    virtual Electrical* createRefrigerator() = 0; //冰箱
    virtual Electrical* createWasher() = 0; // 洗衣机
};

// 海尔产品族
// 海尔冰箱，等级结构1
class HaierRefrigerator: public Electrical{
public:
    HaierRefrigerator(){}
    ~HaierRefrigerator(){}
    
    void display(){std::cout<< "海尔冰箱" << std::endl;}
};
// 海尔洗衣机，等级结构2
class HaierWasher: public Electrical{
public:
    HaierWasher(){}
    ~HaierWasher(){}
    void display(){std::cout<< "海尔洗衣机" << std::endl;}
};


// 得力产品族
// 得力冰箱, 等级结构1
class DeliRefrigerator: public Electrical{
public:
    DeliRefrigerator(){}
    ~DeliRefrigerator(){}
    
    void display(){std::cout<< "得力冰箱" << std::endl;}
};
// 得力洗衣机，等级结构2
class DeliWasher: public Electrical{
public:
    DeliWasher(){}
    ~DeliWasher(){}
    void display(){std::cout<< "得力洗衣机" << std::endl;}
};

// 海尔工厂
class HaierFactory: public AbstractFactory{
public:
    HaierFactory(){}
    ~HaierFactory(){}
    Electrical* createRefrigerator(){
        return new HaierRefrigerator();
    }
    Electrical* createWasher(){
        return new HaierWasher();
    }
};
// 得力工厂
class DeliFactory: public AbstractFactory{
public:
    DeliFactory(){}
    ~DeliFactory(){}
    Electrical* createRefrigerator(){
        return new DeliRefrigerator();
    }
    Electrical* createWasher(){
        return new DeliWasher();
    }
};

#endif