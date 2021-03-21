#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"ENTER THE TWO NUMBER :"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"NUMBER AFTER SWAPPING :"<<a<<"  "<<b<<endl;
}