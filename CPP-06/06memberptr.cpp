/*************************************************************************
	> File Name: 06memberptr.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 16时07分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Student{
public:
    Student(const string& name):m_name(name){}
    string m_name;
};


int main(void){
    string Student::*pname=&Student::m_name;//相对 对象首地址位置
    Student s1("张飞");
    Student* s2=new Student("赵云");
    cout<<s1.*pname<<endl;
    cout<<s2->*pname<<endl;
    return 0;
}
    

