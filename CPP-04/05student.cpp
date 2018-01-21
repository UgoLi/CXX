/*************************************************************************
	> File Name: 05student.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 14时56分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Student{
public:
    Student(const string& name,int age,int no=0){
        m_name=name;
        m_age=age;
        m_no=no;
    }
    Student(const string& name){
        m_name=name;
        m_age=0;
        m_no=0;
    }
    void who(void){
        cout<<"我叫"<<m_name<<",今年"<<m_age<<"岁,学号"<<m_no<<endl;
    }
private:
    string m_name;
    int m_age;
    int m_no;
};
int main(void){

    Student s1("悟空",2000,10001);
    s1.who();
    
    Student s2("关羽");
    s2.who();

    Student s3("张飞",25);
    s3.who();

    return 0;
}



