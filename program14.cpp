#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"ENTER THE THREE NUMBER :"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    if(a>c)
    cout<<"GREATEST NUMBER ="<<a<<endl;
    else
    cout<<"GRETEST NUMBER ="<<c<<endl;
    if(b>a&&b>c)
    cout<<"GREATEST NUMBER ="<<b<<endl;
    else
    cout<<"GREATEST NUMBER ="<<c<<endl;
}  