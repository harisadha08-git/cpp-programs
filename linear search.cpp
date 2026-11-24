#include<iostream>
using namespace std;
int main()
{
    bool flag=0;
    int e,lists[10]={2,4,6,45,65,72,23,54,76,44};
    cout<<"enter the seacrh element:";
    cin>>e;
    for(int i=0;i<10;i++)
    {
        if(e==lists[i])
        flag=1;
    }
    if(flag==1)
    cout<<"the element is found";
    else
    cout<<"the element is not found";
}