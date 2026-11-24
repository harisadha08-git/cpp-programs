/*
#include<iostream>
using namespace std;
class rectangle
{
    public:
        int length,breadth;
    public:
    rectangle()  // Default Constructor
    {
    length=0;
    breadth=0;
    }
   
    rectangle(int l,int b)// Parametrised Constructor
    {
        length=l;
        breadth=b;
    }
    void display()
    {
        cout<<"Area="<<length*breadth<<endl;
    }
};
int main()
{
    rectangle  r1,r2(12,6);
    rectangle r3(r2);   //copy constructor
    rectangle r4=r1;    //copy constructor
    r1.display();
    r2.display();
    r3.display();
    r4.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
class rectangle
{
    public:
        int length,breadth;
    public:
    rectangle()  // Default Constructor
    {
    length=0;
    breadth=0;
    }
   
    rectangle(int l,int b)// Parametrised Constructor
    {
        length=l;
        breadth=b;
    }
    rectangle(const rectangle &obj)  // Copy Constructors
    {
        length=obj.length;
        breadth=obj.breadth;
    }
    void display()
    {
        cout<<"Area="<<length*breadth<<endl;
    }
};
int main()
{
    rectangle  r1,r2(12,6);
    rectangle r3(r2);//copy constructor
    rectangle r4=r1;//copy constructor
    r1.display();
    r2.display();
    r3.display();
    r4.display();
}