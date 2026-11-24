#include<iostream>
using namespace std;
int fact();
int main()
{
	cout<<"the factorial of the num is "<<fact();
	return 0;
}
int fact()
{
	int a,b=1;
	cout<<"enter a numbers:";
	cin>>a;
	while(a>0)
	{
		b=b*a;
		a--;
	}
	return b;
}
