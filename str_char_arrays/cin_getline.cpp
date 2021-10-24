#include <iostream>

using namespace std;



int main() {

    // cin.getline(1,2,3 )
    /*
        1 : reference to variable where you wanna store in whole array or string.
        2 : length of character do you wanna get.
        3(optional) :  it takes a character when you want to break buffer 
                        default it is '\n'
     */

    char paragraph[1000];
    cin.getline(paragraph,1000); 

    cout << paragraph << endl;
    return 0;
}