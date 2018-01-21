/*************************************************************************
	> File Name: 17binarystream.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 17时25分06秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;

int main(void){
    ofstream ofs("last.txt");
    char wbuf[]="jianggl@tedu.cn";
    ofs.write(wbuf,sizeof(wbuf)-1);
    ofs.close();
    
    ifstream ifs("last.txt");
    char rbuf[100]={0};
    ifs.read(rbuf,sizeof(rbuf));
    cout<<"读到： "<<rbuf<<endl;
    ifs.close();
    return 0;
}


