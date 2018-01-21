/*************************************************************************
	> File Name: 04hungry.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 14时34分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

//单例模式：饿汉式
class A{
public:
    //获取单例对象
    static A& getInstance(void){
        return s_instance;
    }
    void print(void){
        cout<<m_data<<endl;
    }
private:
    //私有化构造函数
    A(int data=0):m_data(data){};
    A(const A& that);

    int m_data;
    //内部维护唯一对象
    static A s_instance;
};
A A::s_instance(123);

int main(void){
    
    //A a(100);
    //A* pa=new a(100);
    
    //A& a1=A::getInstance();
    A& a0=A::getInstance();
    A& a1=a0.operator=(a0.getInstance());
   

    A& a2=A::getInstance();
    a1.print();
    a2.print();

    cout<<"a1="<<&a1<<endl;
    cout<<"a2="<<&a2<<endl;

    return 0;
}


