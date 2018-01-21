/*************************************************************************
	> File Name: 02initlist.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 09时42分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int data){
        cout<<"A的构造函数"<<endl;
        m_data=data;
    }
    int m_data;
};

class B{
public:
    //m_a(123):说明成员子对象的初始化方式
    B(void):m_a(123){
        cout<<"B的构造函数"<<endl;
    }
    A m_a;
};

int main(void){
    B b;
    cout << b.m_a.m_data;
    return 0;
}







