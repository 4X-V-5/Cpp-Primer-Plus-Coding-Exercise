#include <iostream>
using namespace std;

int main()
{
    double donations[10];
    double num;
    int count = 0;
    double sum = 0;
    cout << "Enter donations: ";
    cin >> num;

    while(!cin.fail() && count<10)
    {
        donations[count] = num;
        count++;
        sum += num;
        cin >> num;
    }

    double avg = sum/(count+1);
    int over_avg = 0;

    for(int i=0; i<=count; i++)
    {
        if(donations[i] > avg)
            over_avg++;
    }

    cout << "The average of donations is " << avg << ".\n";
    cout << over_avg << " donation(s) over agerage.\n";

    return 0;
}