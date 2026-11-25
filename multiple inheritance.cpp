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
class B
{
    public:
    void display()
    {
        cout<<"single inheritance"<<endl;
    }
};
class C:public A, public B
{
    public:
    void output()
    {
        cout<<"multiple inheritance";
    }
};
int main()
{
    C c;
    c.display();
    c.eat();
    c.output();
    return 0;
}