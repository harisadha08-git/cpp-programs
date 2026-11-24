#include<iostream>
using namespace std;
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"the cube of "<<n<<" is "<<cube(n);
    return 0;
}