#include <iostream>
using namespace std;

double harmonic_mean(double, double);

int main()
{
    double a, b;
    while(true)
    {
        cout << "Enter two numbbers: ";
        cin >> a >> b;
        if(a && b)
        {
            cout << "The harmonic mean is " << harmonic_mean(a, b) << endl;
        }else
        {
            break;
        }
        
    }

    return 0;
}

double harmonic_mean(double a, double b)
{
    return 2.0*a*b / (a+b);
} 