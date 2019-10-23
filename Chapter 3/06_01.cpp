#include <iostream>
using namespace std;

int main(){
    int travel_distance = 0;
    int oil_consumption = 0;

    cout << "Enter accumulated travel distance in miles: ";
    cin >> travel_distance;
    cout << "Enter oil consumption in gallons: ";
    cin >> oil_consumption;

    double mile_per_gallon = double (travel_distance) / oil_consumption;

    cout << "Your vehicle can travel " << mile_per_gallon << " miles per gallon.\n";
    return 0; 
}