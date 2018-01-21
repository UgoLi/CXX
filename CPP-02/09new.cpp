/*************************************************************************
	> File Name: 09new.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 16时14分53秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(void){
    //int* parr=new int[10];
    //new数组同时初始化，在C++11标准中支持
    int* parr=new int[10]{1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        //*(parr+i)=i;
        //parr[i]=i;
        cout<<parr[i]<<' ';
    }
    cout<<endl;
    delete[] parr;
    parr=NULL;
    return 0;
}
