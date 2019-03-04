
#include "headers.h"
#include "prototype.h"

prototype::prototype(){
    std::cout << "基类构造成功" << std::endl;
}
prototype::~prototype(){
    std::cout << "基类析构成功" << std::endl;
}

son1_prototype::son1_prototype(){
    std::cout << "派生类1构造成功：1111" << std::endl;
}
son1_prototype::~son1_prototype(){
    std::cout << "派生类1析构成功：1111" << std::endl;
}

son2_prototype::son2_prototype(){
    std::cout << "派生类2构造成功：2222" << std::endl;
}
son2_prototype::~son2_prototype(){
    std::cout << "派生类2析构成功：2222" << std::endl;
}

prototype* son1_prototype::clone(){
    return new son1_prototype();
}

prototype* son2_prototype::clone(){
    return new son2_prototype();
}

prototype* clone(prototype* pro){
    return pro->clone();
}
