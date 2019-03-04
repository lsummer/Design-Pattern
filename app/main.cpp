#include "headers.h"
#include "singleton.h"
#include "prototype.h"
#include "composite.h"
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
    Leaf leaf1("员工A");
    Leaf leaf2("员工B");
    Leaf leaf3("员工C");
    Leaf leaf4("员工D");
    Composite compositeA("经理A");
    Composite compositeB("经理B");
    Composite compositeBoss("总经理BOSS");
    compositeBoss.Add(&compositeA);
    compositeBoss.Add(&compositeB);
    compositeA.Add(&leaf1);
    compositeA.Add(&leaf2);
    compositeB.Add(&leaf3);
    compositeB.Add(&leaf4);
    compositeBoss.Display();

    return 0;
}