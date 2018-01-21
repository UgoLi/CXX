/*************************************************************************
	> File Name: 07integer.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 16时05分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Integer{
public:
    Integer(void){
        cout<<"Integer::Integer(void)"<<endl;
        m_data=0;
        m_time=0;
    }
    //类型转换构造函数,explicit类型转换构造函数必须显示转换
    /*explicit*/ Integer(size_t arr){
        cout<<"Integer::Integer(int)"<<endl;
        m_data=*(int*)arr;
        m_time=*((int*)arr+1);
    }
    void print(void){
        cout<<m_data<<'\n'<<m_time<<endl;
    }
private:
    int m_data;
    int m_time;
};

int main(void){
    Integer i;//-->Integer::Integer(void);
    i.print();//0
   
    //隐式转换，代码可读性差
    //i=123;//-->Integer::Integer(int);
    //i.print();
    
    //推荐使用显示转换
    //i = (Integer)321;//C style
    int arr[2]={123,456}; 
    size_t ar=size_t(arr);
    i=ar;//C++ style
    i.print();
    
    return 0;
}


