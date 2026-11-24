#include<iostream>
using namespace std;
void bsort(int arr[],int n);
int main()
{
    int lists[10],n;
    cout<<"enter number of elements in array:";
    cin>>n;
    cout<<"enter the values for the list:\n";
    for(int i=0;i<n;i++)
    {
        cin>>lists[i];
    }
    cout<<"the array before sorting is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<lists[i]<<"\t";
    }
    bsort(lists,n);
    cout<<"\narray elements after sorting:\n";
    for(int i=0;i<n;i++)
    {
        cout<<lists[i]<<"\t";
    }
    return 0;
}
void bsort(int arr[],int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            swapped=false;
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)
        break;
    }
}