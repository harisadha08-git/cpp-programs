#include<iostream>
using namespace std;
class base
{
    public:
    int x;
    double y=8.6;    
void add(int x,double y)
{
    cout<<x+y<<endl;
}
void add(int x)
{
    cout<<x<<endl;
}
void add(double y)
{
    cout<<y<<endl;
}
};
int main()
{
    base obj;
    obj.add(78);
    obj.add(9.4);
    obj.add(45,7.8);
    return 0;
}
