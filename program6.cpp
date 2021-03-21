#include<iostream>
using namespace std;

int main()
{
    int a,b,c,largest,seclargest,smallest;
    cout<<"ENTER THE THREE NUMBERS :"<<endl;
    cin>>a>>b>>c;
    largest=a;
    smallest=a;
    if(b>=largest)
    largest=b;
    if(c>=largest)
    largest=c;
    if(b<=smallest)
    smallest=b;
    if(c<=smallest)
    smallest=c;
    seclargest=(a+b+c)-(largest+smallest);
    cout<<"LARGEST NUMBER="<<largest<<endl;
    cout<<"SECOND LARGEST NUMBER ="<<seclargest<<endl;
    cout<<"SMALLEST NUMBER ="<<smallest<<endl;
}