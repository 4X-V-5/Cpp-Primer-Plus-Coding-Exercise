#include <iostream>
using namespace std;

const int strsize = 20;
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    bop list[5] = 
	{
		{"Barak Obama", "President", "Obamarama", 1},
		{"Elvis", "Singer", "The man, the legend", 0},
		{"Aristotle", "Philosopher", "The Thinker", 2},
		{"Einstein", "Physicist", "Genius", 1}, 
		{"Marlon Brando", "Actor", "Bad boy", 0}
	};

    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name      b. display by title\n"
         << "c. display by bopname   d. display by preference\n"
         << "q. quit\n"
         << "Enter your choice: ";

    char choice;
    cin >> choice;
    while(choice != 'q')
    {
        if(cin.fail() || (choice!='a' && choice!='b' && choice!='c' && choice!='d'))
        {
            cout << "invalid input, try again.\n";
        }else
        {
            switch(choice)
            {
                case 'a':
                    for(int i=0; i<5; i++)
                    {
                        cout << list[i].fullname << endl;
                    }
                    break;
                case 'b':
                    for(int i=0; i<5; i++)
                    {
                        cout << list[i].title << endl;
                    }
                    break;
                case 'c':
                    for(int i=0; i<5; i++)
                    {
                        cout << list[i].bopname << endl;
                    }
                    break;
                case 'd':
                    for(int i=0; i<5; i++)
                    {
                        if(list[i].preference == 0)
                        {
                            cout << list[i].fullname << endl;
                        }else if(list[i].preference == 1)
                        {
                            cout << list[i].title << endl;
                        }else
                        {
                            cout << list[i].bopname << endl;
                        }
                        
                    }
                    break;
            }
        }
        cout << "Next choice: ";
        cin >> choice;
    }

    cout << "Bye!\n";
    return 0;
}