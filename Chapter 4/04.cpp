#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string surname;
    string full_name;

    cout << "Enter your first name: ";
    getline(cin, name);
    cout << "Enter your last name: ";
    getline(cin, surname);

    full_name = surname + ", " + name;
    
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}