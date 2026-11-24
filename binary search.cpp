#include<iostream>
using namespace std;
int main()
{
    int N,number[10],search,start,end,mid;
    bool flag;
    cout<<"Enter N value"<<endl;
    cin>>N;
    cout<<"Enter number of element are"<<N<<endl;
    for(int i=0;i<N;i++)
        {
            cin>>number[i];
        }
    cout<<"Enter Search element"<<endl;
    cin>>search;
    start=0;
    end=N-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(number[mid]==search)
        {
            cout<<"element found at position "<<mid+1;
            return 0;
        }
        else if(number[mid]<search)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"element not foumd";
    return 0;
}
