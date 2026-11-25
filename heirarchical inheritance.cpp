#include<iostream>
using namespace std;
class base
{
    public:
        int x,y;
        void getdata()
        {
            cout<<"Enter x and y value:"<<endl;
            cin>>x>>y;
        }
};
class dervied1: public base
{
    public:
        void product()
        {
            cout<<"Product="<<x*y<<endl;
        }
};

class dervied2: public base
{
    public:
        void sum()
        {
            cout<<"Sum="<<x+y<<endl;
        }
};
int main()
{
    dervied1 obj1;
    dervied2 obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
}