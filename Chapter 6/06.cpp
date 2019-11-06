#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct donor
{
    string name;
    double money;
};

int main()
{
    int num;
    cout << "Please enter the number of donors: ";
    cin >> num;
    cin.get();
    donor *donors = new donor[num];
    int grand_patrons_count = 0;

    for(int i=0; i<num; i++)
    {
        cout << "donor #" << i+1 << ":\n";
        cout << "name: ";
        getline(cin, donors[i].name);
        cout << "amount: ";
        cin >> donors[i].money;
        cin.get();
        if(donors[i].money > 1000)
        {
            grand_patrons_count++;
        }
    }

    cout << "\nGrand Patrons:\n";
    if(grand_patrons_count > 0)
    {
        for(int i=0; i<num; i++)
        {
            if(donors[i].money > 1000)
            {
                cout << donors[i].name << ": " << donors[i].money << endl;
            }
        }
    }else
    {
        cout << "none\n";
    }

    cout << "\nPatrons:\n";
    if(grand_patrons_count < num)
    {
        for(int i=0; i<num; i++)
        {
            if(donors[i].money <= 1000)
            {
                cout << donors[i].name << ": " << donors[i].money << endl;
            }
        }
    }else
    {
        cout << "none\n";
    }
    
    return 0;
}