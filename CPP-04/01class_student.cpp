/*************************************************************************
	> File Name: 01class_student.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年08月29日 星期二 09时37分26秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
public:
    //成员函数描述学生行为
    void eat(const string& food){
        cout<<"我吃"<<food<<endl;
    }
    void sleep(int hour){
        cout<<"我睡了"<<hour<<"小时"<<endl;
    }
    void learn(const string& course){
        cout<<"我在学"<<course<<endl;
    }
    void who(void){
        cout<<"我叫"<<m_name<<"，今年"
        <<m_age<<"岁，学号是"<<m_no<<endl;
    }
    //类中的私有成员在外部不能直接访问，但是可以提供一个公有的
    //成员函数间接访问，同时对非法数据加以限定控制业务逻辑的合
    //理性
    void setName(const string& name){
        if(name=="二"){
            cout<<"你才"<<name<<endl;
        }else{
            m_name=name;
        }
    }
    void setAge(int age){
        if(age<0){
            cout<<"无效年龄"<<endl;
        }else{
            m_age=age;
        }
    }
    void setNo(int no){
        if(no<1000)
            cout<<"无效学号"<<endl;
        else
            m_no=no;
    }
private:
    //成员变量描述学生属性
    string m_name;
    int m_age;
    int m_no;
};

int main(void){
    //创建对象，实例化对象
    Student zhangsan;
    /*zhangsan.m_name="zhangsan";
    zhangsan.m_age=28;
    zhangsan.m_no=10086;*/
    /*zhangsan.setName("zhangsan");
    zhangsan.setAge(28);
    zhangsan.setNo(10086);*/
    
    zhangsan.setName("二");
    zhangsan.setAge(-10);
    zhangsan.setNo(100);

    
    zhangsan.who();
    zhangsan.eat("兰州拉面");
    zhangsan.sleep(16);
    zhangsan.learn("c++编程");
    return 0;
}



