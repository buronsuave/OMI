#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

