//
// Created by LXY on 2019/3/4.
//
#include "headers.h"
#include "singleton.h"

Singleton::Singleton(){}
// Singleton::Singleton(int val):my_value(val){}
Singleton::~Singleton(){}

Singleton& Singleton::operator =(const Singleton& singleton){
    return *this;
}

void Singleton::print(){
    std::cout<<"单例类打印"<<std::endl;
}

Singleton* Singleton::getInstance()
{
    if(instance == nullptr){
        // 在这里可以试着加锁
        if(instance == nullptr){
            instance = new Singleton();

            static SingletonHuishou s1;
        }
        // 在这里解锁
    }
    
    return instance;
}

Singleton* Singleton::instance = nullptr;