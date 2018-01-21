/*************************************************************************
	> File Name: 05overload.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月25日 星期五 11时03分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

//char->int:升级转换
void bar(int i){
    cout << "bar(1)" << endl;
}

//char->const char:常量转换
void bar(const char c){
    cout << "bar(2)" << endl;
}

//short->int:升级转换
void func(int i){
    cout << "func(1)" << endl;
}

//short->char:降级转换
void func(char c){
    cout << "func(2)" << endl;
}

//short->long long:过分升级转换
void func(long long l){
    cout << "func(3)" << endl;
}

//省略号匹配，优先级最低
void hum(int i,...){
    cout << "hum(1)" << endl;
}

//double->int:降级转换
void hum(int i,int j){
    cout << "hum(2)" << endl;
}
/*完全匹配-》常量匹配-》升级转换-》降级转换-》省略号匹配*/
int main(void){
    char c='A';
    bar(c);
    short s=10;
    func(s);
    int a=10;
    double b = 3.14;
    hum(s,b);
}




