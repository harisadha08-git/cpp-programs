#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a,b;
	cout<<"enter two values:";
	cin>>a>>b;
	cout<<"the sum is "<<add(a,b);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
