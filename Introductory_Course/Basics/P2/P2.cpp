#include <iostream>

using namespace std;

int main()
{
    string input_1;
    getline(cin, input_1);
    int i = input_1.find(' ');
    string r_str = input_1.substr(0, i);
    string s_str = input_1.substr(i+1, input_1.length() - i - 1);
    int r = stoi(r_str);
    int s = stoi(s_str);

    string input_2;
    getline(cin, input_2);
    int b = stoi(input_2);

    if (r*s >= b)
    {
        cout << b << " " << 0;
    }
    else 
    {
        cout << r*s << " " << b - r*s;
    }
}
