/*************************************************************************
	> File Name: 09complex.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月31日 星期四 16时57分11秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex{
public:
    Complex(int r,int i):m_r(r),m_i(i){}
    void print(void){
        cout<<m_r<<'+'<<m_i<<'i'<<endl;
    }

    //c1+c2-->c1.operator+(c2)
    //1）修饰返回值，禁止对表达式赋值
    //2）常引用，支持常量型右操作数
    //3）常函数，支持常量型左操作数
    const Complex operator+(const Complex& c)const{
        Complex res(m_r+c.m_r,m_i+c.m_i);
        return res;
    }

private:
    int m_r;//实部
    int m_i;//虚部
};

int main(void){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.print();
    c2.print();
    
    //Complex c3=c1.operator+(c2);
    Complex c3=c1+c2;
    c3.print();//4+6i
    
    return 0;
}




