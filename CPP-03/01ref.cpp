/*************************************************************************
	> File Name: 01ref.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 09时32分46秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
using namespace std;

void swap1(int *x,int *y){
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}

void swap2(int& x,int& y){
    x=x^y;
    y=x^y;
    x=x^y;
}

void swap3(const char*& s1,const char*& s2){
    const char *tmp=s2;
    s2=s1;
    s1=tmp;
}


int main(void){
    int a=3;
    int b=5;
    cout<<"a="<<a<<",b="<<b<<endl;
    //swap1(&a,&b);
    swap2(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;
    //练习：使用引用实现两个const char*的字符串
    const char* s1="hello";
    const char* s2="world";
    swap3(s1,s2);
    cout<<"s1="<<s1<<",s2="<<s2<<endl;
    return 0;
}











