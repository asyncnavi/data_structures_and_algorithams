#include <iostream>


using namespace std;



int main() {

    int x = 10;

    int * xptr = &x;

    // Derefencing a pointer 
    cout << *xptr << endl;
    cout << *(&x) << endl;



    return 0;
}