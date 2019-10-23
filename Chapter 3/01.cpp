#include <iostream>
using namespace std;

int main(){
    int inch = 0;
    const int convert_factor = 12;
    cout << "Enter your height (integer in inches): __\b\b";
    cin >> inch;
    cout << endl;

    int feet = inch / convert_factor;
    int inch_left = inch % convert_factor;

    cout << "Your height is " << feet << " feet and " << inch_left << " inch.\n";
    
    return 0;
}