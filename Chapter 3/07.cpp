#include <iostream>
using namespace std;

int main(){
    double oil_consumed_per_100km = 0;

    cout << "Enter oil consumption (in liters) per 100 kilometers: ";
    cin >> oil_consumed_per_100km;

    int miles_per_gallon = (1.0 / oil_consumed_per_100km) * (62.14*3.875);

    cout << oil_consumed_per_100km << "L/100km = " << miles_per_gallon << " mpg.\n";
    
    return 0;
}