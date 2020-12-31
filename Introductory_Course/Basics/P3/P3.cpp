#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int i = input.find(' ');
    string n_str = input.substr(0, i);
    string m_str = input.substr(i+1, input.length() - i - 1);
    int n = stoi(n_str);
    int m = stoi(m_str);

    if (n%m == 0)
    {
        cout << n/m;
    }
    else if (n/m == 0)
    {
        cout << n << "/" << m;
    }
    else 
    {
        cout << n/m << " " << n%m << "/" << m;
    }
}
