#include<iostream>
using namespace std;
string customer,product;
float amount,discount ,finalamount;
void readdetails()
{
    cout<<"enter customer name:";
    cin>>customer;
    cout<<"enter product name:";
    cin>>product;
    cout<<"enter product price:";
    cin>>amount;
}
void calculatediscount()
{
    if(amount >=1000&&amount<=5000)
    discount =amount*0.05;
    else if(amount>5000)
    discount =amount*0.10;
    else
    discount=0;
    finalamount=amount-discount;
}
void displaybill()
{
    cout<<"\n------ FINAL BILL ------";
    cout<<"\ncustomer name:"<<customer;
    cout<<"\nproduct name:"<<product;
    cout<<"\npurchase amount:Rs."<<amount;
    cout<<"\ndiscount:Rs."<<discount;
    cout<<"\nfinal amount:Rs."<<finalamount;
}
int main()
{
    readdetails();
    calculatediscount();
    displaybill();
    return 0;
}