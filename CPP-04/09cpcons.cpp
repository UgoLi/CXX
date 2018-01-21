/*************************************************************************
	> File Name: 08cpcons.cpp copyconstruct
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 16时35分16秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int data=0){
        m_data=data;
    }
    A(const A& that){
        cout<<"A的拷贝构造函数"<<endl;
        m_data=that.m_data;
    }
    int m_data;
};

class B{
public:
    A m_a;//类 类型的成员变量
};

int main(void){
    B b;
    b.m_a.m_data=1234;

    B b2(b);
    cout<<b.m_a.m_data<<endl;
    cout<<b2.m_a.m_data<<endl;

    return 0;
}




