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
    Student(const string& name,int age,int no){
        m_name=name;
        m_age=age;
        m_no=no;
        cout<<"初始化"<<endl;
    }
    
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
    //创建对象，实例化对象--
    Student s("张飞",28,10086);
    //s.Student("张飞",28,10086);//不能直接调用构造函数
    s.who();
    s.eat("兰州拉面");
    s.sleep(16);
    s.learn("c++编程");
    
    Student s2 =Student("赵云",24,10010);
    s2.who();
    
    //在栈区创建对象数组
    Student sa[3]=
    {
        Student("刘备",40,10087),
        Student("诸葛亮",25,10036),
        Student("马超",29,10055)            
    };
    sa[0].who();
    sa[1].who();
    sa[2].who();
   
    //在堆区创建单个对象
    Student* ps = new Student("caocao",45,12345);
    //(*ps).who();
    ps->who();
    delete ps;
    ps=NULL;
    
    //在堆区创建多个对象
    Student* parr = new Student[3]
    {
        Student("diaochan",19,10011),
        Student("panjinlian",30,1002),
        Student("lindaiyu",20,10033)
    };
    parr[0].who();
    parr[1].who();
    parr[2].who();
    
    
    delete[] parr;
    parr = NULL;
    return 0;
}



