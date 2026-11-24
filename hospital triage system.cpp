#include<iostream>
using namespace std;
int main()
{
    string name,dis,em,mi;
    int ch,acc,n;
    cout<<"enter patient's name:";
    cin>>name;
    cout<<"\n1. disease\n2. accident";
    cout<<"\nyour choice:";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\nenter your disease:";
        cin>>dis;
        cout<<"\n1. mild\n2. emergency";
        cout<<"\nenter your choice:";
        cin>>acc;
    }
    else
    {
        cout<<"\n1. mild injury\n2. emergency";
        cout<<"\nenter your choice:";
        cin>>acc;
    }
    switch(acc)
    {
        case 1:
        cout<<"information sent, go to general ward";
        break;
        case 2:
        cout<<"information sent, go to emergency ward";
        break;
        default:
        cout<<"invalid choice";
    }
}