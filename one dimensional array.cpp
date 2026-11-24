#include<iostream>
using namespace std;
int main()
{
    int mark[5],n;
    cout<<"enter n value:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter mark["<<i<<"] position=";
        cin>>mark[i];
    }
    cout<<"array elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<mark[i]<<endl;
    }
}