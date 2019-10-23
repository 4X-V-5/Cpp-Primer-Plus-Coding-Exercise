#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char surname[20];
    char name[10];

    cout << "Enter your first name: ";
    cin.getline(name, 19);
    cout << "Enter your last name: ";
    cin.getline(surname, 9);
    strncat(surname, ", ", 19);
    strncat(surname, name, 19);

    cout << "Here's the information in a single string: " << surname << endl;

    return 0;
}