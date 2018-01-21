/*************************************************************************
	> File Name: 06diamond.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 15时22分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int data):m_data(data){
        cout<<"A,"<<this<<",is,"<<sizeof(*this)<<endl;
    }
protected:
    int m_data;
};

class B:virtual public A{
public:
    B(int data):A(data){
        cout<<"B,"<<this<<",is,"<<sizeof(*this)<<endl;
    }
    void set(int data){
        m_data=data;
    }
};

class C:virtual public A{//虚继承
public:
    C(int data):A(data){        
        cout<<"C,"<<this<<",is,"<<sizeof(*this)<<endl;
    }
    int get(void){
        return m_data;
    }
};

class D:public B,public C{//虚继承
public:
    //虚继承时：末端的汇聚子类负责构造公共基类子对象
    D(int data):A(data),B(data),C(data){
        cout<<"D,"<<this<<",is,"<<sizeof(*this)<<endl;
    }
};

int main(void){
    D d(100);
    cout<<d.get()<<endl;
    d.set(200);
    cout<<d.get()<<endl;
    return 0;
}


