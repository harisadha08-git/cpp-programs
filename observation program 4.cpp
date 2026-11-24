#include<iostream>
using namespace std;

double fare(int km){
return km*2.0;
}

void booking(int &seats,int &seat){
if(seats>0){
seat=11-seats+100;
seats--;
}else{
seat=-1;
}
}

void update(int &age){
cout<<"Enter updated age: ";
cin>>age;
}

int main(){
int age,km,seats=10,seat;
double amount;
cout<<"Enter age: ";
cin>>age;
cout<<"Enter distance: ";
cin>>km;
if(age<0 || km<=0){
cout<<"Invalid input";
return 0;
}
amount=fare(km);
booking(seats,seat);
if(seat!=-1){
update(age);
cout<<"Seat Number: "<<seat<<endl;
cout<<"Updated Age: "<<age<<endl;
cout<<"Fare: Rs. "<<amount<<endl;
cout<<"Seats Available: "<<seats<<endl;
}else{
cout<<"Seats unavailable"<<endl;
}
return 0;
}