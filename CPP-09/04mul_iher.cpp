/*************************************************************************
	> File Name: 04mul_iher.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 14时17分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Phone{//电话
public:
    Phone(const string& number):m_number(number){}
    void call(const string& number){
        cout<<m_number<<"拨打"<<number<<endl;
    }
private:
    string m_number;
};

class Player{   //播放器
public:
    Player(const string& media):m_media(media){}
    void play(const string& music){
        cout<<m_media<<"播放"<<music<<endl;
    }
private:
    string m_media;  
};

class Computer{
public:
    Computer(const string& os):m_os(os){}
    void run(const string& app){
        cout<<"在"<<m_os<<"系统上运行"<<app<<endl;
    }
private:
    string m_os;
};

class SmartPhone:public Phone,public Player,public Computer{
public:
    SmartPhone(const string& number,const string& media,const string os)
        :Phone(number),Player(media),Computer(os){}
};

int main(void){
    SmartPhone sp("12688888888","MP3","Android");
    sp.call("010-12345");
    sp.play("最炫小苹果");
    sp.run("Angry Bird");

    SmartPhone* p1=&sp;
    //自动做指针偏移计算，保证指针类型和指向的基类子对象一致
    Phone* p2=p1;
    Player* p3=p1;
    Computer* p4=p1;
    
   cout<<"p1="<<p1<<endl;   
   cout<<"p2="<<p2<<endl;   
   cout<<"p3="<<p3<<endl;   
   cout<<"p4="<<p4<<endl;   
    
    
    return 0;
}


