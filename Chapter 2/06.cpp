#include <iostream>
using namespace std;

double conversion(double);

int main(){
	double light_years;
	double astro_units;

	cout << "Enter the number of light years: ";
	cin >> light_years;
	astro_units = conversion(light_years);
	cout << light_years << " light yeras = " << astro_units << " astronomical units.\n";

	return 0;
}

double conversion(double light_years){
	return light_years * 63240;
}