/*************************************************************************
	> File Name: 08exception.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 14时25分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

class FileError{};
class MemoryError{};

void foo(void)throw(FileError,MemoryError,int){
    throw -1;
    throw MemoryError();
    throw FileError();
}

int main(void){
    try{
        foo();
    }catch(FileError& ex){
        cout<<"文件错误"<<endl;
        return -1;
    }catch(MemoryError& ex){
        cout<<"内存错误"<<endl;
        return -1;
    }catch(...){
        cout<<"其他错误"<<endl;
        return -1;
    }
}

