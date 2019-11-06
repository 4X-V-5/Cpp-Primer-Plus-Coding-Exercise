#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string word;
    int vowels = 0, consonants = 0, others = 0;
    cout << "Enter words (q to quit):\n";
    cin >> word;

    while(word[0] != 'q')
    {
        if(isalpha(word[0]))
        {
            word[0] = tolower(word[0]);
            if(word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u')
            {
                vowels++;
            }else
            {
                consonants++;
            }
        }else
        {
            others++;
        }
        cout << word << endl;
        cin >> word;
    }

    cout << vowels << " words beginning with vowels\n"
         << consonants << " words beginning with consonants\n"
         << others << " others\n";

    return 0;
}