/*************************************************************************
> File Name: 03integer.cpp
> Author:UgoLi 
> Mail: 2653920896@qq.com
> Created Time: 2017年09月01日 星期五 11时03分46秒
************************************************************************/

#include<iostream>
using namespace std;

class Integer{
    public:
    Integer(int i=0):m_i(i){}
    void print(void)const{
        cout<<m_i<<endl;
    }
    //前++(成员函数)
    Integer& operator++(void){
        ++m_i;
        return *this;
    }
    //前--(全局函数)
    friend Integer& operator--(Integer& i){
        --i.m_i;
        return i;
    }
    //后++(成员函数)
    const Integer operator++(int){
        Integer old=*this;
        ++m_i;
        return old;
    }
    //后--(全局函数)
    friend const Integer operator--(Integer& i,int){
        Integer old=i;
        --i.m_i;
        return old;
    }
    private:
    int m_i;
};

int main(void){
    Integer i(123);
    Integer j= ++i;//Integer j=i.operator++();

    i.print();//124
    j.print();//124

    j=++ ++ ++i;
    i.print();//127
    j.print();//127

    j=i++;
    i.print();//128
    j.print();//127
    //i++++++;//err

    j=--i;
    i.print();//127
    j.print();//127

    j=-- -- --i;
    i.print();//124
    j.print();//124

    j=i--;
    i.print();//123
    j.print();//124


    return 0;
}


