/*************************************************************************
	> File Name: 02static.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 11时35分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int data=0):m_data(data){}

    int m_data;
    static int s_data;//声明
};
int A::s_data=100;//定义和初始化

int main(void){
    //A a(200);
    //cout<<sizeof(a)<<endl;//4,不包含s_data
    //cout<<a.s_data<<endl;
    //cout<<a.m_data<<endl;
    cout<<A::s_data<<endl;//可以通过类名和作用域限定直接访问
    return 0;
}




