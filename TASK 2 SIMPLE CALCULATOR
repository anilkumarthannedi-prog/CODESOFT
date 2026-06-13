#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Simple Calculator" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+,-,*,/,%): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+')
    {
        cout << "Result = " << num1 + num2;
    }
    else if(op == '-')
    {
        cout << "Result = " << num1 - num2;
    }
    else if(op == '*')
    {
        cout << "Result = " << num1 * num2;
    }
    else if(op == '/')
    {
        if(num2 != 0)
        {
            cout << "Result = " << num1 / num2;
        }
        else
        {
            cout << "Division by zero is not possible";
        }
    }
    else if(op == '%')
    {
        if((int)num2 != 0)
        {
            cout << "Result = " << (int)num1 % (int)num2;
        }
        else
        {
            cout << "Modulo by zero is not possible";
        }
    }
    else
    {
        cout << "Invalid Operator";
    }

    return 0;
}
