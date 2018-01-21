/*************************************************************************
	> File Name: 11constref.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 17时04分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    //int& r=100;//err:non-const reference
    const int& r=100;
    int const& a=200;

    cout << r << endl;//100
    cout << a << endl;//200
    return 0;
}

