#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n;
    cout<<"enter a number limit:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<"\t";
    }
}
int fib(int n)
{
    if(n==1)
    return 1;
    if(n==0)
    return 0;

    return fib(n-1)+fib(n-2);
}