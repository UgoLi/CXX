/*************************************************************************
	> File Name: 02namespace.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 11时56分51秒
 ************************************************************************/

#include<iostream>
namespace ns1{
    void func(void){
        std::cout<<"ns1的func函数"
        <<std::endl;
    }
}
int main(void){
    ns1::func();
}


