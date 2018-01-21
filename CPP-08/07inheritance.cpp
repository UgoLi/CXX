/*************************************************************************
	> File Name: 07inheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 17时09分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    int m_public;
};
class Derived:protected Base{};

int main(void){
    Derived d;
    //Base* pb=static_cast<Base*>(&d);
    Base* ppb=(Base*)&d;//强制类型转换，可能没有语法合理性检测
    return 0;
}








