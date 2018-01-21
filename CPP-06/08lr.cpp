/*************************************************************************
	> File Name: 08lr.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 16时39分46秒
 ************************************************************************/

#include<iostream>
using namespace std;

void func(int& i){}

int g=100;
int bar(void){
    return g;
}

class A{};
A hum(void){
    A a;
    return a;
}

int main(void){
    A a1;
    hum()=a1;//表面hum函数返回临时对象不能赋值，
             //实际编译器--》hum().operator=(a1)
             //hum返回值A前加const修饰，避免操作符重载，正常报错
    //bar()=200;//err,bar函数返回一个将亡右值

    int i=100;
    i=200;
    ++i;
    
    func(i);
    //func(200);//err,右值传给普通引用

}

