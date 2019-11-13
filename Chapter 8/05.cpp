#include <iostream>
using namespace std;

template <typename T>
T max5(T array[]);

int main()
{
    int int_array[5] = {1, 2, 3, 4, 5};
    double double_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Maximum value in integer array: " << max5(int_array) << endl;
    cout << "Maximum value in decimal array: " << max5(double_array) << endl;
    return 0;
}

template <typename T>
T max5(T array[])
{
    T max = array[0];
    for(int i=1; i<5; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
    return max;
}