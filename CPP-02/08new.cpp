/*************************************************************************
	> File Name: 08new.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 16时02分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    int* pi=new int;
    *pi=10;
    cout << *pi <<endl;
    delete pi;
    pi=NULL;
    
    pi=new int(20);
    cout<<*pi<<endl;
    (*pi)++;
    cout<<*pi<<endl;
    delete pi;
    pi=NULL;
    return 0;
}









