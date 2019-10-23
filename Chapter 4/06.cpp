#include <iostream>
using namespace std;

struct CandyBar{
    char brand[20];
    double weight;
    int calories;
};

int main(){
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350}
    };

    for (int i=0; i<3; i++){
        cout << "snacks[" << i << "]: " << endl;
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;;
        cout << "Calories: " << snacks[i].calories << endl << endl;
    }

    return 0;

}