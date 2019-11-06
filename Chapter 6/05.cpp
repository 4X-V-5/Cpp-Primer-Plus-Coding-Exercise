#include <iostream>
using namespace std;

int main()
{
    double income, tax;
    cout << "Enter your income in tvarp: ";
    cin >> income;

    while(!cin.fail() && income>=0)
    {
        if (income >= 35000)
        {
            tax = 5000 * 0 + 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }else if (income >= 15000)
        {
            tax = 5000 * 0 + 10000 * 0.1 + (income - 15000) * 0.15;
        }else if (income >= 5000)
        {
            tax = 5000 * 0 + (income - 5000) * 0.1;
        }else
        {
            tax = (5000 - income) * 0;
        }

        cout << "Your income tax is " << tax << ".\n";
        cout << "Enter a new income (enter invalid input to quit): ";
        cin >> income;
    }
    cout << "Invalid input.\n";
    return 0;
}