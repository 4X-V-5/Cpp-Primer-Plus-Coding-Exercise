#include <iostream>
#include <array>
using namespace std;

int main(){
    array<double, 3> result;
    for (int i=0; i<3; i++){
        cout << "Enter result " << i+1 << ": ";
        cin >> result[i];
    }
    double average = (result[0] + result[1] + result[2]) / 3.0;

    cout << "Your average grade in 3 times: " << average << endl;

    return 0;
}