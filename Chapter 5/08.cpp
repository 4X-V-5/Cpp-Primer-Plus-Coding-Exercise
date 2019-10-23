#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[21];
    int count = 0;
    cout << "Enter words (to stop, type the word done): \n";
    cin >> word;
    while(strcmp(word, "done"))
    {
        count ++;
        cin >> word;
    }

    cout << "You entered a total of " << count << " words.\n";

    return 0;
}