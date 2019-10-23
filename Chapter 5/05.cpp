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
    int sales[12];
    int sum = 0;

    for(int i=0; i<12; i++){
        cout << months[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }

    cout << "The sales over this year is " << sum << endl;

    return 0;
}