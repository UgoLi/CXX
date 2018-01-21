/*************************************************************************
	> File Name: 04namespace.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 14时09分03秒
 ************************************************************************/

#include<iostream>

using namespace std;/*std空间成员全局可见,
                    以后使用标准名字空间的成员可以省略"std::"*/

namespace ns1{
    void func(void){
        cout<<"ns1 func()"<<endl;
    }
    int num=10;
}

namespace ns2{
    void func(void){
        cout << "ns2 func()"<<endl;
    }
    int num=20;
}

int num=30;//无名名字空间


int main(void){
    
    //using ns1::num;
    cout << num<<endl;//10
    //cout <<ns2::num<< endl;//20
    //cout <<::num<< endl;//30
    return 0;
}

















