/*************************************************************************
	> File Name: test.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 16时03分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

void func(void){
    cout<<"func"<<endl;
}

int main(void){
    void (*pfunc)(void);
    pfunc=&func;//pfunc内容为func的地址
    //pfunc=func;
    

    void (&rfunc)(void)=*pfunc;
    //*pfunc就是func的内容  *pfunc==func *pfunc的访问方式为void ()
    
    void (*&rfunc1)(void)=pfunc;
    //pfunc是func的地址 pfunc的访问方式为void (*)()

    void (&rfunc2)(void)=func;
    //func的内容为函数定义,访问方式为void ()
    
    /*调用函数rfunc-->*rfunc-->传参-->执行
    */
    
}
