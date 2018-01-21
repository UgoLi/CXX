/*************************************************************************
	> File Name: salary_manage_system.cpp
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年09月05日 星期二 18时59分22秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<osColor.h>
using namespace std;


class Employee{//成员抽象类
public:
    Employee(const string& name,const string& id,int level)
        :m_name(name),m_id(id){
        switch(level){//职位和固定工资
            case 1:
                m_position="普通员工";
                m_base_salary=4500.00;
            break;
            case 2:
                m_position="技术员";
                m_base_salary=6500.00;  
            break;
            case 3:
                m_position="经理";
                m_base_salary=8500.00;
            break;
            case 4:
                m_position="销售员";
                m_base_salary=6500.00;
            break;
            case 5:
                m_position="技术经理";
                m_base_salary=10000.00;
            break;
            case 6:
                m_position="销售经理";
                m_base_salary=10000.00;
            break;
            default:break;
        }
    }
    virtual ~Employee(void){}
    void info_print(void){
        cout<<"==================员工信息=======================\n"
        "姓名:"<<m_name<<"\n"
        "工号:"<<m_id<<"\n"
        "职位:"<<m_position<<"\n"
        "基本工资:"<<m_base_salary<<endl;
    }
    void salary_print(void){
        salary_cal();
    }
protected:
    float salary_cal(void){
        float m_real_base_salary=base_salary_cal();
        float m_performance=performance_cal();
        float m_salary=m_real_base_salary+m_performance;
        cout<<PURPLE"==================薪资信息=======================\n";
        cout<<"基本工资:"<<m_real_base_salary<<endl;
        cout<<"绩效奖金:"<<m_performance<<endl;
        cout<<"到手薪资:"<<m_salary<<NONE<<endl;
        return m_salary;
    }
    float m_base_salary;//固定工资
private:
    float base_salary_cal(void){
        float m_real_base_salary;//实际固定工资
        float m_attendance_rata;//出勤率
        cout<<"================请完善薪资信息==================="<<endl;
        cout<<"姓名:"<<m_name<<",工号:"<<m_id<<",职位:"<<m_position<<",基本工资:"<<m_base_salary<<endl;
        cout<<"     请输入出勤天数:";
        float day;
        cin>>day;
        m_attendance_rata=day/23;
        m_real_base_salary=m_attendance_rata*m_base_salary;
        return m_real_base_salary;
    }
    virtual float performance_cal(void)=0;
    string m_name;//姓名
    string m_id;//工号
    string m_position;//职位
};

class Normal:virtual public Employee{
public:
    Normal(const string& name,const string& id)
    :Employee(name,id,1){}

protected:
    float performance_cal(void){
        m_allowance=m_base_salary*0.5;
        return m_allowance;
    }
private:
    float m_allowance;//津贴基数(元/月)
};


class Technician:virtual public Employee{
public:
    Technician(const string& name,const string& id)
    :Employee(name,id,2){
    }
protected:
    float performance_cal(void){
        float m_allowance;//津贴基数(元/时)
        int m_hour;//研发时间
        cout<<"输入下面提示信息以计算研发绩效:"<<endl;
        cout<<"     请输入研发津贴基数(元/时):";
        cin>>m_allowance;
        cout<<"     请输入研发时间(时/月):";
        cin>>m_hour;
        cout<<"     请输入研发进度因数(0.0~1.0):";
        cin>>m_progress;
        return m_allowance*m_hour*m_progress;
    }
private:
    float m_progress;//进度因数
};

class Manager:virtual public Employee{
public:
    Manager(const string& name,const string& id)
    :Employee(name,id,3){
    }
protected:
    float performance_cal(void){
        float m_mon_performance;//本月绩效
        float m_performance_m;//绩效奖金
        cout<<"输入下面提示信息以计算经理绩效:"<<endl;
        cout<<"     请输入本月绩效奖金:";
        cin>>m_mon_performance;
        cout<<"     请输入本月绩效因数:";
        cin>>m_coefficient;
        m_performance_m=m_mon_performance*m_coefficient;
        return m_performance_m;
    }
private:
    float m_coefficient;//绩效系数
};

class Saleman:virtual public Employee{
public:
    Saleman(const string& name,const string& id)
    :Employee(name,id,4){}

protected:
    float performance_cal(void){
        float m_saleroom;//销售额
        cout<<"输入下面提示信息以计算销售绩效:"<<endl;
        cout<<"     请输入本月销售额:";
        cin>>m_saleroom;
        cout<<"     请输入销售提成比率:";
        cin>>m_commission_rata;
        return m_saleroom*m_commission_rata;
    }
private:
    float m_commission_rata;//提成比率
};

class TecManager:public Technician,public Manager{
public:
    TecManager(const string& name,const string& id)
    :Employee(name,id,5),Technician(name,id),Manager(name,id){}

private:
    float performance_cal(void){
        float m_performance_tm=Technician::performance_cal()+Manager::performance_cal();
        return m_performance_tm;
    }
};

class SalManager:public Saleman,public Manager{
public:
    SalManager(const string& name,const string& id)
    :Employee(name,id,6),Saleman(name,id),Manager(name,id){}

private:

    float performance_cal(void){
        float m_performance_sm=Saleman::performance_cal()+Manager::performance_cal();
        return m_performance_sm;
    }
};


int main(void){
    string name="小李",id="jst2419";
    int level=5;
    Employee* p;
    cout<<"输入：姓名 工号 职位等级"<<endl;
    cout<<"姓名：";cin>>name;
    cout<<"工号：";cin>>id;
    cout<<"职位等级:";cin>>level;
    switch(level){
        case 1:
            p=new Normal(name,id);
        break;
        case 2:
            p=new Technician(name,id);
        break;
        case 3:
            p=new Manager(name,id);
        break;
        case 4:
            p=new Saleman(name,id);
        break;
        case 5:
            p=new TecManager(name,id);
        break;
        case 6:
            p=new SalManager(name,id);
        break;
        default:break;
    }
    cout<<RED;
    p->info_print();
    cout<<GREEN;
    p->salary_print();
    cout<<NONE;
    delete p;
    return 0;
}



