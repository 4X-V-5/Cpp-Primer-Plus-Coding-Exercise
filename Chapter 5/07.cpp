#include <iostream>
#include <string>
using namespace std;

struct Car
{
    string producer;
    int year;
};

int main()
{
    int num;
    cout << "How many cars do you wish to catalog? ";
    cin >> num;
    Car *cars = new Car[num];

    for(int i=0; i<num; i++)
    {
        cin.get();
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, cars[i].producer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
    }

    cout << "Here is your collection:\n";
    for(int i=0; i<num; i++)
    {
        cout << cars[i].year << " " << cars[i].producer << endl;
    }

    return 0;
}