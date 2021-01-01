#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    short i = input.find(' ');
    
    string a_str = input.substr(0, i);
    string b_str = input.substr(i+1, input.length() - i - 1);
    short a = stoi(a_str);
    short b = stoi(b_str);

    cout << a+b;    
}

