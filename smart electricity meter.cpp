#include<iostream>
using namespace std;
int main()
{
    string name,add;
    float units,bill;
    cout<<"enter your name:";
    getline(cin,name);
    cout<<"enter your address:";
    getline(cin,add);
    cout<<"enter used units:";
    cin>>units;
    if(units<=100)
    {
        bill=(units*2);
    }
    else if(units>100 && units<=250)
    {
        bill=(100*2) + ((units-100)*4);
    }
    else if(units>250)
    {
        bill=(100*2) + ((150)*4) + ((units-250)*6);
    }
    cout<<"\nName:"<<name;
    cout<<"\nAddress:"<<add;
    cout<<"\nYour bill amount is:"<<bill;
}