/*************************************************************************
	> File Name: clock.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 11时58分21秒
 ************************************************************************/
#include"clock.h"
void Clock::run(void){
    time_t t;
    tm* local;
    while(1){
        if(-1==time(&t)){
            perror("time");
        };
        local = localtime(&t);
        m_hour=local->tm_hour;
        m_min=local->tm_min;
        m_sec=local->tm_sec;
        printf("\r%02d:%02d:%02d",m_hour,m_min,m_sec);
        fflush(stdout);
        sleep(1);
    }
}




