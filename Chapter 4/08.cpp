#include <iostream>
using namespace std;

struct Pizza{
    char brand[20];
    int diameter;
    double weight;
};

int main(){
    Pizza *pizza = new Pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza->diameter;
    cout << "Enter the brand of the pizza: ";
    cin.get();
    cin.getline(pizza->brand, 19);
    cout << "Enter the weight of the pizza: ";
    cin >> pizza->weight;

    cout << endl << "The brand of the pizza: " << pizza->brand << endl;
    cout << "The diameter of the pizza: " << pizza->diameter << endl;
    cout << "The weight of the pizza: " << pizza->weight << endl;

    return 0;
}