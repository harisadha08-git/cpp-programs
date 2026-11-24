#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50],target[50];
    cout<<"enter source value:";
    cin>>str;
    cout<<"enter target value:";
    cin>>target;
    if(strcmp(str,target)==0)
    {
        cout<<"both are same\n";
    }
    else if(strcmp(str,target)>0)
    {
        cout<<"source is greater than target\n";
    }
    else
    {
        cout<<"source is less than target\n";
    }
}