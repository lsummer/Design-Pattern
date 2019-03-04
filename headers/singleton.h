//
// Created by LXY on 2019/3/4.
//

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

class Singleton{
private:
    Singleton();

    ~Singleton();
    Singleton(const Singleton& singleton);
    Singleton& operator =(const Singleton& singleton);

public:
    static Singleton* getInstance();

    void print();

    class SingletonHuishou{
        public:
        ~SingletonHuishou(){
            if(Singleton::instance != nullptr){
                delete Singleton::instance;
                Singleton::instance = nullptr;
            }
        }
    };
public:
    static Singleton* instance;

};

#endif //DESIGNPATTERN_SINGLETON_H
