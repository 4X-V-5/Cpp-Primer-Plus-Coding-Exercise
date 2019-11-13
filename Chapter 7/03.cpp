#include <iostream>
using namespace std;

typedef struct
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
}Box;

void input(Box *box);
void output(Box box);
void calculate_volume(Box *box);

int main()
{
    Box box;
    input(&box);
    calculate_volume(&box);
    output(box);
    return 0;
}

void input(Box *box)
{
    cout << "Enter details of the box:\n";
    cout << "Maker: ";
    cin.getline(box->maker, 40);
    cout << "Height: ";
    cin >> box->height;
    cout << "Width: ";
    cin >> box->width;
    cout << "Length: ";
    cin >> box->length;
}

void output(Box box)
{
    cout << "Information of this box:\n"
         << "maker: " << box.maker << endl
         << "height: " << box.height << endl
         << "width: " << box.width << endl
         << "length: " << box.length << endl
         << "volume: " << box.volume << endl;
}

void calculate_volume(Box *box)
{
    box->volume = box->height * box->length * box->width;
}