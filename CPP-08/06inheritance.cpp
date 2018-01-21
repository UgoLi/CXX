/*************************************************************************
	> File Name: 06inheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 16时36分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

class B:public A{
public:
    void foo(void){
        m_public=10;//public
        m_protected=10;//protected
        //m_private=10;//子类无法直接访问基类的私有成员
    }
};
class C:protected A{
public:
    void foo(void){
        m_public=10;//protected
        m_protected=10;//protected
        //m_private=10;//子类无法直接访问基类的私有成员
    }
};
class D:private A{
public:
    void foo(void){
        m_public=10;//private
        m_protected=10;//private
        //m_private=10;//子类无法直接访问基类的私有成员
    }
};

class X:public B{
public:
    void foo(void){
        m_public=10;
        m_protected=10;
        //m_private=10;
    }
};
class Y:public C{
public:
    void foo(void){
        m_public=10;
        m_protected=10;
        //m_private=10;
    }
};
class Z:public D{
public:
    void foo(void){
        //m_public=10;
        //m_protected=10;
        //m_private=10;
    }
};
int main(void){
    B b;
    b.m_public=10;
    //b.m_protected=10;
    //b.m_private=10;

    C c;//保护继承
    //c.m_public=10;
    //c.m_protected=10;
    //c.m_private=10;

    D d;//私有继承
    //d.m_public=10;
    //d.m_protected=10;
    //d.m_private=10;
    return 0;
}




