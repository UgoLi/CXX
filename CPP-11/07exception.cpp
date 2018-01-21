/*************************************************************************
	> File Name: 07exception.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月07日 星期四 14时09分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

class ErrorA{};
class ErrorB:public ErrorA{};

int main(void){
    try{
        //...
        //throw ErrorA();
        throw ErrorB();
    }catch(ErrorB& ex){
        cout<<"补货异常B"<<endl;
        return -1;
    }catch(ErrorA& ex){
        cout<<"捕获异常A"<<endl;
        return -1;
    }

    return 0;
}

