/*************************************************************************
	> File Name: 06comlex.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月01日 星期五 14时48分39秒
 ************************************************************************/

#include<iostream>
using namespace std;

class M33{
public:
    M33(void){//无参构造
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                m_a[i][j]=0;
    }
    explicit M33(int a[][3]){//单参构造
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                m_a[i][j]=a[i][j];
    }
    const M33 operator+(const M33& c)const{
        M33 tmp;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                tmp.m_a[i][j]=m_a[i][j]+c.m_a[i][j];
        return tmp;
    }
    const M33 operator-(const M33& c)const{
        M33 tmp;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                tmp.m_a[i][j]=m_a[i][j]-c.m_a[i][j];
        return tmp;
    }
    M33& operator-=(const M33& c){
        /*
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                m_a[i][j]=m_a[i][j]-c.m_a[i][j];
        */
        *this=*this-c;//复用
        return *this;
    }
    M33& operator+=(const M33& c){
        /*
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                m_a[i][j]=m_a[i][j]+c.m_a[i][j];
        */
        *this=*this+c;//复用operator+();
        return *this;
    }
    M33& operator++(void){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                ++m_a[i][j];
        return *this;
    }
    M33& operator--(void){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                --m_a[i][j];
        return *this;
    }
    const M33 operator++(int){
        M33 old=*this;
        /*
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                ++m_a[i][j];
        */
        ++*this;
        return old;
    }
    const M33 operator--(int){
        M33 old=*this;
        /*
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                --m_a[i][j];
        */
        --*this;
        return old;
    }
    const M33 operator-(void)const{
        //M33 tmp;//无参构造
        /*
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                tmp.m_a[i][j]=-m_a[i][j];
        */
        return M33()-*this;
    }
    friend ostream& operator<<(ostream& os,M33& c){ 
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
                os<<c.m_a[i][j]<<" ";
            os<<endl;
        }
        return os;
    }

private:
    int m_a[3][3];
};

int main(void){
    int a1[3][3]={1,2,3,4,5,6,7,8,9};
    int a2[3][3]={9,8,7,6,5,4,3,2,1};
    M33 m1(a1);
    M33 m2(a2);
    M33 m3=m1+m2;
    
    cout<<"m1:"<<endl;
    cout<<m1<<endl;
    cout<<"m2:"<<endl;
    cout<<m2<<endl;
    
    cout<<"+,m3=m1+m2"<<endl;
    cout<<m3<<endl;

    cout<<"后++,m3=m1++"<<endl;
    m3=m1++;
    cout<<m1<<endl;
    cout<<m3<<endl;

    cout<<"后--,m3=m1--"<<endl;
    m3=m1--;
    cout<<m1<<endl;
    cout<<m3<<endl;
    
    
    cout<<"前++,m3=++m1"<<endl;
    m3=++m1;
    cout<<m1<<endl;
    cout<<m3<<endl;
    
    cout<<"前--,m3=--m1"<<endl;
    m3=--m1;
    cout<<m1<<endl;
    cout<<m3<<endl;
    
    cout<<"取负m3=-m1"<<endl;
    m3-=m1;
    cout<<m3<<endl;

    cout<<"m3+=m1"<<endl;
    m3+=m1;
    cout<<m3<<endl;

    cout<<"m3-=m1"<<endl;
    m3=-m1;
    cout<<m3<<endl;


    return 0;
}
