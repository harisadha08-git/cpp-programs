#include<iostream>
using namespace std;
int main(){
double price,subtotal,discount,gst,total;
int quantity,member;
cout<<"Enter price: ";
cin>>price;
cout<<"Enter quantity: ";
cin>>quantity;
cout<<"Member (1-Yes, 0-No): ";
cin>>member;
if(price<0 || quantity<0 || (member!=0 && member!=1)){
cout<<"Invalid input";
return 0;
}
subtotal=price*quantity;
discount=(subtotal>=2000 || member==1)?subtotal*0.10:0;
gst=(subtotal-discount)*0.05;
bool eligible=(subtotal-discount>=1000 && quantity>0);
double delivery=eligible?0:50;
total=subtotal-discount+gst+delivery;
cout<<"Subtotal: Rs. "<<subtotal<<endl;
cout<<"Discount: Rs. "<<discount<<endl;
cout<<"GST: Rs. "<<gst<<endl;
cout<<"Delivery: Rs. "<<delivery<<endl;
cout<<"Total Bill: Rs. "<<total<<endl;
return 0;
}