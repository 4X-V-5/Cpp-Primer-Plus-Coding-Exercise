#include <iostream>
using namespace std;

int main(){
    char name[21];
    char surname[11];
    char grade_deserve;
    int age;

    cout << "What is your first name? ";
    cin.getline(name, 20);
    cout << "What is your last name? ";
    cin.getline(surname, 10);
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