#include <iostream>

using namespace std;

int readInt();
int indexOf(int*, int, int);

int main()
{
    int n = readInt();
    int numbers[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        numbers[i] = readInt();
        if (numbers[i]%3 == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No hay triples.";
        return 0;
    }

    cout << count << endl;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i]%3 == 0)
        {
            cout << i+1 << " ";
        }
    }
}

int readInt()
{
    string input;
    getline(cin, input);
    return stoi(input);
}