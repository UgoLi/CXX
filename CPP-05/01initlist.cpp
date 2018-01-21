/*************************************************************************
	> File Name: 01initlist.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 09时30分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Student{
public:
    //先把成员变量定义出来，再做赋值操作
    /*Student(const string& name,int age){
        m_name=name;
        m_age=age;                               
    }*/

    //成员变量定义，同时初始化
    Student(const string& name,int age)
    :m_name(name),m_age(age){}
    
    void who(void){
        cout<<m_name<<","<<m_age<<"岁"<<endl;
    }
private:
    string m_name;
    int m_age;
};

int main(void){
    Student s("zhangfei",28);
    s.who();
    return 0;
}








