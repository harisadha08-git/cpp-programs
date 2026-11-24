#include<iostream>
using namespace std;
int main()
{
    int n,tot,id,p,m;
    float avg;
    char grade;
    cout<<"enter the number of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        tot=0;
        p=1;
        cout<<"\nenter student id:";
        cin>>id;
        for(int j=1;j<=5;j++)
        {
            cout<<"\nenter "<<j<<" subject marks:";
            cin>>m;
            tot+=m;
            if(m<40)
            p=0;
        }
        avg=tot/5.0;
        if(avg>=90)
        grade='A';
        else if(avg>=75 && avg<=89)
        grade='B';
        else if(avg>=60 && avg<=74)
        grade='C';
        else if(avg>=40 && avg<=59)
        grade='D';
        else
        grade='F';
        cout<<"\nstudent id:"<<id;
        cout<<"\nyour total:"<<tot;
        cout<<"\nyour average:"<<avg;
        if(p==1)
        {
        cout<<"\nresult=pass";
        }
        else
        {
        cout<<"\nresult=fail";
        }
        cout<<"\nyour grade:"<<grade;
    }
}