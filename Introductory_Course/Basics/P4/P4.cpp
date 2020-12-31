#include <iostream>
#include <math.h>

using namespace std;

int* readCoords();
int area(int*);
void sort(int*);

int main()
{
    int* court_1 = readCoords();
    int* court_2 = readCoords();
    
    int x[4] = 
    {
        court_1[0],
        court_1[2],
        court_2[0],
        court_2[2]
    };

    int y[4] = 
    {
        court_1[1],
        court_1[3],
        court_2[1],
        court_2[3]
    };

    if 
    (
        (x[0] <= x[2] && x[0] <= x[3] && x[1] <= x[2] && x[1] <= x[3]) ||
        (x[0] > x[2] && x[0] > x[3] && x[1] > x[2] && x[1] > x[3]) ||
        (y[0] > y[2] && y[0] > y[3] && y[1] > y[2] && y[1] > y[3]) ||
        (y[0] <= y[2] && y[0] <= y[3] && y[1] <= y[2] && y[1] <= y[3])
    )
    {
        cout << area(court_1) + area(court_2);
    }
    else 
    {
        sort(x);
        sort(y);

        int intersection[4] = 
        {
            x[1],
            y[1],
            x[2],
            y[2]
        };

        cout << area(court_1) + area(court_2) - area(intersection);
    }
}

int* readCoords()
{
    int* coords = new int[4];

    string input;
    getline(cin, input);

    int i = 0;
    int o = 0;

    for (int j = 0; j < 3; j++)
    {
        o = input.find(' ', i);
        string splitted = input.substr(i, o-i);
        int coord = stoi(splitted);
        coords[j] = coord;
        i = o+1;

        if (j == 2)
        {
            splitted = input.substr(i, input.length() - i);
            coord = stoi(splitted);
            coords[3] = coord;
        }
    }

    return coords;
}

int area(int* coords)
{
    return abs((coords[0] - coords[2])*(coords[1] - coords[3]));
}

void sort(int* array)
{
    for (int i = 0; i < 4; i ++)
    {
        for (int j = i; j < 4; j++)
        {
            if (array[i] > array[j])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
}

