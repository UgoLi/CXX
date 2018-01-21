/*************************************************************************
	> File Name: 04overload.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 10时08分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int foo(int a){
    cout<<"foo("<<a<<")"<<endl;
}
void foo(int a,int b){
    cout<<"foo("<<a<<","<<b<<")"<<endl;
}

double foo(void){
    cout << "foo(void)" <<endl;
}

void foo(int a,float b){
    cout << "foo(int,float)" <<endl;
}

int main(void){
    foo(1);
    ::foo(1,1);
    foo();
    foo(1,3.14f);
    //通过函数指针调用函数，由函数指针的类型决定调用哪个版本，而不是由实参决定
    void(* pfunc)(int,float)=foo;
    pfunc(10,20);
    return 0;
}

















