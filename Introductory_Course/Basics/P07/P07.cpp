#include <iostream>

using namespace std;

int readInt();
int max(int*, int);
int min(int*, int);

int main()
{
    int n = readInt();
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = readInt();
    }

    int minValue = numbers[0];
    int maxValue = numbers[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
        if (numbers[i] < minValue)
        {
            minValue = numbers[i];
        }
    }

    cout << minValue << " " << maxValue << " " << sum/n;
}

int readInt()
{
    string input;
    getline(cin, input);
    return stoi(input);
}