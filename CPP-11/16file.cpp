/*************************************************************************
	> File Name: 16file.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 17时11分23秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;

int main(void){
    //默认以写的方式打开该文件，不存在则创建
    ofstream ofs("file.txt"/*,ios::out*/);
    ofs<<1234<<' '<<56.78<<' '<<"hello"<<endl;
    ofs.close();//关闭文件
    
    ifstream ifs("file.txt");
    int i;
    double d;
    string s;
    ifs>>i>>d>>s;
    cout<<i<<','<<d<<','<<s<<endl;
    
    return 0;
}

