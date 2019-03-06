//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_COMMOND_H
#define DESIGNPATTERN_COMMOND_H
#include "headers.h"
class Command{
public:
    Command(){}
    virtual ~Command(){}
    virtual void excute() = 0;
};

class Cook{
public:
    Cook(){}
    ~Cook(){}
    void makesoup(){
        std::cout << "执行做汤命令" << std::endl;
    }
    void frieddish(){
        std::cout << "执行炒菜命令" << std::endl;
    }
    void makecake(){
        std::cout << "执行做蛋糕命令" << std::endl;
    }
};

class MakesoupCommand: public Command{
public:
    MakesoupCommand():cook(new Cook()){}
    ~MakesoupCommand(){}
    void excute(){
        cook->makesoup();
    }
private:
    std::shared_ptr<Cook> cook;
};
class FrieddishCommand: public Command{
public:
    FrieddishCommand():cook(new Cook()){}
    ~FrieddishCommand(){}
    void excute(){
        cook->frieddish();
    }
private:
    std::shared_ptr<Cook> cook;
};
class MakecakeCommand: public Command{
public:
    MakecakeCommand():cook(new Cook()){}
    ~MakecakeCommand(){}
    void excute(){
        cook->makecake();
    }
private:
    std::shared_ptr<Cook> cook;
};

class Waiter{
public:
    Waiter(){
        commands.push_back(new FrieddishCommand());
        commands.push_back(new MakecakeCommand());
        commands.push_back(new MakesoupCommand());
    }
    ~Waiter(){}

    void calls(int i){
        switch (i)
        {
            case 0:
                commands[0]->excute();
                break;
            case 1:
                commands[1]->excute();
                break;
            case 2:
                commands[2]->excute();
                break;
            default:
                std::cout << "对不起，没有！" << std::endl;
                break;
        }
    }
private:
    std::vector<Command*> commands;
};




#endif