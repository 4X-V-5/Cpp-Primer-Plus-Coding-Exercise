#include <iostream>
using namespace std;

int main()
{
    cout << "Enter integers (enter 0 to end input): ";
    int i, sum = 0;
    cin >> i;
    while(i)
    {
        sum += i;
        cout << "The current sum is " << sum << endl;
        cin >> i;
    }
    cout << "The sum of the numbers you've input is " << sum << endl;
    return 0;
}