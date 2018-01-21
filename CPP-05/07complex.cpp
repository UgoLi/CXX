/*************************************************************************
	> File Name: 07complex.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月01日 星期五 17时10分57秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;

class A{
public:
    A(void){
        cout<<"A::A()"<<endl;
    }
    ~A(void){
        cout<<"A::~A()"<<endl;
    }
    static void* operator new(size_t size){
        cout<<"A::new"<<endl;
        void* pv=malloc(size);
        return pv;
    }
    static void operator delete(void* pv){
        cout<<"A::delete"<<endl;
        free(pv);
    }
};

int main(void){
    //1)A* pa=(void*)A::operator new(sizeof(A));
    //2)p->A::A();
    A* pa=new A;

    //1)pa->A::~A();
    //2)A::operator delete(pa);
    delete pa;
    return 0;
}








