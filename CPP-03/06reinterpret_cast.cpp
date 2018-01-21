/*************************************************************************
	> File Name: 06reinterpret_cast.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 15时21分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    //"\000"=='\0'==0
    char buf[]="0001\00012345678\000888666";
    struct Acc{
        char type[5];
        char id[9];
        char passwd[7];
    };
    Acc* pacc=reinterpret_cast<Acc*>(buf);
    cout<<pacc->type<<endl;
    cout<<pacc->id<<endl;
    cout<<pacc->passwd<<endl;
    return 0;
}

