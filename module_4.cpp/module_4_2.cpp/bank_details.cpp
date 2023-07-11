// Define a class to represent a bank account. Include the following members:

// 1. Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account

// 2. Member Functions:
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include <iostream>
#include <string>

using namespace std;

class bank

{

public:
    string acc_holder_name;
    int acc_no;
    string acc_type;
    int totalbalance = 0;
    int balance;
    int newbalance = 0;

    void function()
    {
        cout << "enter a account holder name : ";
        cin >> acc_holder_name;

        cout << "enter your acount number : ";
        cin >> acc_no;

        cout << "enter your account type : ";
        cin >> acc_type;

        cout << "enter your account balance : ";
        cin >> totalbalance;
    }

    void deposit()

    {
        cout << "Enter the amout to deposit:";
        cin >> balance;

        newbalance = totalbalance + balance;
        cout << "Amount deposited successfuly" << endl
             << "Your New Balance:" << newbalance;
    }

    void check()

    {
        int bal1;
        cout << endl
             << "Your balance :" << newbalance << endl
             << "Enter amount to withdraw:";
        cin >> bal1;

        if (bal1 <= totalbalance)

        {
            newbalance = newbalance - bal1;
            cout << endl
                 << "Remaining Balance:" << newbalance;
        }

        else
        {
            exit(0);
        }
    }

    void display()

    {
        cout << endl
             << "account holder name is : " << acc_holder_name;
        cout << endl
             << "your total balance : " << newbalance;
    }
};

int main()

{
    bank obj;
    obj.function();
    obj.deposit();
    obj.check();
    obj.display();
}