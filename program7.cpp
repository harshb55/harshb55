#include<iostream>
using namespace std;

int main()
{
    float discount,amount,total,netdiscount,netamount;
    cout<<"ENTER THE AMOUNT :"<<endl;
    cin>>amount;
    if(amount>=1000)
    discount=8.0/100.0;
    netdiscount=discount*amount;
    netamount=netdiscount-amount;
    total=netamount;
    cout<<"AMOUNT="<<amount<<endl;
    cout<<"DISCOUNT="<<netdiscount<<endl;
    cout<<"TOTAL="<<total<<endl;

}