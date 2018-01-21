/*************************************************************************
	> File Name: 01typeid.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 09时22分15秒
 ************************************************************************/

#include<iostream>
#include<typeinfo>
using namespace std;

class Base{virtual void foo(void){}};
class Derived1:public Base{void foo(void){}};
class Derived2:public Base{void foo(void){}};

void func(Base& base){
    if(typeid(base)==typeid(Base)){
        cout<<"Base"<<endl;
    }else if(typeid(base)==typeid(Derived1)){
        cout<<"Derived1"<<endl;
    }else{
        cout<<"Derived2"<<endl;
    }
}


int main(void){
    int x=100;
    class Test{
        int a;
    };
    cout<<typeid(Test).name()<<endl;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(unsigned int).name()<<endl;
    cout<<typeid(double[10]).name()<<endl;
    cout<<typeid(char[10]).name()<<endl;
    
    Base* b=new Derived1;
    Base base;
    Derived1 derived1;
    Derived2 derived2;
    cout<<typeid(*b).name()<<endl;
    cout<<typeid(b).name()<<endl;
    func(base);
    func(derived1);
    func(derived2);
    
    cout<<typeid(float*).name()<<endl;
    cout<<typeid(float**).name()<<endl;
    cout<<typeid(float*[5]).name()<<endl;
    cout<<typeid(float*[]).name()<<endl;
    cout<<typeid(float(*)[]).name()<<endl;
    cout<<typeid(float(*[5])(char)).name()<<endl;
    return 0;
}



