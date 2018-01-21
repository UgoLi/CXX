/*************************************************************************
	> File Name: 04inheritance.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月04日 星期一 11时27分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Human{
public:
    Human(const string& name,int age,int id):m_name(name),m_age(age),m_id(id){}
    void eat(const string& food)const{
        cout<<"我在吃："<<food<<endl;
    }
    void sleep(int hour)const{
        cout<<"我睡了 "<<hour<<" 小时"<<endl;
    }
protected://保护的成员可以在类的内部和子类中访问
    string m_name;
    int m_age;
    void get_id(void)const{//私有成员m_id在子类中不可见，可以通过公有或者保护借口函数访问
        cout<<"身份证："<<m_id<<endl;
    }
private:
    int m_id;
};



class Student:public Human{
public:
    //Humen(name,age):说明基类中继承过来成员的初始化方式
    Student(const string& name,int age,int id,int no):Human(name,age,id),m_no(no){}
    void learn(const string& course)const{
        cout<<"我在学 "<<course<<endl;
    }
    void who(void){
        cout<<"我叫"<<m_name<<",今年"<<m_age<<"岁，学号为"<<m_no<<endl;
        get_id();
    }
private:
    int m_no;
    
};
class Teacher:public Human{
public:
    Teacher(const string& name,int age,int id,double salary):Human(name,age,id),m_salary(salary){}
    void teach(const string& course)const{
        cout<<"我在讲"<<course<<endl;
    }
    void who(void)const{
        cout<<"我叫"<<m_name<<",今年"<<m_age<<"岁，工资为"<<m_salary<<endl;
        get_id();
    }
private:
    double m_salary;
};

int main(void){
    Student s("guanyu",20,341124,10011);
    
    cout<<sizeof(s)<<endl;
    
    s.who();
    s.learn("孙武兵法");
    s.eat("莱州拉面");
    s.sleep(16);
    Teacher t("wukong",20,341124,8000.5);
    t.who();
    t.teach("电脑编程");
    t.eat("桃子");
    t.sleep(8);

    //Student*-->Human*:向上造型
    Human* ph=&s;
    Human& rh=s;
    ph->eat("水果");
    ph->sleep(6);
    rh.eat("水果");
    rh.sleep(6);

    //Human*-->Student*:向下造型
    Student* ps=static_cast<Student*>(ph);
    Student* pss=(Student*)(ph);

    Human h("林黛玉",19,341124);
    //Human*-->Student*:向下造型，不安全
    Student* ps1=(Student*)&h;
    ps1->who();
    
    Student sa=*(Student*)&h;
    
    return 0;
}


