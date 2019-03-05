#include "headers.h"
#include "singleton.h"      // 单例模式
#include "prototype.h"      // 原型模式
#include "composite.h"      // 组合模式
#include "templemate.h"     // 模板模式
#include "simpleFactory.h"  // 简单工厂模式
#include "factoryMethod.h"  // 工厂方法模式，结合简单工厂模式查看
#include "abstractFactory.h"// 抽象工厂模式，结合工厂方法模式查看
using namespace std;

int main() {
    // ------- 单例模式的测试用例  ----------
    // Singleton* myinstance = Singleton::getInstance();
    // myinstance->print();
    // Singleton* myinstance1 = Singleton::getInstance();
    // cout<<"实例类1的地址是："<< myinstance<<endl;
    // cout<<"实例类2的地址是："<<myinstance1<<endl;


    // -------- 原型模式的测试用例  ----------
    // son1_prototype* son1 = new son1_prototype();
    // prototype* son_copy1 = clone(son1);
    // son2_prototype* son2 = new son2_prototype();
    // prototype* son_copy2 = clone(son2);
    // delete son1;
    // delete son_copy1;
    // delete son2;
    // delete son_copy2;

    // -------- 组合模式的测试用例  ----------
    // Leaf leaf1("员工A");
    // Leaf leaf2("员工B");
    // Leaf leaf3("员工C");
    // Leaf leaf4("员工D");
    // Composite compositeA("经理A");
    // Composite compositeB("经理B");
    // Composite compositeBoss("总经理BOSS");
    // compositeBoss.Add(&compositeA);
    // compositeBoss.Add(&compositeB);
    // compositeA.Add(&leaf1);
    // compositeA.Add(&leaf2);
    // compositeB.Add(&leaf3);
    // compositeB.Add(&leaf4);
    // compositeBoss.Display();
    
    // -------- 模板模式的测试用例  ----------
    // Templemate basic;
    // basic.process();
    // Way1 way1;
    // way1.process();
    // Way2 way2;
    // way2.process();    

    // -------- 简单工厂模式的测试用例  ----------
    // Factory factory;
    // Car* user1s = factory.getCar(Factory::AUDI);
    // Car* user2s = factory.getCar(Factory::BENZ);
    // Car* user3s = factory.getCar(Factory::BMW);
    // user1s->display();
    // user2s->display();
    // user3s->display(); 

    // -------- 工厂方法模式的测试用例  ----------
    // unique_ptr<basicFactory> fbenz(new BenzFactory());
    // unique_ptr<Car> myCar(fbenz->getCar());
    // myCar->display();
    // unique_ptr<basicFactory> ftesla(new TeslaFactory());
    // unique_ptr<Car> myCar2(ftesla->getCar());
    // myCar2->display();

    // -------- 抽象工厂模式的测试用例 ----------



    return 0;
}