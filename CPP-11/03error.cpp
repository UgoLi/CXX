/*************************************************************************
	> File Name: 03error.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 11时03分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<csetjmp>
using namespace std;


class A{
public:
    A(void){cout<<"A::A()"<<endl;}
    ~A(void){cout<<"A::~A()"<<endl;}
};

int func3(void){
    A a;
    FILE* fp=fopen("none.txt","r");
    if(!fp){
        cout<<"文件打开失败"<<endl;
        return -1;
    }
    //...
    fclose(fp);
    return 0;
}

int func2(){
    A a;
    if(func3()==-1){
        return -1;
    }
    //...
    return 0;
}

int func1(void){
    A a;
    if(func2()==-1){
        return -1;
    }
    //...
    return 0;
}

int main(void){
    if(func1()==-1){
        return -1;
    }
    return 0;
}

