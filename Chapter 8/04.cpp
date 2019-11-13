#include <iostream>
using namespace std;
#include <cstring>  // for strlen(), strcpy()
struct stringy {
    char * str;     // points to a string
    int ct;         // length of a string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &string, char *str);
void show(const stringy &string, int n=1);
void show(const char *str, int n=1);


int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);  // first argument is a reference,
                          // allocates space to hold copy of testing,
                          // sets str number of beany to point to the
                          // new block, copies testing to new block,
                          // and sets ct number of beany
    show(beany);       // prints member string once
    show(beany, 2);    // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);     // prints testing string once
    show(testing, 3);  // prints testing string thrice
    show("Done!");
    return 0;
}

void set(stringy &string, char *str)
{
    int length = strlen(str) + 1;
    char *ptr = new char[length];
    strcpy(ptr, str);
    string.str = ptr;
    string.ct = length - 1;
}

void show(const stringy &string, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "String content: " << string.str << endl
             << "String length: " << string.ct << endl;
    }
}

void show(const char *str, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << str << endl;
    }
}