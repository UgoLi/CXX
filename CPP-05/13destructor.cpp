/*************************************************************************
	> File Name: 13destructor.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 16时00分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    ~A(void){
        cout<<"A::~A()"<<endl;
    }
};

int main(void){
    do{
        A a;
        cout<<"test1"<<endl;
        A* pa=new A;
        delete pa;//delete调用-->pa->~A();
        pa=NULL;
        cout<<"test3"<<endl;
    }while(0);//}调用-->a.~A();
    /*'}'作用域终止运算符*/

    cout<<"test2"<<endl;
    return 0;
}

