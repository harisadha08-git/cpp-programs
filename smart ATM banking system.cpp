#include<iostream>
using namespace std;
int main()
{
    int n;
    float ib,dm,wm;
    cout<<"enter your initial account balance:";
    cin>>ib;
    do
    {
        cout<<"\n1. check balance\n2. deposit money\n3. withdraw money\n4. exit";
        cout<<"\nenter your choice:";
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"\nyour balance is "<<ib;
            break;
            case 2:
            cout<<"\nenter money you want to deposit:";
            cin>>dm;
            ib=ib+dm;
            cout<<"\nmoney deposited";
            cout<<"\nyour account balance is:"<<ib;
            break;
            case 3:
            cout<<"\nenter money you want to withdraw:";
            cin>>wm;
            if(ib<wm)
            {
                cout<<"\nyou are not have that sufficient amount";
                break;
            }
            else
            {
                ib=ib-wm;
                cout<<"\nmoney withdrew successfully";
                cout<<"\nyour account balance is:"<<ib;
                break;
            }
            case 4:
            cout<<"\nthank you!";
            break;
            default:
            cout<<"\ninvalid choice";
        }
    }while(n!=4);
}