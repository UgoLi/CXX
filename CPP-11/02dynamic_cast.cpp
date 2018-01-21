/*************************************************************************
	> File Name: 02dynamic_cast.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 09时56分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
    virtual void foo(void){}
};

class B:public A{
    void foo(void){}
};

class C:public A{
    void foo(void){}
};

int main(void){
    B b;
    A* pa=&b;
    //B* pb=static_cast<B*>(pa);//合理转换
    //C* pc=static_cast<C*>(pa);//危险转换
    B* pb=dynamic_cast<B*>(pa);//合理转换
    C* pc=dynamic_cast<C*>(pa);//危险转换,返回0
    
    cout<<"pa="<<pa<<endl;
    cout<<"pb="<<pb<<endl;
    cout<<"pc="<<pc<<endl;

    A& ra=b;
    C& rc=dynamic_cast<C&>(ra);


    return 0;
}

