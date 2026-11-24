#include<iostream>
#include<string>
using namespace std;
struct patient
{
    int pid;
    string name , disease;
    float amount;
};
void getdetails(struct patient *);
void displaydetails(const struct patient *);
int main()
{
    patient *p=new patient;
    if(p==nullptr)
    {
        cout<<"memory not allocated"<<endl;
        return 1;
    }
    getdetails(p);
    displaydetails(p);
    delete p;
    p=nullptr;
    cout<<"the memory successfully deallocated"<<endl;
    return 0;
}
void getdetails(patient *p)
{
    cout<<"enter patient details:"<<endl;
    cout<<"enter patient id:"<<endl;
    cin>>p->pid;
    cout<<"enter name and disease:"<<endl;
    cin>>p->name>>p->disease;
    cout<<"enter amount:"<<endl;
    cin>>p->amount;
}
void displaydetails(const patient *p)
{
    cout<<"patient informations"<<endl;
    cout<<"id:"<<p->pid<<endl;
    cout<<"name:"<<p->name<<endl;
    cout<<"disease:"<<p->disease<<endl;
    cout<<"amount:"<<p->amount<<endl;
}