#include <iostream>
using namespace std;

typedef struct
{
    char *brand_name;
    double weight;
    int calories;
}CandyBar;

void assign_value(CandyBar &candy_bar, char *str, double weight, int calories);
void display(const CandyBar &candy_bar);

int main()
{
    char brand_name[20] = "Chupa Chups";
    double weight = 5.5;
    int calories = 300;
    CandyBar candy_bar;
    assign_value(candy_bar, brand_name, weight, calories);
    display(candy_bar);

    return 0;
}

void assign_value(CandyBar &candy_bar, char *str, double weight, int calories)
{
    candy_bar.brand_name = str;
    candy_bar.weight = weight;
    candy_bar.calories = calories;
}

void display(const CandyBar &candy_bar)
{
    cout << "Informations of this candy bar:\n"
         << "Brand name: " << candy_bar.brand_name << endl
         << "Weight: " << candy_bar.weight << endl
         << "Calories: " << candy_bar.calories << endl;
}