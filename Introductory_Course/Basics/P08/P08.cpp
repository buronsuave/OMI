#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    bool flag = true;
    for (int i = 0; i < input.length()/2; i++)
    {
        if (input.at(i) != input.at(input.length() - i - 1))
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "si";
    }
    else
    {
        cout << "no";
    }
    
}
