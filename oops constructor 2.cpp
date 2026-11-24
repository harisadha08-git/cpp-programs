#include<iostream>
#include<string>
using namespace std;
class employee
{
    public:
    int empid;
    string name, desig;
    float salary;
    public:
    employee()
    {
        empid=0;
        name="";
        desig="";
        salary=0;
    }
    employee(int id, string n, string des, float sal)
    {
        empid=id;
        name=n;
        desig=des;
        salary=sal;
    }
    employee(const employee &obj)
    {
        empid=obj.empid;
        name=obj.name;
        desig=obj.desig;
        salary=obj.salary;
    }
    ~employee()
    {
        cout<<"Destructor called"<<endl;
    }
    void display();
};
void employee::display()
{
    cout<<"empid: "<<empid;
    cout<<"\nemp name: "<<name;
    cout<<"\ndesignation: "<<desig;
    cout<<"\nsalary: "<<salary;
}
int main()
{
    employee e1,e2(11,"surya","tester",80000);
    employee e3(e2);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}