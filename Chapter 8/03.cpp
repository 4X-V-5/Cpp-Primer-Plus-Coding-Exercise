#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void convert_to_uppercase(string &text);
void test();

int main()
{
    test();
    return 0;
}

void convert_to_uppercase(string &text)
{
    for(int i=0; i<text.size(); i++)
    {
        text[i] = toupper(text[i]);
    }
}

void test()
{
    string input;
    cout << "Enter a string (q to quit): ";
    while((getline(cin, input)) && input != "q")
    {
        convert_to_uppercase(input);
        cout << input << endl
             << "Next string (q to quit): ";
    }
    cout << "Bye.\n";
}