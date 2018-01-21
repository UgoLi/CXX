/*************************************************************************
	> File Name: 10reference.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 16时42分46秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
int main(void){
    int a=66;
    int& b=a;//b引用a，b就是a的别名
    cout<<"a="<<a<<","<<&a<<endl;
    cout<<"b="<<a<<","<<&b<<endl;
    b=88;
    cout<<"a="<<a<<endl;
    cout<<"b="<<a<<endl;
    int c=99;
    b=c;//将c的值赋值给b，等价赋值给a
    cout<<"a="<<a<<endl;
    cout<<"b="<<a<<endl;
    
    //int& re;//err:定义未初始化
    //
    //char& rc=c;//err:类型要一致
    
    return 0;
}



