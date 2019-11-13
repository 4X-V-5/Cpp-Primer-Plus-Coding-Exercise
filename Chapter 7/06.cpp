#include <iostream>
#define array_size 5
using namespace std;

int Fill_array(double array[], int max_size);
void Show_array(const double array[], int length);
void Reverse_array(double array[], int length);

int main()
{
    double array[array_size];
    int length;
    length = Fill_array(array, array_size);
    Show_array(array, length);
    Reverse_array(array, length);
    Show_array(array, length);
    Reverse_array(array+1, length-2);
    Show_array(array, length);

    return 0;
}

int Fill_array(double array[], int max_size)
{
    double n;
    int length = 0;
    cout << "Enter numbers you want to store (" << max_size << " at most):\n";

    while(length<max_size && (cin >> n))
    {
        array[length] = n;
        length++;
    }
    return length;
}

void Show_array(const double array[], int length)
{
    cout << "Value stored in the array:\n";
    for(int i=0; i<length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double array[], int length)
{
    double temp;
    for(int i=0; i<length/2; i++)
    {
        temp = array[i];
        array[i] = array[length-i-1];
        array[length-i-1] = temp;
    }
}