#include <iostream>
using namespace std;

int main(){
    int travel_distance = 0;
    int oil_consumption = 0;
    
    cout << "Enter accumulated travel distance in kilometers: ";
    cin >> travel_distance;
    cout << "Enter oil consumption in liters: ";
    cin >> oil_consumption;

    double liter_per_100km = double (oil_consumption) / travel_distance * 100;

    cout << "Your vehicle consume " << liter_per_100km << " liters fuel per 100 kilometers.\n";
    return 0; 
}