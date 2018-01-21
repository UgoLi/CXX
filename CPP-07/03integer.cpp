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
    const Integer operator-(void)const{
        Integer res(-m_i);
        return res;
    }
    //自定义~表示乘方的效果
    friend const Integer operator~(const Integer& i){
        Integer res(i.m_i*i.m_i);
        return res;
    }
private:
    int m_i;
};

int main(void){
    Integer i(123);
    Integer j=-i;//Integer j=i.operator-();
    j.print();//-123
    
    j=~i;//j=::operator~(i);
    j.print();
    return 0;
}


