/*************************************************************************
	> File Name: 01string.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 09时23分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void){
    string s;
    int cnt=0;
    cout<<"请输入一个字符串:";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='a')
            cnt++;
    }
    cout<<"a/A的个数:"<<cnt<<endl;
    return 0;
}















