/*************************************************************************
	> File Name: 12destructor.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 15时13分11秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Integer{
public:
    Integer(int data=0):m_data(new int(data)){
        //m_data=new int(data);
    }

    
    Integer(const Integer& that)//浅拷贝：只拷贝指针变量的本身，而没拷贝
    //指针所指向的数据
    :m_data(that.m_data){}
    
   
    /*
    //Integer i2(i)
    //i2.m_data=new int(*i1.m_data);
    Integer(const Integer& that)
    :m_data(new int(*that.m_data)){
        //m_data = new int(*that.m_data);
    }
    */
    ~Integer(void){
        cout<<"析构函数"<<endl;
        delete m_data;
        m_data=NULL;
    }
    void print(void)const{
        cout<<*m_data<<endl;
    }
private:
    int* m_data;
};

int main(void){
    Integer i1(1234);
    i1.print();//1234
    
    Integer i2(i1);//拷贝构造
    i2.print();
    
    return 0;
}
