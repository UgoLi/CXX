/*************************************************************************
	> File Name: 04lazy.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 14时34分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

//单例模式：懒汉式
class A{
public:
    //获取单例对象
    static A& getInstance(void){
        if(!s_instance)
            s_instance=new A(123);
        ++s_count;
        return *s_instance;
    }
    //最后一个人不在使用单例时才能销毁
    void release(void){
        if(/*s_instance*/--s_count==0){
            delete s_instance;
            s_instance=NULL;
        }
    }
    void print(void)const{
        cout<<m_data<<endl;
    }
private:
    //私有化构造函数
    A(int data=0):m_data(data){};
    A(const A& that);

    int m_data;
    //内部维护唯一对象
    static A* s_instance;
    static int s_count;//记录使用单例对象的人数
};
A* A::s_instance=NULL;
int A::s_count=0;

int main(void){
     
    //A a(100);
    //A* pa=new a(100);
    
    A& a1=A::getInstance();
    A& a2=A::getInstance();
    
    a1.print();
    a2.print();

    cout<<"a1="<<&a1<<endl;
    cout<<"a2="<<&a2<<endl;
    
    a1.release();
    a2.print();
    a2.release();
    a2.print();    
    return 0;
}


