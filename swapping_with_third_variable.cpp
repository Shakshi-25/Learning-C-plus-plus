#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Before Swapping: a="<<a<<" b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After Swapping: a="<<a<<" b="<<b<<endl;
    return 0;
}