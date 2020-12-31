#include <iostream>

using namespace std;

int readInt();

int main()
{
    string input;
    getline(cin, input);
    int index = input.find(' ');
    string n_str = input.substr(0, index);
    string p_str = input.substr(index+1, input.length() - index - 1);
    int n = stoi(n_str);
    int p = stoi(p_str);

    int buses[n];
    int questions[p];

    for (int i = 0; i < n; i++)
    {
        buses[i] = readInt();
    }

    for (int i = 0; i < p; i++)
    {
        questions[i] = readInt();
    }

    for (int i = 0; i < p; i++)
    {
        cout << buses[questions[i]-1] << endl;
    }
}

int readInt()
{
    string input;
    getline(cin, input);
    return stoi(input);
}