#include <iostream>

using namespace std;

long pow(int, int);

int main()
{
    string input;
    getline(cin, input);
    long f = stoi(input);
    int n = 0;

    switch(f%11)
    {
        case 0:
        return 0;
        
        case 1:
        n = 0;
        break;

        case 2:
        n = 9;
        break;

        case 3:
        n = 2;
        break;

        case 4:
        n = 8;
        break;

        case 5:
        n = 6;
        break;

        case 6:
        n = 1;
        break;

        case 7:
        n = 3;
        break;

        case 8:
        n = 7;
        break;

        case 9:
        n = 4;
        break;

        case 10:
        n = 5;
        break;

        default:
        break;
    }

    cout << n << " " << f*pow(2, n);
}

long pow(int b, int e)
{
    long r = 1;
    for(int i = 0; i < e; i++)
    {
        r *= b;
    }
    return r;
}

