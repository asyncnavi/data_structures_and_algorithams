#include <iostream>

using namespace std;

int main()
{
    char number[][10] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight"
    };

    // printing an row

    for(int i = 0; i < 8; i++ ) {
        cout << number[i] << endl;
    }

    // getting a specfic element
    cout << number[6][2] << endl;
}