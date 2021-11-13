#include <iostream>

using namespace std;




int main() {

    int x = 10;

    // Address of operator 

    cout << &x << endl;

    // Demo pointer
    int *xptr = &x;
    cout << xptr << endl;

    // Address of a pointer

    cout << &xptr << endl;

    // pointer to pointer variable

    int ** xxptr = &xptr ;

    cout << xxptr << endl;    

    return 0;
}