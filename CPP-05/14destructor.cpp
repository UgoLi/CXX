/*************************************************************************
	> File Name: 14destructor.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 16时15分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(void){
        cout<<"A::A()"<<endl;
    }
    ~A(void){
        cout<<"~A::A()"<<endl;
    }
};

class B{
public:
    B(void){
        cout<<"B::B(void)"<<endl;
    }
    ~B(void){
        cout<<"~B::B(void)"<<endl;
    }
    A m_a;
};


int main(void){
    B b;
    return 0;
}


