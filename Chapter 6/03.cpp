#include <iostream>
using namespace std;

int main()
{
    char choice;
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore    p) pianist\n";
    cout << "t) tree         g)game\n";
    cin >> choice;
    int bad_input = 0;
    
    do
    {
        switch(choice)
        {
            case 'c':
            cout << "A tiger is a carnivore.\n";
            bad_input = 0;
            break;

            case 'p':
            cout << "Liszt is a pianist.\n";
            bad_input = 0;
            break;

            case 't':
            cout << "A maple is a tree.\n";
            bad_input = 0;
            break;

            case 'g':
            cout << "Fortnite is a game.\n";
            bad_input = 0;
            break;

            default:
            cout << "Please enter a c, p, t or g: ";
            bad_input = 1;
            cin >> choice;
        }
    } while(bad_input);

    return 0;
}