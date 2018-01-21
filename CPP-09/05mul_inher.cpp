/*************************************************************************
	> File Name: 05mul_inher.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 14时58分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    void foo(void){
        cout<<"A::foo(void)"<<endl;
    }
};

class B{
public:
    void foo(int i){
        cout<<"B::foo(int)"<<endl;
    }
};
class C:public A,public B{
public:
    //using A::foo;//子类访问基类foo函数会歧义,需要作用域限定指定基类
    //using B::foo;
};

int main(void){
    C c;
    c./*A::*/foo();
    c./*B::*/foo(123);

    return 0;
}


