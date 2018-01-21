/*************************************************************************
	> File Name: 08this.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 11时46分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Counter{
public:
    Counter(int data=0):m_data(data){}
    Counter& add(void){
        ++m_data;
        //this指向调用对象，*this就是调用对象
        return *this;//自引用
    }
    void destroy(void){
        delete this;//自销毁
    }
    int m_data;
};


int main(void){
    Counter cn;
    cn.add().add().add();//级联调用
    cout<<cn.m_data<<endl;//3
    
    Counter* pcn=new Counter;
    //...
    //delete pcn;
    pcn->destroy();
    return 0;
}





