// 1. DOCUMENTATION
/*
  Create bank account that contain details of bank account holder
  -Name depositor
  -Account number
  -Deposit an amount
  -Withdraw an amount
  -Display name, account number and balance
*/
// TITLE :BANK DETAIL
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 29/04/2022

// 2. PREPROCESSING

#include <iostream>
using namespace std;

// 3.driver/application code

class bank_detail
{
    int balance;
    string acc, name;

public:
    void deposite()
    {
        cout << "\nPlease enter your name:";
        cin >> name;

        cout << "\nPlease enter your account number:";
        cin >> acc;

        cout << "\nEnter deposite amount:";
        cin >> balance;
    }

    void withdraw()
    {
        int temp;
        cout << "\nEnter withdrawal amount:";
        cin >> temp;

        if (temp > balance)
            cout << "\nTransition is failed";

        else
        {
            cout << "\nYour transition is successful";
            balance = balance - temp;
        }
    }

    void display()
    {
        cout << "\nName:" << name;
        cout << "\nAccount No:" << acc;
        cout << "\nAvailable balance:" << balance;
    }
};

// Main_section

int main()
{
    bank_detail b;
    b.deposite();
    b.withdraw();
    b.display();
    return 0;
}

// OUTPUT
/*

Please enter your name:Ankit

Please enter your account number:38948333486

Enter deposite amount:5000

Enter withdrawal amount:2000

Your transition is successful
Name:Ankit
Account No:38948333486
Available balance:3000


//If withdrwal amount is greater than deposited balance.

Please enter your name:Ankit

Please enter your account number:38948333486

Enter deposite amount:5000

Enter withdrawal amount:7000

Transition is failed
Name:Ankit
Account No:38948333486
Available balance:5000

*/