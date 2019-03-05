#include "factoryMethod.h"

Car* BenzFactory::getCar(){
    return new Benz();
}

Car* AudiFactory::getCar(){
    return new Audi();
}

Car* TeslaFactory::getCar(){
    return new Tesla();
}