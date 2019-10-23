#include <iostream>
using namespace std;

int main(){
    int feet = 0;
    int inches = 0;
    cout << "Enter your height (xx feet and xx inches seperated by space): ";
    cin >> feet;
    cin >> inches;
    cout << endl;

    int pounds = 0;
    cout << "Enter your weight (in pounds): ";
    cin >> pounds;
    cout << endl;

    const double inch_to_meter = 0.0254;
    const int foot_to_inch = 12;
    const double kilo_to_pound = 2.2;

    int height_inch = feet * foot_to_inch + inches;
    double height_meter = height_inch * inch_to_meter;
    double weight_kilo = pounds / kilo_to_pound;

    double BMI = weight_kilo / (height_meter * height_meter);

    cout << "Your BMI is " << BMI << endl;

    return 0;
}