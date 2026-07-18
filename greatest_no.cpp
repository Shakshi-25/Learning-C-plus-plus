#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,greatest;
    cout<<"Enter five numbers:";
    cin>>a>>b>>c>>d>>e;
    greatest=a;
    if(b>greatest)
    greatest=b;
    if(c>greatest)
    greatest=c;
    if(d>greatest)
    greatest=d;
    if(e>greatest)
    greatest=e;
    cout<<"Greatest Number=" <<greatest;
    return 0;
} 