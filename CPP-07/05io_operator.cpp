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
    
    friend ostream& operator<<
        (ostream& os,const Complex& c){
            os<<c.m_r<<'+'<<c.m_i<<'i';
            return os;
    };
    friend istream& operator>>(istream& is,Complex& c){
        is>>c.m_r>>c.m_i;
        return is;
    }
private:
    int m_r;//实部
    int m_i;//虚部
};


int main(void){
    Complex c1(1,2);
    Complex c2(3,4);
    cout<<c1<<endl;
    cout<<c1<<','<<c2<<endl;
    
    cout<<"请输入一个复数的实部和虚部："<<endl;
    cin>> c1;
    cout<<c1<<endl;

    return 0;
}




