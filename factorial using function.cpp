#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	cout<<"the factorial of the number is "<<fact(n);
	return 0;
}
int fact(int x)
{
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
}
