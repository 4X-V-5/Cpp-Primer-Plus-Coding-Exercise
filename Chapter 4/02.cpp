#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string surname;
    char grade_deserve;
    int age;

    cout << "What is your first name? ";
    getline(cin, name);
    cout << "What is your last name? ";
    getline(cin, surname);
    cout << "What letter grade do you deserve? ";
    cin >> grade_deserve;
    cout << "What is your age? ";
    cin >> age;

    char grade = grade_deserve + 1;

    cout << "Name: " << surname << ", " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}