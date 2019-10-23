#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[12] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int sales[3][12];
    int sum[3] = {};

    for(int i=0; i<3; i++)
    {
        cout << "Enter the sales of year " << i+1 << ":\n";
        for(int j=0; j<12; j++)
        {
            cout << months[j] << ": ";
            cin >> sales[i][j];
            sum[i] += sales[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        cout << "The total sales of year " << i+1 << " is " << sum[i] << endl;
    }

    return 0;
}