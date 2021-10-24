#include <iostream>

using namespace std;


int main()  {

    char ch[100];
    char temp = cin.get();

    int len = 0;

    while(temp != '\n') {
        
        ch[len++] = temp;
        // update the value of temp
        temp = cin.get();
    }
    ch[len] = '\n';
    cout << ch << ": " << len << endl;
    return 0;

}