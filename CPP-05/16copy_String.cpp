/*************************************************************************
	> File Name: 16copy_String.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月30日 星期三 17时16分32秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class String{
public:
    //一、构造函数
    String(const char* str)
        :m_str(strcpy(new char[strlen(str)+1],str))
        {}
    //二、深拷贝构造函数
    String(const String& s_str)
        :m_str(strcpy(new char[strlen(s_str.m_str)+1],s_str.m_str))
        {}
    //三、析构函数
    ~String(void){
        delete[] m_str;
        m_str=NULL;
    }
    const char* c_str(void)const{
        return m_str;
    }
    void print(void){
        cout<<m_str<<endl;
    }
    //四、深拷贝赋值函数
    //C++编译器会为类提供缺省的拷贝赋值操作符函数，用于实现
    //两个对象的赋值操作
    //s2 = s3;-->s2.operator=(s3);
    String& operator=(const String& that){
        if(this!=&that){//1、防止自赋值
            //2、分配新内存，3、赋值
            char* tmp=strcpy(new char[strlen(that.m_str)+1],that.m_str);
            //分配新内存成功后释放旧内存
            //4、释放旧内存
            delete[] m_str;
            m_str=tmp;
            
            /*
            String temp(that);
            swap(m_str,temp.m_str);*/
        }
        return *this;//5、返回自引用
    }

private:
    char* m_str;
};

int main(void){
    String s1("hello world");
    String s2=s1;//拷贝构造
    String s3("hello C++");
   

    s2.operator=(s3);//operator=() 类缺省成员函数，
    //s2=s3;//拷贝赋值
    
    cout<<"s1="<<s1.c_str()<<","<<(void*)s1.c_str()<<endl;
    cout<<"s2="<<s2.c_str()<<","<<(void*)s2.c_str()<<endl;
    cout<<"s3="<<s3.c_str()<<","<<(void*)s3.c_str()<<endl;
    return 0;
}


