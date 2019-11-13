#include <iostream>
using namespace std;

int input(double scores[]);
void output(const double scores[], int count);
double mean_score(const double scores[], int count);

int main()
{
    double scores[10];
    double mean;
    int count = input(scores);
    output(scores, count);
    mean = mean_score(scores, count);
    return 0;
}

int input(double scores[])
{
    double score;
    int count = 0;
    cout << "Enter 10 scores at most (enter -1 to end):\n";
    cin >> score;
    while(score!=-1 && count<10)
    {
        scores[count] = score;
        count++;
        cin >> score;
    }
    return count + 1;
}

void output(const double scores[], int count)
{
    for(int i; i<count-1; i++)
    {
        cout << "score #" << i+1 << ": " << scores[i] << endl;
    }
}

double mean_score(const double scores[], int count)
{
    double sum = 0;
    double mean;
    for(int i=0; i<count-1; i++)
    {
        sum += scores[i];
    }
    mean = sum/count;

    cout << "The mean score is " << mean << endl;


    return mean;
}