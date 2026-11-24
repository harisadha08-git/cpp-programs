#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"the factorial is:"<<fact(n);
}
int fact(int x)
{
    if(x==1)
    return 1;
    else
    return x*fact(x-1);
}