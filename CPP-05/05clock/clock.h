/*************************************************************************
	> File Name: clock.h
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 11时58分21秒
 ************************************************************************/

#ifndef __CLOCK_H
#define __CLOCK_H
#include<iostream>
#include<time.h>
#include<unistd.h>
#include<stdio.h>
using namespace std;
class Clock{
public:
    Clock(void):start(time(NULL)){}
    void run(void);
private:
    time_t start;
    int m_hour;
    int m_min;
    int m_sec;
};
#endif //__CLOCK_H



