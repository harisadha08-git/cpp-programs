#include<iostream>
using namespace std;
template <typename T>
class sample
{
    T value;
    public:
    void setvalue(T v)
    {
        value=v;
    }
    void display()
    {
        cout<<"the value:"<<value<<endl;
    }
};
int main()
{
    sample<int> obj1;
    obj1.setvalue(5);
    obj1.display();
    sample<char> obj2;
    obj2.setvalue('h');
    obj2.display();
    return 0;
}