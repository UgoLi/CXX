/*************************************************************************
	> File Name: 10constfunc.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 14时34分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    //void func1(const A* this);
    void func1(void)const{
        cout<<"常函数"<<endl;
    }
    //void func2(A* this);
    void func2(void){
        cout<<"非 常函数"<<endl;
    }
};
int main(void){
    A a;//非 常对象
    a.func1();//func1(&a),&a~A*
    a.func2();//非 常对象即可调常函数也可以调非 常函数

    const A a2=a;//常对象
    a2.func1();//func1(&a2),&a2~cosnt A*
    //a2.func2();//不调用非 常函数

    return 0;
}


