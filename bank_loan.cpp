#include<iostream>
using namespace std;
int main()
{
    int Income, EMI, CIBIL, Age, Occupation;
    cout << "Enter your monthly income: ";
    cin >> Income;
    cout << "Enter your monthly EMI: ";
    cin >> EMI;
    cout << "Enter your credit score: ";
    cin >> CIBIL;
    cout << "Enter your age: ";
    cin >> Age;
    cout << "Enter your occupation: ";
    cin >> Occupation;
    if(0.5 * Income >= EMI && CIBIL >= 700 && Age >= 21 && Age <= 60 && Occupation == 1)
    {
        cout << "You are eligible for a bank loan." << endl;
    }
    else
    {
        cout << "You are not eligible for a bank loan." << endl;
    }
    return 0;
}