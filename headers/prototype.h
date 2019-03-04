//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_PROTOTYPE_H
#define DESIGNPATTERN_PROTOTYPE_H

class prototype{
public:
    prototype();
    virtual ~prototype();
    virtual prototype* clone() = 0;
};

class son1_prototype: public prototype{
public:
    son1_prototype();
    virtual ~son1_prototype();
    virtual prototype* clone();
};

class son2_prototype: public prototype{
public:
    son2_prototype();
    virtual ~son2_prototype();
    virtual prototype* clone();
};

// 最能体现【原型模式】的函数，所谓clone,来什么我复制什么
// 虽然参数都是基类，但是来一个派生类我克隆的也是一个派生类
prototype* clone(prototype* pro);

#endif