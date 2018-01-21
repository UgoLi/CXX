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

int main(void){
    A a1(100);
    A a2(a1);//-->A::A(const A&)
    cout<<a1.m_data<<","<<a2.m_data<<endl;
    return 0;
}




