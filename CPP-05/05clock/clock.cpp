/*************************************************************************
	> File Name: clock.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 11时58分21秒
 ************************************************************************/
#include"clock.h"
#include<printf_color.h>

void Clock::run(void){
    time_t real;
    time_t sum;
    tm* local;
    tm* timer;
    while(1){
        if(-1==time(&real)){
            perror("time");
        };
        local = localtime(&real);
        m_hour=local->tm_hour;
        m_min=local->tm_min;
        m_sec=local->tm_sec;
        printf("\r%02d:%02d:%02d",m_hour,m_min,m_sec);
        fflush(stdout);
        sum=real-start;
        timer = localtime(&sum);
        m_hour=timer->tm_hour;
        m_min=timer->tm_min;
        m_sec=timer->tm_sec;
        printf("\n%02d:%02d:%02d",m_hour,m_min,m_sec);
        fflush(stdout);
        MOVEUP(1);
        sleep(1);
    }
}




