/*************************************************************************
	> File Name: 09string.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月24日 星期四 17时10分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(void){
    string s = "hello";
    cout << s << endl;//"hello"
    
    s = "world";//字符串拷贝
    cout << s << endl;//"world"
    
    s = "hello "+s;//字符串连接
    cout << s << endl;//"hello world"
   
    if(s=="hello world"){
        cout << "相等" << endl;
    }else{
        cout << "不相等" << endl;
    }

    //获取某个字符
    s[0] = 'H';
    cout << s << endl;//Hello world
    
    cout << s.size() << endl;
    cout << s.length() << endl;
    cout << strlen(s.c_str()) << endl;

    return 0;
}


