#include<iostream>
using namespace std;

int main()
{
    int oldread,newread,units;
    float minamt,vat,amt,netamt;
    cout<<"ENTER OLDREADING :"<<endl;
    cin>>oldread;
    cout<<"ENTER NEWREADING :"<<endl;
    cin>>newread;
    cout<<"ENTER MINIMUM :"<<endl;
    cin>>minamt;
    units=newread-oldread;
    if(units<30)
    amt=units*3.50;
    else
    if(units<50)
    amt=(29*3.50)+(units-29)*4.25;
    else
    if(units<100)
    amt=(29*3.50)+(20*4.25)+(units-49)*5.25
    else
    amt=(29*3.50)+(20*4.25)+(50*5.25)+(units-99)*5.85;
    vat=12.5/100.0;
    netamt=(amt*vat)+minamt;
    cout<<"FINAL AMOUNT="<<netamt;
}