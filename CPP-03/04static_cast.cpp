/*************************************************************************
	> File Name: 04static_cast.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月28日 星期一 14时26分05秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

int main(void){
    int* pi=NULL;
    //char c=(int)pi;//c style 32bit
    //char c=int(pi);//c++ style 32bit

    //char c=static_cast<int>(pi);//err
    void* pv=pi;
    pi=static_cast<int*>(pv);

}


