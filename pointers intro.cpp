#include<iostream>
using namespace std;
int main()
{
    int number;
    int *p1,**p2;
    cout<<"enter a number:";
    cin>>number;
    p1=&number;
    p2=&p1;
    cout<<"number="<<number<<endl;
    cout<<"address of number="<<&number<<endl;
    cout<<"p1="<<p1<<endl;
    cout<<"address of p1="<<&p1<<endl;
    cout<<"value of p1="<<*p1<<endl;
    cout<<"p2="<<p2<<endl;
    cout<<"address of p2="<<&p2<<endl;
    cout<<"value of p2="<<*p2<<endl;
    cout<<"value of address of p2="<<**p2;
}