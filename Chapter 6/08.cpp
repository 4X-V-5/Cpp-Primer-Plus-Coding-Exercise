#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    int count;
    ifstream infile;
    cout << "Reading file now...\n";
    infile.open("08.txt");
    if(!infile.is_open())
    {
        cout << "Couldn't open the file\nProgram terminating...\n";
        exit(EXIT_FAILURE);
    }

    infile >> ch;
    while(!infile.eof())
    {
        count++;
        infile >> ch;
    }
    cout << "The file contains " << count << " characters.\n";
    infile.close();
    return 0;
}