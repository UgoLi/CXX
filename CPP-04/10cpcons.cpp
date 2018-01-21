/*************************************************************************
	> File Name: 10cpcons.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 17时08分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(void){
        cout<<"无参构造函数A::A(void)"<<endl;
    }
    A(const A& that){
        cout<<"拷贝构造函数A::A(const A&)"<<endl;
    }
};

void foo(A a){}

A bar(void){
    A a;//4)-->A::A()
    cout<<"&a:"<<(void*)&a<<endl;
    return a;//5)-->A::A(const A&)
}
int main(void){
    A a1;//1)-->A::A()
    A a2=a1;//2)-->A::A(const A&)
    foo(a1);//3)-->A::A(const A&)
    
    //bar函数返回值a拷贝到匿名对象，匿名对象再拷贝给a3，
    //需要再次拷贝构造，因此编译器优化，a3直接引用a，不再
    //发生拷贝构造。
    //去优化选项：
    //g++ -fno-elide-construction 
    A a3 = bar();//6)-->A::A(const A&)
    cout<<"&a3:"<<(void*)&a3<<endl;
    return 0;
}

