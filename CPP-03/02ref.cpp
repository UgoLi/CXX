/*************************************************************************
	> File Name: 02ref.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 10时15分12秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
struct Student{
    char name[1024];
    int age;
};
void print(const Student& s){
    cout<<s.name<<","<<s.age<<endl;
    //cout<<s.name<<","<<s.age++<<endl;//err read_only
}
int main(void){
    const Student student={"张飞",28};//右值
    //Student student={"张飞",28};//左右
    print(student);
    return 0;
}


