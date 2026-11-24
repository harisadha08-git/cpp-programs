#include<iostream>
using namespace std;
int main()
{
    int mark[]={10,20,30,40,50};
    int *p=mark;
    cout<<*p<<endl;
    cout<<*p+3<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<*p+3<<endl;
    cout<<++*p<<endl;
    cout<<*p-5;
}