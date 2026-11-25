#include<iostream>
using namespace std;
class A
{
    public:
    void eat()
    {
        cout<<"morning breakfast"<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"single inheritance"<<endl;
    }
};
int main()
{
    B b;
    b.display();
    b.eat();
    return 0;
}