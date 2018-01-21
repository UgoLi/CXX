/*************************************************************************
	> File Name: 08enum.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 16时14分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    enum Color{
        RED,//0
        GREEN,//1
        BLUE=100,//100
        YELLOW//101
    };
    
    cout<<RED<<","<<GREEN<<","<<BLUE<<","<<YELLOW<<endl;
    Color c;
    c=BLUE;
    cout <<c<<endl;
    
    
    return 0;
}



