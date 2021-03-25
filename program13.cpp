#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"ENTER THE MARKS"<<endl;
    cin>>marks;
    if(marks>=85&&marks<=100)
    cout<<"DISTINCTION WITH "<<marks<<endl;
    else
    if(marks>=60)
    cout<<"FIRST CLASS WITH "<<marks<<endl;
    else
    if(marks>=50)
    cout<<"SECOND CLASS WITH"<<marks<<endl;
    else
    if(marks>=35)
    cout<<"PASS WITH "<<marks<<endl;
    else
    if(marks<=34)
    cout<<"FAIL WITH "<<marks<<endl;
}