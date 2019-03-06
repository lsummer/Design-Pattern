//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H
#include "headers.h"

class Adpatee{ 
public:
    Adpatee(){}
    ~Adpatee(){}
    void sepecificRequest(){
        std::cout << "执行指定的请求" << std::endl;
    }
};

class Target{
public:
    Target(){}
    ~Target(){}
    virtual void request(){
        std::cout << "需要的请求" << std::endl;
    }
};

class Adapater: public Target{
public:
    Adapater():adpatee(new Adpatee()){}
    ~Adapater(){}
    void request(){
        std::cout << "需要的请求转到指定执行的请求" << std::endl;
        adpatee->sepecificRequest();
    }
private:
    std::shared_ptr<Adpatee> adpatee;

};

#endif