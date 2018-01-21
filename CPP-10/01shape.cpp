/*************************************************************************
	> File Name: 01shape.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月06日 星期三 09时25分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Shape{
public:
    Shape(int x,int y):m_x(x),m_y(y){}
    virtual void draw(void){//虚函数的覆盖--》重写
        cout<<"图形:"<<m_x<<','<<m_y<<endl;
    }
protected:
    int m_x;
    int m_y;
};

class Rect:public Shape{
public:
    Rect(int x,int y,int h,int w):
        Shape(x,y),m_h(h),m_w(w){}
    void draw(void){
        cout<<"矩形:"<<m_x<<','<<m_y<<','<<m_h<<','<<m_w<<endl;
    }
private:
    int m_h;
    int m_w;
};

class Circle:public Shape{
public:
    Circle(int x,int y,int r):Shape(x,y),m_r(r){}
    void draw(void){
        cout<<"圆形:"<<m_x<<','<<m_y<<','<<m_r<<endl;
    }
private:
    int m_r;
};

void  render(Shape* shapes[]){
    for(int i;shapes[i];i++){
        shapes[i]->draw();
    }
}

int main(void){
    Shape* shapes[100]={NULL};
    shapes[0]=new Rect(1,2,3,4);
    shapes[1]=new Rect(5,6,7,8);
    shapes[2]=new Circle(6,6,10);
    shapes[3]=new Circle(7,7,11);
    shapes[4]=new Rect(3,4,5,6);
    shapes[5]=new Circle(8,8,12);
    render(shapes);
}



