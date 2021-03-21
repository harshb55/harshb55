#include<iostream>
using namespace std;

int main()
{
    int years,months,days,totaldays;
    cout<<"ENTER THE TOTAL NUMBER OF DAYS :"<<endl;
    cin>>totaldays;
    years=totaldays/365;
    totaldays=totaldays%365;
    months=totaldays/30;
    days=totaldays%30;
    cout<<"the number of years :"<<years<<endl;
    cout<<"number of months :"<<months<<endl;
    cout<<"number of days :"<<days<<endl;
}