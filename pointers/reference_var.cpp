#include <iostream>

using namespace std;


int main() {

    int x = 10;

    // declaring a refernce variable 

    int &y = x; // now variable x and y both are pointing to the same bucket

    x++;y++; // 

    cout << x << ", " << y << endl; // both should be 12;


    return 0;
}