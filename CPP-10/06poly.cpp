/*************************************************************************
	> File Name: 06poly.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月06日 星期三 14时54分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(void){
        cout<<"Base::Base()"<<endl;
    }
    virtual ~Base(void){
        cout<<"Base::~Base()"<<endl;
    }
};

class Derived:public Base{
public:
    Derived(void){
        cout<<"Derived::Derived"<<endl;
    }
    ~Derived(void){
        cout<<"Derived::~Derived()"<<endl;
    }
};

int main(void){
    Derived* pb=new Derived;
    //1）pb->析构函数
    //2）释放内存
    delete pb;
    return 0;
}


