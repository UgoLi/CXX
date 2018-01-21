/*************************************************************************
	> File Name: 03cast.cpp(类型转换)
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 10时02分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Integer{
public:
    Integer(int data):m_data(data){
        cout<<"类型转换构造函数"<<endl;
    }
    //Integer--》int
    explicit operator int(void)const{
        cout<<"类型转换构造函数"<<endl;
        return m_data;
    }
private:
    int m_data;
};

int main(void){
    Integer i1(100);//构造函数
    i1=200;//构造函数
    cout<<int(i1)<<endl;//操作符函数
    int i2=int(i1);
    cout<<i2<<endl;
    return 0;
}


