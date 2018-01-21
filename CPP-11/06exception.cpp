/*************************************************************************
	> File Name: 03error.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 11时03分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

class A{
public:
    A(void){cout<<"A::A()"<<endl;}
    ~A(void){cout<<"A::~A()"<<endl;}
};

//定义一个表示文件错误的异常类
class FileError{
public:
    FileError(const string& file,int line)
    :m_file(file),m_line(line){
    }
    void errprint(void){
        cout<<"记录出错位置:"<<m_file<<","<<m_line<<endl;
    }
private:
    string m_file;
    int m_line;
};

int func3(void){
    A a;
    FILE* fp=fopen("none.txt","r");
    if(!fp){
        //构建表示文件错误的匿名异常对象，再抛出
        throw FileError(__FILE__,__LINE__);
        //cout<<"文件打开失败"<<endl;
        //return -1;
    }
    //...
    fclose(fp);
    return 0;
}

int func2(){
    A a;
    func3();
    //if(func3()==-1){
    //    return -1;
    //}
    //...
    return 0;
}

int func1(void){
    A a;
    func2();
    //if(func2()==-1){
    //    return -1;
    //}
    //...
    return 0;
}

int main(void){
    try{
        func1();
    }
    catch(int ex){
        if(ex==-1){
            cout<<"文件打开失败"<<endl;
        }
    }
    catch(FileError& ex){
            ex.errprint();
            return -1;
        }
    func1();
    //if(func1()==-1){
    //    return -1;
    //}
    return 0;
}

