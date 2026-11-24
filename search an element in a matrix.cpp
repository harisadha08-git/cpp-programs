
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter value for n:";
    cin>>n;
    int a[n][n], search, found=0;

    cout<<"Enter matrix elements:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter search element: ";
    cin>>search;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==search)
            {
                cout<<"Product code found.\n";
                cout<<"Row: "<<i+1<<endl;
                cout<<"Column: "<<j+1<<endl;
                found=1;
                break;
            }
        }
        if(found==1)
            break;
    }

    if(found==0)
    {
        cout<<"Product code not found.";
    }

    return 0;
}
