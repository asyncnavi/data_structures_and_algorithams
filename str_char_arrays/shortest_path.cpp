#include <iostream>

using namespace std;

int main()
{

    char path[1000];

    cin.getline(path, 1000, '\n');

    int x = 0;
    int y = 0;

    for (int i = 0; path[i] != '\0'; i++)
    {
        char dimension = path[i];

        switch (dimension)
        {
        case 'N':
            y++;
            break;
        case 'E':
            x++;
            break;
        case 'S':
            y--;
            break;
        case 'W':
            x--;
            break;
        default:
            break;
        }
    }

    cout << x << y << "\n";
    while (x > 0)
    {
        cout << "E";
        x--;
    }
    while (x < 0)
    {
        cout << "W";
        x++;
    }
    while (y < 0)
    {
        cout << "S";
        y++;
    }
    while (y > 0)
    {
        cout << "N";
        y--;
    }

    return 0;
}