#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T array[], int n);

template <> const char * maxn(const char * array[], int n);

int main()
{
    int int_array[6] = {1, 2, 3, 4, 5, 6};
    double double_array[4] = {1.1, 2.2, 3.3, 4.4};
    const char *string_array[4] = {"Spring", "Summer", "Fall", "Winter"};

    cout << "Testing function maxn() with integer array:\n"
         << "Maximum integer: " << maxn(int_array, 6) << endl << endl
         << "Testing function maxn() with decimal array:\n"
         << "Maximum decimal: " << maxn(double_array, 4) << endl << endl
         << "Testing function maxn() with string array:\n"
         << "String with maximum length: " << maxn(string_array, 4) << endl << endl;
}


template <typename T>
T maxn(T array[], int n)
{
    T max = array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
    return max;
}

template <> const char * maxn(const char * array[], int n)
{
    const char *result = array[0];
    for(int i=1; i<n; i++)
    {
        if(strlen(array[i]) > strlen(result))
            result = array[i];
    }
    return result;
}