/*************************************************************************
	> File Name: 04initlist.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 10时09分57秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Dummy{
public:
    Dummy(const char* psz):m_str(psz?psz:""),m_len(strlen(psz)){}
    string m_str;
    size_t m_len;
};

int main(void){
    //Dummy d("hello world");
    Dummy d(NULL);
    cout<<d.m_str<<",len="<<d.m_len<<endl;
    return 0;
}



