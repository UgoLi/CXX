/*************************************************************************
	> File Name: main.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 11时58分21秒
 ************************************************************************/

#include"clock.h"
int main(void){
    Clock* cl=new Clock();
    cl->run();
    delete cl;
    cl=NULL;
    return 0;
}




