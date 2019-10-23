#include <iostream>
using namespace std;

int main()
{
    double daphne = 100;
    double cleo = 100;
    int year = 0;

    while(cleo <= daphne)
    {
        daphne += 0.1 * 100;
        cleo += 0.05 * cleo;
        year++;
    }

    cout << "After " << year << " years, Cleo's property exceeds Daphne's property.\n";
    cout << "Daphne: " << daphne << " dollars.\n";
    cout << "Cleo: " << cleo << " dollars.\n";

    return 0;
}