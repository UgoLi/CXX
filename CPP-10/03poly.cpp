/*************************************************************************
	> File Name: 03poly.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月06日 星期三 11时22分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    virtual int cal(int x,int y){
        return x+y;
    }
    //d,func();//func(&d)
    //void func(Base* this=&d)
    //通过子类调用基类的func函数，
    //在函数中的this指针就是指向子类对象的指针
    void func(void){
        cout<</*this->*/cal(100,200)<<endl;
    }
};

class Derived:public Base{
public:
    int cal(int a,int b){
        return a*b;
    }
    int m_i;
};

int main(void){
    Derived d;
    Base* b=&d;
    //通过对象调虚函数没有多态
    //b.func();
    //d.func();
    cout<<b->Base::cal(100,200)<<endl;
    cout<<d.Base::cal(100,200)<<endl;
    cout<<b->Derived::m_i<<endl;
    return 0;
}


