#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"ENTER THE NUMBER :"<<endl;
    cin>>a;
    if(a<=9)
    cout<<"IT IS SINGLE DIGIT NUMBER:"<<endl;
    else
    if(a<=99)
    cout<<"THE NUMBER IS DOUBLE DIGIT"<<endl;
    if(a>=100)
    cout<<"THE NUMBER IS GREATER THAN TWO DIGIT:"<<endl;
}