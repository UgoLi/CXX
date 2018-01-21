#include <iostream>
using namespace std;
//普通员工
class Employee{
public:
    Employee(const string& name,int id,int grade):
        m_name(name),m_id(id),m_grade(grade){}
    void printInfo(void){//打印员工信息
        printBasic();//员工公有信息
        printExtra();//员工特有信息
    }
    void paySalary(void){//计算和打印工资
        //基本工资+绩效工资
        double salary = calBasic() + calMerit();
        cout << "应得工资:" << salary << endl;
    }
protected:
    double m_attend;//出勤率
private:
    void printBasic(void){
        cout << "姓名:" << m_name << endl;
        cout << "工号:" << m_id << endl;
        cout << "职级:" << m_grade << endl;
    }
    virtual void printExtra(void){
        cout << "职位:普通员工" << endl;
    }
    double calBasic(void){
        cout << "输入出勤天数:";
        int attend;
        cin >> attend;
        //计算出勤率
        m_attend = attend / 23.0;
        m_basic = s_grades[m_grade-1]*m_attend;
        return m_basic;
    }
    virtual double calMerit(void){
        return m_basic/2;
    }
    string m_name;//姓名
    int m_id;//工号
    int m_grade;//职位级别
    double m_basic;//保存基本工资
    static double s_grades[8];//职级薪资表

};
double Employee::s_grades[8] = {
    3000,4000,5000,6000,7000,8000,9000,10000};
//技术员
class Technician:virtual public Employee{
public:
    Technician(const string& name,int id,int grade,
        double allow)
            :Employee(name,id,grade),m_allow(allow){}
protected:
    void printExtra(void){
        cout << "职位:研发工程师" << endl; 
        cout << "研发津贴:" << m_allow << endl;
    }
    double calMerit(void){
        cout << "输入进度因数:";
        double factor;
        cin >> factor;
        //小时数*进度因数*研发津贴
        return 8*23*m_attend*factor*m_allow;
    }
private:
    double m_allow;//研发津贴
};
//经理
class Manager:virtual public Employee{
public:
    Manager(const string& name,int id,int grade,
        double bonus):Employee(name,id,grade),
            m_bonus(bonus){}
protected:
    void printExtra(void){
        cout << "职位:经理" << endl;
        cout << "绩效奖金:" << m_bonus << endl;
    }
    double calMerit(void){
        cout << "输入绩效因数:";
        double factor;
        cin >> factor;
        //绩效奖金*绩效因数
        return m_bonus * factor;
    }
private:
    double m_bonus;//绩效奖金
}; 
//技术主管
class TechMngr:public Technician,public Manager{
public:
    TechMngr(const string& name,int id,int grade,
        double allow,double bonus):
            Technician(name,id,grade,allow),
            Manager(name,id,grade,bonus),
            Employee(name,id,grade){}
private:
    void printExtra(void){
        Technician::printExtra();
        Manager::printExtra();
    }
    double calMerit(void){
        return (Technician::calMerit() 
                    + Manager::calMerit())/2;
    }
};

int main(void)
{
/*    Employee  emp("张飞",10086,3);
    emp.printInfo();
    emp.paySalary();*/
/*    Technician tech("诸葛亮",10011,5,30);
    tech.printInfo();
    tech.paySalary();*/
/*    Manager manager("刘备",10010,6,5000);
    manager.printInfo();
    manager.paySalary();*/

    TechMngr techmngr("老王",10001,7,30,5000);
    techmngr.printInfo();
    techmngr.paySalary();
    return 0;
        
}








