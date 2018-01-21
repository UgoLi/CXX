/*************************************************************************
	> File Name: 06defcons.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 15时26分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Bcls{
public:
    Bcls(void){
        cout<<"Bcls"<<endl;
        m_j=100;            
    }
    Bcls(int a){
        m_j=a;
    }
    int m_j;
};
class Acls{
public:
    Acls(int i,const Bcls& b){
        m_b=b;
        m_i=i;
    }
    Acls(void){};
    int m_i;
    Bcls m_b;//类 类型成员变量，自动调用B::B(void)无参构造函数；
};
int main(void){
    Bcls b(200);
    Acls a(100,b);
    cout<<a.m_i<<endl;//不确定
    cout<<a.m_b.m_j<<endl;//0   
}
