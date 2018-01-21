/*************************************************************************
	> File Name: 02bool.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 09时38分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    bool b=false;
    cout<<b<<endl;
    cout<<"size="<<sizeof(b)<<endl;
    b=100;
    cout<<b<<endl;
    b=3.14;
    cout<<b<<endl;
    b="hello world";
    cout<<(void*)&b<<endl;
    char* p=NULL;
    b=p;
    cout<<b<<endl;

    return 0;
}


