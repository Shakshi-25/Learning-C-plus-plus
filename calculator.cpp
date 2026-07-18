#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char operation;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>operation;
    switch(operation)
    {
        case '+':
            cout<<"Addition of "<<a<<" and "<<b<<" is equal to "<<a + b<<endl;
            break;
        case '-':
            cout<<"Subtraction of "<<a<<" and "<<b<<" is equal to "<<a - b<<endl;
            break;
        case '*':
            cout<<"Multiplication of "<<a<<" and "<<b<<" is equal to "<<a * b<<endl;
            break;
        case '/':
            cout<<"Division of "<<a<<" and "<<b<<" is equal to "<<a / b<<endl;
            break;
        default:
            cout<<"Invalid operator!";
            break;
    }
    return 0;
}