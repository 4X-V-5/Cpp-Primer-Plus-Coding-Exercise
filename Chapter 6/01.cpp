#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter something (enter @ to terminate): ";
    cin.get(ch);
    while(ch != '@')
    {
        if(islower(ch))
            cout << (char)toupper(ch);
        else if(isupper(ch))
            cout << (char)tolower(ch);
        else if(!isdigit(ch))
            cout << ch;
        cin.get(ch);
    }

    return 0;
}