#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=0; i<rows; i++)
    {
        for(int j=i+1; j<rows; j++)
        {
            cout << ".";
        }
        for(int k=rows-i; k<=rows; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}