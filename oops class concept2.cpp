#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b;
    public:
    void getdata();
    void display();
};
int main()
{
    rectangle r;
    r.getdata();
    r.display();
    return 0;
}
void rectangle::getdata()
{
    cout<<"enter length and breadth:";
    cin>>l>>b;
}
void rectangle::display()
{
    cout<<"area is: "<<l*b;
}