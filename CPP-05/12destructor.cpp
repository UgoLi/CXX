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
    Integer i(1234);
    i.print();//1234
    return 0;
}
