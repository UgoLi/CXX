/*************************************************************************
	> File Name: 09constfunc.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 14时08分32秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int data=0):m_data(data),m_data2(data){}
    //常成员函数
    //void print(const A* this);
    void print(void)const{
        cout<<this->m_data/*++*/<<endl;
        this->m_data2=4321;
        cout<<this->m_data2<<endl;
    }
private:
    int m_data;
    mutable int m_data2;
};

int main(void){
    const A a(1234);
    a.print();
    return 0;
}

