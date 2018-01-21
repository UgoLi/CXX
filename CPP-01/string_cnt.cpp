/*************************************************************************
	> File Name: string_cnt.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 18时18分54秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(void){
    string s;
    int cnt=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='a'){
            cnt++;
        }
    }
    cout << "A/a的个数:" << cnt <<endl;
    return 0;
}


