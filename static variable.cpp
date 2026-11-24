#include<iostream>
using namespace std;
static int count=1;
void display();
int main()
{
    cout<<count<<endl;
    display();
    cout<<count<<endl;
}
void display()
{
    count++;
        cout<<"Inside Function="<<count<<endl;
}