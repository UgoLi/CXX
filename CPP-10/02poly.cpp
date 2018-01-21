/*************************************************************************
	> File Name: 02poly.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月06日 星期三 10时22分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    virtual void hum(int i=1){
        cout<<"Base::hun"<<endl;
    }
    virtual void bar(int i){
        cout<<"Base::bar"<<endl;
    }
    virtual void foo(void){
        cout<<"Base::foo"<<endl;
    }
    virtual Base* func(void){
        cout<<"Base::func"<<endl;
    }
};

class Derived:public Base{
public:
    int hum(void){
        cout<<"Derived::hun"<<endl;
    }
    void bar(void){
        cout<<"Derived::bar"<<endl;
    }
    virtual void foo(void){
        cout<<"Derived::foo"<<endl;
    }
    Derived* func(void){
        cout<<"Derived::func"<<endl;
    }
};

int main(void){
    Derived d;
    Base* pb=&d;
    pb->foo();
    pb->func();
    return 0;
}

