//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double expenses[]);
void show(double expenses[]);
int main()
{
    double expenses[4];
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double expenses[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> expenses[i];
    }
}

void show(double expenses[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << expenses[i] << '\n';
        total += expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
