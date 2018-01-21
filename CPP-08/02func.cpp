/*************************************************************************
	> File Name: 01complex.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 09时21分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Square{
public:
    double operator()(double x)const{
        return x*x;
    }
    int operator()(int a,int b,int c=5)const{
        return a+b-c;
    }


int main(void){
    Square s;
    //s.operator()(3.14)
    cout<<s(3.14)<<endl;
    cout<<s(10,20,25)<<endl;
    cout<<s(10,20)<<endl;
}
