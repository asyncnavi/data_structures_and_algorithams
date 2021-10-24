#include <iostream>
#include <cstring>

using namespace std;

// ======= PROBLEM =========
/* Read N Strings and print the lagest string, Each string can have upto 
    1000 character
 */

int main() {

    int n;
    cout << "Enter the number of string ?" << endl;
    cin >> n;

    cin.get();

    char sentence[1000];
    char largest[1000];
    
    int largest_len = 0;
    // read n number of strings 
    while(n--)  {
        cin.getline(sentence, 1000);

        int len = strlen(sentence);

        if(len > largest_len) {
            largest_len = len;
            strcpy(largest,sentence);
        }
    }

    cout << "Largest sentence is : " << largest << endl;


    return 0;
}