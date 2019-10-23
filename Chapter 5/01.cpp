#include <iostream>
using namespace std;

int main()
{
    int a, b, sum=0;
    cout << "Enter 2 integers: ";
    cin >> a;
    cin >> b;

    for(int i=a; i<=b; i++)
    {
        sum += i;
    }

    cout << "The sum between " << a << " and " << b << " is " << sum << endl;

    return 0;
}