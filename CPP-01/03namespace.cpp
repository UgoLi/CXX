/*************************************************************************
	> File Name: 03namespace.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 14时09分03秒
 ************************************************************************/

#include<iostream>

using namespace std;//std空间成员全局可见,以后使用标准名字空间的成员可以省略"std::"

namespace ns1{
    void func(void){
        cout<<"ns1 func()"<<endl;
    }
}

namespace ns2{
    void func(void){
        cout << "ns2 func()"<<endl;
    }
}


int main(void){
    using namespace ns1;//ns1空间成员局部可见
    func();
    using namespace ns2;
   ns2::func();
    return 0;
}

















