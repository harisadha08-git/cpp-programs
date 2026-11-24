#include<iostream>
using namespace std;
int main(){
int n,level;
cout<<"Enter number of patients: ";
cin>>n;
if(n<=0){
cout<<"Invalid number of patients";
return 0;
}
for(int i=1;i<=n;i++){
cout<<"Enter severity (1-Critical, 2-High, 3-Medium, 4-Low): ";
cin>>level;
if(level<1||level>4){
cout<<"Invalid severity"<<endl;
i--;
continue;
}
switch(level){
case 1:
cout<<"Critical - First Priority"<<endl;
break;
case 2:
cout<<"High - Second Priority"<<endl;
break;
case 3:
cout<<"Medium - Third Priority"<<endl;
break;
case 4:
cout<<"Low - Fourth Priority"<<endl;
break;
}
}
return 0;
}