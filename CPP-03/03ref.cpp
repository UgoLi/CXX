/*************************************************************************
	> File Name: 03ref.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 11时10分59秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

struct A{
    int data;
    /*const*/int& foo(void){
        return data;
    }
};


int main(void){
    A a={0};
    a.foo()=123;
    cout<<a.data<<endl;
    return 0;
}



