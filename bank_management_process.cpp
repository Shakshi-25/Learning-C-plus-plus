#include<iostream>
using namespace std;
int main()
{
    int account_number, withdraw_amount, deposit_amount;
    int account_balance = 405805;
    cout << "Enter account number: ";
    cin >> account_number;
    cout << "Initial account balance: " << account_balance << endl;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw_amount;
    cout << "Enter amount to deposit: ";
    cin >> deposit_amount;
    if (account_number > 0)
    {
        if (account_balance == 405805)
        {
            if (account_balance >= withdraw_amount)
            {
                account_balance -= withdraw_amount;
                cout << "Withdrawal successful. New balance: " << account_balance << endl;
            }
            else
            {
                cout << "Insufficient balance for withdrawal." << endl;
            }
            if (deposit_amount > 0)
            {
                account_balance += deposit_amount;
                cout << "Deposit successful. New balance: " << account_balance << endl;
            }
            else
            {
                cout << "Insufficient deposit amount." << endl;
            }
        }
        else
        {
            cout << "Invalid account balance." << endl;
            cout << "Please enter a valid account balance." << endl;
        }
    }
    else 
    {
        cout << "Invalid account number." << endl;
        cout << "Please enter a valid account number." << endl;
    }
    return 0;
}
