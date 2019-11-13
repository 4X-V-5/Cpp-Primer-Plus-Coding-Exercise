#include <iostream>
using namespace std;
const int MAX_LEN = 20;
int function_called = 0;

void print_string(const char* ptr);
void print_string(const char* ptr, int n);

int main()
{
    char string[MAX_LEN] = "Hello";
    print_string(string);
    print_string(string);
    print_string(string);
    print_string(string);
    cout << endl;
    print_string(string, 1);
    return 0;
}

void print_string(const char* ptr)
{
    function_called++;
    for( ; *ptr!='\0'; ptr++)
    {
        cout << *ptr;
    }
    cout << endl;
}

void print_string(const char* ptr, int n)
{
    int i = function_called;
    if(n>0)
    {
        while(i--)
        {
            print_string(ptr);
        }

    }
}