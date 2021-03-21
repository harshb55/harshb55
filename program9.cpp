#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"ENTER THE ALPHABET :"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    cout<<"IT IS LOWERCASE"<<endl;
    if(ch>='A'&&ch<='Z')
    cout<<"IT IS UPPERCASE"<<endl;
}