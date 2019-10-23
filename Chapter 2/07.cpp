#include <iostream>
using namespace std;

void print_time(int, int);

int main(){
	int hrs;
	int mins;

	cout << "Enter the number of hours: ";
	cin >> hrs;
	cout << "Enter the number of minutes: ";
	cin >> mins;
	print_time(hrs, mins);

	return 0;
}

void print_time(int hrs, int mins){
	cout << "Time: " << hrs << ":" << mins << endl;
}