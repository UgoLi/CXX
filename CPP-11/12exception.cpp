/*************************************************************************
	> File Name: 12exception.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 16时18分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
public:
    void func(void){throw -1;}
    ~A(void){
        try{
            throw -2;
        }catch(int ex){
            cout<<"错误码:"<<ex<<endl;
        }
    }
};
int main(void){
    A a;
    try{
        a.func();
    }catch(int ex){
        cout<<"错误码:"<<ex<<endl;
        return -1;
    }
}



