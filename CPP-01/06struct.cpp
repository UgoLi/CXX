/*************************************************************************
	> File Name: 06struct.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 15时12分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct Student{
    char name[20];
    int age;
    //成员函数
    void who(void){
        cout<<"我叫 "<<name<<",今年"<<age<<"岁"<<endl;
    }
};

int main(void){
    /*struct*/ Student s={"张飞",28};
    s.who();
    return 0;
}

















