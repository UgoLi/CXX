/*************************************************************************
	> File Name: 05inheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 16时04分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    void foo(void){
        cout<<"A::foo(void)"<<endl;
    }
};

class B:public A{
public:
    void foo(int i){
        cout<<"B::foo(int)"<<endl;
    }
    void bar(void){
        /*``A::*/foo();//基类同名成员被隐藏，需要指定作用域现实指明
        foo(100);
    }
    using A::foo;//将A中foo声明到当前子类，可以和子类foo构成重载关系
};

int main(void){
    B b;
    b.bar();
    return 0;
}





