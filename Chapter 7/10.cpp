#include<iostream>
using namespace std;
const int FUNCTIONS = 3;

double add(double x, double y);
double multiply(double x, double y);
double subtract(double x, double y);
void calculate(double x, double y, double (*pf[])(double a, double b), int length);

int main(void)
{
	double (*pf[FUNCTIONS])(double, double) = {add, multiply, subtract};

	cout << "Enter two numbers (q to quit): ";
	double x, y;

	while (cin >> x >> y)
	{
		cout << "The sum, product, and difference are as follows: ";
		calculate(x, y, pf, FUNCTIONS);
		cout << "Enter another two numbers (q to quit): ";
	}
	
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double multiply(double x, double y)
{
	return x * y;
}

double subtract(double x, double y)
{
	return x - y;
}

void calculate(double x, double y, double (*pf[])(double a, double b), int length)
{
	using namespace std;
	for (int i = 0; i < length; i++)
	{
		cout << (*pf[i])(x, y) << "  ";
	}
	cout << endl;
	return;
}