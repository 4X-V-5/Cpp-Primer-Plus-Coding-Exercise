#include <iostream>
using namespace std;

struct CandyBar {
    char brand[20];
    double weight;
    int calories;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Inside variable snack: \n";
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;

    return 0;
}