//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_BUILDER_H
#define DESIGNPATTERN_BUILDER_H
#include "headers.h"

// Product角色
class Product{
public:
    Product(){}
    ~Product(){}
    void setPartA(const std::string& part){
        partA = part;
    }
    void setPartB(const std::string& part){
        partB = part;
    }
    void setPartC(const std::string& part){
        partC = part;
    }
    void getPartA(){
        std::cout << partA << std::endl;
    }
    void getPartB(){
        std::cout << partB << std::endl;
    }
    void getPartC(){
        std::cout << partC << std::endl;
    }
private:
    std::string partA;
    std::string partB;
    std::string partC;
};
// Builder 角色
class Builder{
public:
    Builder(){
        product = std::shared_ptr<Product>(new Product());
    }
    virtual ~Builder(){}
    virtual void createPartA() = 0;
    virtual void createPartB() = 0;
    virtual void createPartC() = 0;
    virtual std::shared_ptr<Product> getProduct(){
        return product;
    }
protected:
    std::shared_ptr<Product> product;
};
// concreteBuilder 角色
class ConcreteBuilder1: public Builder{
public:
    ConcreteBuilder1(){}
    ~ConcreteBuilder1(){}
    void createPartA(){
        product -> setPartA("Builder 1 A");
    }
    void createPartB(){
        product -> setPartB("Builder 1 B");
    }
    void createPartC(){
        product -> setPartC("Builder 1 C");
    }
};
class ConcreteBuilder2: public Builder{
public:    
    ConcreteBuilder2(){}
    ~ConcreteBuilder2(){}
    void createPartA(){
        product -> setPartA("Builder 2 A");
    }
    void createPartB(){
        product -> setPartB("Builder 2 B");
    }
    void createPartC(){
        product -> setPartC("Builder 2 C");
    }
};
// Director 角色
class Director{
public:
    Director(Builder* builder):builder(builder){}
    ~Director(){}
    std::shared_ptr<Product> Construct(){
        builder->createPartA();
        builder->createPartB();
        builder->createPartC();
        return builder->getProduct();
    }
private:
    std::shared_ptr<Builder> builder;
};

#endif