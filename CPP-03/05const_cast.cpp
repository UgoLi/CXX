/*************************************************************************
	> File Name: 05const_cast.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 14时46分42秒
 ************************************************************************/
#include<iostream>
using namespace std;
int main(void){
    //volatile修饰的变量表示容易发生改变的，告诉编译器
    //不要做优化处理，每次使用这个变量都要小心地从内存
    //中再加载一次，而不是取寄存器中的副本。
    const volatile int a=100;
    //int* pi=&a;//err
    //const int* pi=&a;//ok
    int* pi=const_cast<int*>(&a);
    *pi=200;//ok
    cout<<"a="<<a<<",*pi="<<*pi<<endl;
    cout<<"&a="<<(void*)&a<<",pi="<<(void*)pi<<endl;
    return 0;
}
