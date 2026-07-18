#include<iostream>
using namespace std;
int main()
{
    int Income=500000;
    int EMI=250000;
    int CIBIL=750;
    int Age=25;
    int Occupation=1; // Assuming Occupation is represented as an integer where 1 = Salaried, 2 = Self-employed, etc.
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
