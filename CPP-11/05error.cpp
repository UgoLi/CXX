/*************************************************************************
	> File Name: 03error.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 11时03分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
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
        string a="文件打开失败";
        throw a;
        //cout<<"文件打开失败"<<endl;
        //return -1;
    }
    //...
    fclose(fp);
    return 0;
}

int func2(){
    A a;
    func3();
    //if(func3()==-1){
    //    return -1;
    //}
    //...
    return 0;
}

int func1(void){
    A a;
    func2();
    //if(func2()==-1){
    //    return -1;
    //}
    //...
    return 0;
}

int main(void){
    try{
        func1();
    }
    catch(string ex){
        if(ex=="文件打开失败"){
            cout<<ex<<endl;
            return -1;
        }
    }
    func1();
    //if(func1()==-1){
    //    return -1;
    //}
    return 0;
}

