#include "headers.h"
#include "templemate.h"



void Templemate::stepA(){
    std::cout << "基础类STEP A" << std::endl;
}
void Templemate::stepB(){
    std::cout << "基础类STEP B" << std::endl;
}
void Templemate::stepC(){
    std::cout << "基础类STEP C" << std::endl;
}
void Templemate::stepD(){
    std::cout << "基础类STEP D" << std::endl;
}
void Templemate::process(){
    std::cout << "开始处理：" << std::endl;
    stepA();
    stepB();
    stepC();
    stepD();
}

void Way1::stepB(){
    std::cout << "实现类1 STEP B" << std::endl;
}
void Way1::stepC(){
    std::cout << "实现类1 STEP C" << std::endl;
}
void Way2::stepB(){
    std::cout << "实现类2 STEP B" << std::endl;
}
void Way2::stepC(){
    std::cout << "实现类2 STEP C" << std::endl;
}
