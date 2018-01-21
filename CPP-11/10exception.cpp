/*************************************************************************
	> File Name: 10exception.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 15时17分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

class FileError:public exception{
public:
    const char* what(void)const throw(){
        return "文件错误！";
    }
    ~FileError(void)throw(){}
};

int main(void){
    try{
        throw FileError();
        char* p=new char[0xffffffff];
    }catch(exception& ex){
        cout<<ex.what()<<endl;
        return -1;
    }
}


