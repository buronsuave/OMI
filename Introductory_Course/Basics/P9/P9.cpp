#include <iostream>

using namespace std;

int readInt();

int main()
{
    string input;
    getline(cin, input);
    int index = input.find(' ');
    string n_str = input.substr(0, index);
    string c_str = input.substr(index+1, input.length() - index - 1);
    int n = stoi(n_str);
    int c = stoi(c_str);

    int predictions[n];
    for (int i = 0; i < n; i++)
    {
        predictions[i] = readInt();
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += predictions[i];
        if (sum >= c)
        {
            cout << i+1;
            break;
        }
    }
}

int readInt()
{
    string input;
    getline(cin, input);
    return stoi(input);
}