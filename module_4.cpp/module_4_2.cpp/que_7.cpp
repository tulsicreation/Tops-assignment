// •	Write a program of Addition, Subtraction, Division, Multiplication using constructor

#include <iostream>

using namespace std;

class claculater
{
public:
    int a;
    int b;
    char op;
    int num1;
    int num2;

    claculater sum()
    {

        cout << "Enter operator: +, -, *, /: ";
        cin >> op;

        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch (op)
        {

        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
        }
    }
};

int main()

{
    claculater obj;
    obj.sum();
}
