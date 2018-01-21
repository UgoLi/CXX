/*************************************************************************
	> File Name: 02array.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 09时43分11秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Array{
public:
    Array(size_t size)
        :m_data(new int[size]),m_size(size){}
    ~Array(void){
        delete[] m_data;
        m_data=NULL;
    }
    int& operator[](size_t i){
        cout<<"非常对象，返回左值"<<endl;
        return m_data[i];
    }
    int operator[](size_t i)const{
        cout<<"常对象，返回右值"<<endl;
        return m_data[i];
    }

private:
    int * m_data;//容器中第一个元素地址
    size_t m_size;//容器大小
};

int main(void){
    Array a(10);
    //a.operator[](0)
    a[0]=10;
    cout<<a[0]<<endl;;
}



