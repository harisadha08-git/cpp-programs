#include<iostream>
using namespace std;
int main()
{
	int num,temp,rev,rem;
	cout<<"enter a number:";
	cin>>num;
	temp=num;
	rev=0;
	while(num!=0)
	{
		rem=num%10;
		num/=10;
		rev=(rev*10)+rem;
	}
	cout<<"the reverse of the digits is "<<rev;
	if(temp==rev)
	cout<<"\nit is a palindrome";
	else
	cout<<"\nit is not a palindrome";
	return 0;
}
