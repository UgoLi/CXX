/*************************************************************************
	> File Name: 03initlist.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 10时02分52秒
 ************************************************************************/

#include<iostream>
using namespace std;

int g_data=100;

class A{
public:
    A(void):m_r(g_data),m_c(200){
        //m_r = g_data;
        //m_c = 200;
    }
    int& m_r;
    const int m_c;
};

int main(void){
    A a;
    cout<<a.m_r<<a.m_c<<endl;
    return 0;
}

