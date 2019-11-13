//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
typedef struct 
{
    double amount[Seasons];
}Expenses;


void fill(Expenses &expenses);
void show(Expenses &expenses);
int main()
{
    Expenses expenses;
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Expenses &expenses)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> expenses.amount[i];
    }
}

void show(Expenses &expenses)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << expenses.amount[i] << '\n';
        total += expenses.amount[i];
    }
    std::cout << "Total: $" << total << '\n';
}
