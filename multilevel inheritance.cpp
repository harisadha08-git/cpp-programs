#include<iostream>
using namespace std;
class vechile 
{
    public:
    vechile()
    {
        cout<<"this is vechile"<<endl;
    }
};
class flyingobject:public vechile
{
    public:
    flyingobject()
    {
        cout<<"it is flying"<<endl;
    }
};
class aeroplane:public flyingobject
{
    public:
    aeroplane()
    {
        cout<<"wings to fly"<<endl;
    }
};
int main()
{
    aeroplane a;
    return 0;
}