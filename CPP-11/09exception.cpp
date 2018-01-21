/*************************************************************************
	> File Name: 09exception.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 14时53分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    virtual void func(void)throw(int,char*){
        cout<<"Base:func()"<<endl;
    }
    virtual ~Base(void)throw(){}
};

class Derived:public Base{
public:
    void func(void)throw(/*int,char**/){
        cout<<"Derived::func()"<<endl;
    }
    ~Derived()throw(){};
    string m_s;
    int a;
};

int main(void){
    Derived d;
    Base* pb=&d;
    pb->func();
    return 0;
}
