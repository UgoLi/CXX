/*************************************************************************
	> File Name: 05poly.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月06日 星期三 14时07分53秒
 ************************************************************************/

//简单工厂方法模式
#include<iostream>
using namespace std;

class PDFarser{
public:
    void prase(const char* pdfFile){
        cout<<"解析出一个矩形"<<endl;
        onRect();
        cout<<"解析出一个圆形"<<endl;
        onCircle();
        cout<<"解析出一行文本"<<endl;
        onText();
        cout<<"解析出一副图片"<<endl;
        onImage();
    }
private:
    virtual void onRect(void)=0;
    virtual void onCircle(void)=0;
    virtual void onText(void)=0;
    virtual void onImage(void)=0;
};

class PDFRender:public PDFarser{
private:
    void onRect(void){
        cout<<"显示一个矩形"<<endl;
    }
    void onCircle(void){
        cout<<"显示一个圆形"<<endl;
    }
    void onText(void){
        cout<<"显示一行文本"<<endl;
    }
    void onImage(void){
        cout<<"显示一组图片"<<endl;
    }
};

int main(void){
    PDFRender render;
    render.prase("something.pdf");
    return 0;
}




