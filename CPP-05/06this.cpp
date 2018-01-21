/*************************************************************************
	> File Name: 06this.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 11时16分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

class User{
public:
    User(const string& name,int age)
    :m_name(name),m_age(age){
        cout<<"构造函数="<<this<<endl;
    }
    void print(void){
        cout<<m_name<<","<<m_age<<endl;
        cout<<this->m_name<<","<<this->m_age<<endl;
        cout<<"this "<<this<<endl;
    }/*print编译后会变成如下代码
    void print(User* this){
        cout<<this->m_name<<","<<this->m_age<<endl;
    }
    */
private:
    string m_name;
    int m_age;
};

int main(void){
    User u1("刘星",20);
    u1.print();//u1.print(&u1);
    cout<<"&u1  "<<&u1<<endl;
    User u2("杜康",21);
    u2.print();//u2.print(&u2);
    cout<<"&u2  "<<&u2<<endl;
    return 0;
}



