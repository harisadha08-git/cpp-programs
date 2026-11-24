#include<iostream>
using namespace std;
int main(){
int units;
double bill=0;
const double R1=2.5,R2=4.0,R3=6.0;
cout<<"Enter units consumed: ";
cin>>units;
if(units<0){
cout<<"Invalid units";
return 0;
}
if(units<=100)
bill=units*R1;
else if(units<=200)
bill=100*R1+(units-100)*R2;
else
bill=100*R1+100*R2+(units-200)*R3;
cout<<"Units: "<<units<<endl;
cout<<"Electricity Bill: Rs. "<<bill<<endl;
return 0;
}