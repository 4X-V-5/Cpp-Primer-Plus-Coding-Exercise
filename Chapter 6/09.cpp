#include <iostream>
#include <fstream>
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
    ifstream infile;
    infile.open("09.txt");
    if(!infile.is_open())
    {
        cout << "Couldn't open the file\nProgram terminating...\n";
        exit(EXIT_FAILURE);
    }
    int num;
    infile >> num;
    infile.get();
    donor *donors = new donor[num];
    int grand_patrons_count = 0;

    for(int i=0; i<num; i++)
    {
        getline(infile, donors[i].name);
        infile >> donors[i].money;
        infile.get();
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
    infile.close();
    return 0;
}