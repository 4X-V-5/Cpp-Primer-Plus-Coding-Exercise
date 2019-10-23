#include <iostream>
using namespace std;

int main(){
    long long world_pop = 0;
    long long america_pop = 0;

    cout << "Enter the world's population: ";
    cin >> world_pop;
    cout << "Enter the population of the US: ";
    cin >> america_pop;

    double proportion = double (america_pop) / world_pop * 100;

    cout << "The population of the US is " << proportion << "% of the world's population.\n";

    return 0;
}