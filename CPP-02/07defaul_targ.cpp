/*************************************************************************
	> File Name: 07defaul_targ.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 14时11分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

void foo(int a,int b=200,int c=300);
void foo(int i){}

int main(void){
    foo(1,2,3);
    foo(1,2);
    //foo(1);//注意歧义错误
}

void foo(int a,int b/*=200*/,int c/*=300*/){
    cout<<"a=:"<<a<<endl;
    cout<<"b=:"<<b<<endl;
    cout<<"c=:"<<c<<endl;
}







