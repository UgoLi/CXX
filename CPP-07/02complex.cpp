/*************************************************************************
	> File Name: 02complex.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月01日 星期四 10时03分11秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex{
public:
    Complex(int r,int i):m_r(r),m_i(i){}
    void print(void){
        cout<<m_r<<'+'<<m_i<<'i'<<endl;
    }
    Complex& operator+=(const Complex& c){
        m_r+=c.m_r;
        m_i+=c.m_i;
        return *this;
    }
    //友元函数可以直接定义到类的内部，
    //但本质还是全局函数，不属于类，也没有this指针
    friend Complex& operator-=(Complex& c1,const Complex& c2);
private:
    int m_r;//实部
    int m_i;//虚部
};

Complex& operator-=(Complex& c1,const Complex& c2){
    c1.m_r-=c2.m_r;
    c1.m_i-=c2.m_i;
    return c1;
}



int main(void){
    Complex c1(1,2);
    Complex c2(3,4);

    c1+=c2;//c1.operator+=(c2)
    c1.print();//4+6i
    
    c1-=c2;//::operator-=(c1,c2)
    c1.print();//1+2i

    return 0;
}




