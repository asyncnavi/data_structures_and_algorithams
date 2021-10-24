#include <iostream>
#include <cstring>


using namespace std;



int main() {

    char arr[] = "abcdefgh"; // or { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0' };

    cout << strlen(arr); // number of characters we excluding null char at end
    cout << sizeof(arr); // strlen + 1 inclunding null character

    cout << arr;

    return 0;
}