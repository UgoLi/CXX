/*************************************************************************
	> File Name: 03iheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 11时03分02秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(void):m_i(0){}
    Base(int i):m_i(i){}
    Base(const Base& that):m_i(that.m_i){
        cout<<"Base(const Base&)"<<endl;
    }
    
    Base& operator=(const Base& that){
        cout<<"Base::operator=(...)"<<endl;
        if(&that!=this){
            m_i=that.m_i;
        }
        return *this;
    }
    int m_i;
};

class Derived:public Base{
public:
    Derived(void):m_i(0){}
    Derived(int i,int j,int k):m_j(k),m_i(j),Base(i){}
    //以拷贝构造初始化基类子对象
    Derived(const Derived& that):m_i(that.m_i),m_j(that.m_j),Base(that){}
    Derived& operator=(const Derived& that){
        cout<<"Derived::operator=(...)"<<endl;
        if(&that!=this){
            //Base::m_i=that.Base::m_i;   
            //直接调用基类拷贝构造函数，复制基类子对象
            //Base::operator=(that);
            m_i=that.m_i;
            m_j=that.m_j;
        }
        return *this;
    }
    int m_i;
    int m_j;
};

int main(void){
    Derived d1(100,200,300);
    Derived d2(d1);//拷贝构造
    /*
    cout<<d1.Base::m_i<<endl;
    cout<<d1.m_i<<endl;
    cout<<d2.Base::m_i<<endl;
    cout<<d2.m_i<<endl;
    */

    Derived d3;
    cout<<d3.Base::m_i<<","<<d3.m_i<<","<<d3.m_j<<endl;
    d3=d2;
    cout<<d3.Base::m_i<<","<<d3.m_i<<","<<d3.m_j<<endl;
    return 0;
}




