#include <iostream>

using namespace std;

struct tupple
{
    int a;
    int b;
};

tupple readTupple();
int readInt();

int main()
{
    tupple header = readTupple();
    int d = header.a;
    int w = header.b;

    tupple dictionary[d];
    int questions[w];

    for (int i = 0; i < d; i++)
    {
        dictionary[i] = readTupple();
    }

    for (int i = 0; i < w; i++)
    {
        questions[i] = readInt();
    }

    for (int i = 0; i < w; i++)
    {
        bool flag = false;
        for (int j = 0; j < d; j++)
        {
            if (questions[i] == dictionary[j].a)
            {
                flag = true;
                cout << dictionary[j].b << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "C?" << endl;
        }
    }
}

int readInt()
{
    string input;
    getline(cin, input);
    return stoi(input);
}

tupple readTupple()
{
    string input;
    getline(cin, input);
    int index = input.find(' ');
    string a_str = input.substr(0, index);
    string b_str = input.substr(index+1, input.length() - index - 1);

    tupple r = tupple();
    r.a = stoi(a_str);
    r.b = stoi(b_str);

    return r;
}