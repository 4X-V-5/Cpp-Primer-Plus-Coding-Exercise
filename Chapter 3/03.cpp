#include <iostream>
using namespace std;

int main(){
    int idegrees = 0;
    int iminutes = 0;
    int iseconds = 0;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> idegrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> iminutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> iseconds;

    const int degree_to_minute = 60;
    const int minute_to_second = 60;

    double ominutes = double (iseconds / minute_to_second) + iminutes;
    double odegrees = ominutes / degree_to_minute + idegrees;

    cout << idegrees << " degrees, " << iminutes << " minutes, " << iseconds << " seconds = " << odegrees << " degrees\n";

    return 0;
}