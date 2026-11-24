#include<iostream>
using namespace std;
void swapvalue(float *,float *);
int main()
{
float weather[5]={72.4,67.3,34.1,23.2,12.4};
float *p=weather;
float sum=0;
cout<<"Weather Values are"<<endl;
for(int i=0;i<5;i++)
{
    cout<<*(p+i)<<endl;
    sum+=*(p+i);
}
float average=sum/5;
int AverageRound=static_cast<int>(average);
cout<<"sum="<<sum<<endl;
cout<<"Average="<<average<<endl;
cout<<"Rounded Average="<<AverageRound<<endl;

swapvalue(&weather[0],&weather[1]);
cout<<"Weather Values after swapping"<<endl;
for(int i=0;i<5;i++)
{
    cout<<*(p+i)<<endl;
}
return 0;
}

void  swapvalue(float *a,float *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}