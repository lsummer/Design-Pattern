
#include "simpleFactory.h"
#include "headers.h"

Car::Car():car_name("unknown"){}
void Car::display(){
    std::cout << car_name << std::endl;
}
Benz::Benz(){
    car_name = "benz";
}
Bmw::Bmw(){
    car_name = "bmw";
}
Audi::Audi(){
    car_name = "Audi";
}
Car* Factory::getCar(Factory::CarType type){
    switch (type)
    {
        case Factory::BENZ:
            return new Benz();
            break;
        case Factory::AUDI:
            return new Audi();
            break;
        case Factory::BMW:
            return new Bmw();
            break;
        default:
            return new Car();
            break;
    }
}
