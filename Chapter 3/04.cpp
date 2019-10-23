#include <iostream>
using namespace std;

int main(){
    long seconds = 0;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    const int day_hours = 24;
    const int hour_minutes = 60;
    const int minute_seconds = 60;

    int days = seconds / (day_hours*hour_minutes*minute_seconds);
    int hours = (seconds % (day_hours*hour_minutes*minute_seconds)) / (hour_minutes*minute_seconds);
    int minutes = (seconds % (hour_minutes*minute_seconds)) / minute_seconds;
    int oseconds = seconds % minute_seconds;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << oseconds << " seconds.\n";

    return 0;
}