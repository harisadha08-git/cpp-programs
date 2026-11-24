#include<iostream>
using namespace std;
int main()
{
    int n;
    int *ptr=nullptr;
    cout<<"enter n value:";
    cin>>n;
    int mark[n];
    ptr=mark;
    cout<<"enter marks:\n";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"array elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<"\t";
    }
    int max=*ptr;
    int min=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        max=*(ptr+i);
        else
        min=*(ptr+i);
    }
    cout<<"\nmax value is:"<<max<<endl;
    cout<<"minimun value is:"<<min<<endl;
    cout<<"ptr[2]="<<*(2+ptr)<<endl;
    cout<<"first value is:"<<*ptr;
}