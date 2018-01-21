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
    void who(void){
        cout<<"我叫"<<m_name<<endl;
    }
    string m_name;
};


int main(void){
    Student s1("张飞");
    Student* s2=new Student("赵云");
    
    void(Student::*pwho)(void)=&Student::who;//绝对地址
    
    (s1.*pwho)();
    (s2->*pwho)();

    return 0;
}
    

