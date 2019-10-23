#include <iostream>
using namespace std;

void print_msg1();
void print_msg2();

int main(){
	print_msg1();
	print_msg1();
	print_msg2();
	print_msg2();

	return 0;
}

void print_msg1(){
	cout << "Three blind mice\n";
}

void print_msg2(){
	cout << "See how they run\n";
}