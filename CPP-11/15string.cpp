/*************************************************************************
	> File Name: 15string.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 17时00分12秒
 ************************************************************************/


#include<iostream>
#include<sstream>
using namespace std;

int main(void){
    int i=1234;
    double d=5.67;
    char s[]="hello world";
    /*char buf[100];
    sprintf(buf,"%d %g %s",i,d,s);
    */
    ostringstream oss;
    oss<<i<<' '<<d<<' '<<s<<endl;
    cout<<oss.str()<<endl;

    istringstream iss;
    iss.str("100 9.87 abcdef");
    iss>>i>>d>>s;
    cout<<i<<','<<d<<','<<s<<endl;
    return 0;
}


