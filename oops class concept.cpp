#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    int rno;
    string name, dept;
    public:
    void getdata()
    {
        cout<<"enter student details\n";
        cout<<"enter rollno, name, department:"<<endl;
        cin>>rno>>name>>dept;
    }
    void display()
    {
        cout<<"\nrollno:"<<rno;
        cout<<"\nname:"<<name;
        cout<<"\ndepartment:"<<dept;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    s.rno=34;
    s.name="hari";
    s.dept="cse";
    s.display();
    return 0;
}