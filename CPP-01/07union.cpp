/*************************************************************************
	> File Name: 07union.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 15时26分37秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    union{//匿名联合
        unsigned int un;
        unsigned char uc[4];
    };
    un=0x12345678;
    for(int i=0;i<4;i++){
        printf("%#x ",uc[i]);
    }
}







