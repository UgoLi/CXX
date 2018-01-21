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
    //参数名和成员变量名一样，可以通过this指针区分
    User(const string& name,int age){
        this->name=name;
        this->age=age;
    }
    void print(void){
        cout<<name<<","<<age<<endl;
    }
private:
    string name;
    int age;
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



