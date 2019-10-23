#include <iostream>
using namespace std;

void conversion();

int main(){
	conversion();

	return 0;
}

void conversion(){

	float celsius;
	float fahrenheit;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32.0;
	cout << celsius << " degree(s) Celsius is " << fahrenheit << " degree(s) Fahrenheit.\n";

}