/*************************************************************************
	> File Name: 13format.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 16时39分57秒
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<iomanip>//声明带参数的流控制符
using namespace std;
int main(void){
    cout<<sqrt(200)<<endl;
    //cout.precision(10);
    cout<<setprecision(10)<<sqrt(200)<<endl;
    cout<<'[';
    //cout.width(10);//域宽
    //cout.fill('-');//用'-'填充空白字符
    //cout.setf(ios::showpos);//显示符号位
    //cout.setf(ios::internal);//设置内插对齐
    cout<<setw(10)<<setfill('-')<<showpos<<internal<<1234;
    cout<<']'<<endl;
    return 0;
}
