## 设计模式

#### 单例模式

- 一个世界只有一个对象

- 实现方式：

  ```shell
  1. private 构造函数，析构函数，拷贝构造函数和赋值构造函数
  2. 类的内部 定义一个static 的该类的指针 instance
  3. 类的内部定义一个public 的获得上述指针的函数，如果该指针为NULL，创建一个返回；否则直接返回
  4. 全局初始化instance = NULL
  ```

  

#### 原型模式(prototype)

- 本质上是多态类的克隆clone

- 意义：

  Prototype 的意义在于，你拿到一个 Base* ，它指向某个 Derived 对象，你想克隆出 Derived 对象，但代码中不写出 Derived 的具体类型，因为有很多派生类，这种情况下你用构造函数是搞不定的，type-switch 是 bad smells 。

- 意图：

  ​       用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象。

- 适用性：

  ​        当一个系统应该独立于他的产品创建、构成和表示时，需要使用原型模式

  ​        当要实例化的类是在运行时刻指定时，如通过动态装载

  ​        为了避免创建一个与产品类层次平行的工厂类层次时

  ​        当一个类的实例只能有几个不同状态组合中的一种时，建立相应数目的原型并克隆他们可能比每次用合适的状态手工实例化该类更方便一些。

- 实现方式

  ```shell
  1. 基类 的析构为虚函数，定义一个public的功能是复制的clone函数，且为纯虚函数
  2. 派生类A,B 继承自 基类，然后分别实现自己的纯虚函数，只不过clone返回的是派生类类型A，B。
  ```

#### 组合模式

- 树形结构，类似于二叉树里面的叶子节点和非叶子节点；无论是不是叶子，操作都一样
- 适用场景：
  - 希望用户忽略组合对象与单个对象的不同，统一地使用组合结构中的所有对象。
  - 表示对象的“整体-部分”层次结构（树形结构）
  - 公司部门管理什么的用组合模式比较好。

#### 模板模式

#### 工厂模式

#### 抽象工厂模式

#### 责任链模式

#### 迭代器模式