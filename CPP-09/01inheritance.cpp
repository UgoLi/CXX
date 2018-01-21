/*************************************************************************
	> File Name: 01inheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 09时29分04秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(void):m_i(0){
        cout<<"Base::Base(void)"<<endl;
    }
    Base(int i):m_i(i){
        cout<<"Base::Base(int)"<<endl;
    }
    ~Base(void){
        cout<<"Base::~Base(void)"<<endl;
    }
    int m_i;
};

class Member{
public:
    Member(void){}
    Member(int i):m_i(i){
        cout<<"Member::Member(int)"<<endl;
    }
    ~Member(void){
        cout<<"Member::~Member(void)"<<endl;
    }
    int m_i;
};



class Derived:public Base{
public:
    Derived(void){
        cout<<"Derived::Derived(void)"<<endl;
    }
    //Base(i):说明基类子对象的初始化方式
    //m_member(i):说明成员子对象的初始化方式
    Derived(int i):m_j(i),m_member(i),Base(i){//构造优先级：基类子对象>成员子对象>成员变量
        cout<<"Derived:Derived(int)"<<endl;
    }
    ~Derived(void){
        cout<<"Derived::~Derived(void)"<<endl;
    }
    int m_j;
    Member m_member;
};


int main(void){
    //Derived d;
    //cout<<d.m_i<<endl;

    //Derived d2(123);
    //cout<<d2.m_i<<endl;
    //cout<<d2.m_member.m_i<<endl;
    
    //指向子类对象的基类指针
    Base* pb=new Derived(123);
    delete static_cast<Derived*>(pb);
    pb=NULL;
    return 0;
}
