/*************************************************************************
	> File Name: 11constfunc.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 14时55分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    void func(void)const{
        cout<<"func函数常版本"<<endl;
    }
    void func(void){
        cout<<"func函数的非常版本"<<endl;
    }
};

int main(void){
    A a;
    a.func();//非常版本
    const A& ra=a;
    ra.func();//常版本
    return 0;
}



