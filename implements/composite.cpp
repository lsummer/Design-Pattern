//
// Created by LXY on 2019/3/4.
//
#include "composite.h"

Componment::Componment(){}
Componment::Componment(std::string n):name(n){}
Componment::~Componment(){}
void Componment::Add(Componment* com){}
void Componment::Remove(Componment* com){}
Componment* Componment::getChild(int index){return nullptr;}


Leaf::Leaf(){}
Leaf::Leaf(std::string n):Componment(n){}
Leaf::~Leaf(){}
void Leaf::Add(Componment*){}
void Leaf::Remove(Componment*){}
Componment* Leaf::getChild(int index){return nullptr;}
void Leaf::Display(){
    std::cout << name << std::endl;
}

Composite::Composite(){}
Composite::Composite(std::string n):Componment(n){}
Composite::~Composite(){}
void Composite::Add(Componment* componment){
    sons.push_back(componment);
}
void Composite::Remove(Componment* componment){
    for(auto itre = sons.begin(); itre != sons.end(); itre++){
        if((*itre) == componment){
            sons.erase(itre);
            break;
        }
    }
}
Componment* Composite::getChild(int index){return nullptr;}
void Composite::Display(){

    std::cout << "+" << name << std::endl;
    for(auto itre = sons.begin(); itre != sons.end(); itre++){
        std::cout << "|-" ;
        (*itre)->Display() ;
    }
}


