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
    
    static void func1(void){
        cout<<"静态成员函数"<<endl;
        //cout<<m_data<<endl;
        cout<<s_data<<endl;
    }
    void func2(void){
        cout<<"非静态成员函数"<<endl;
        cout<<m_data<<endl;
        cout<<s_data<<endl;
    }
    int m_data;
    static int s_data;//声明
};
int A::s_data=100;//定义和初始化

int main(void){

    A a(200);
    a.func2();
    //A::func2();//err
    a.func1();
    A::func1();//ok
    
    return 0;
}




