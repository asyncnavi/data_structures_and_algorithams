#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100] = "howareyou";
    char str_1[100];
    // Caclute length
    cout << strlen(str) << endl;

    // Strcpy 
    strcpy(str_1, str);
    cout << str_1 << endl;


    // Compare
    cout << strcmp(str_1, str) << endl;

    // Concat
    char web[] = "www.";
    char domain[] = "navraj.tech";
    cout << strcat(web,domain) << endl;
    return 0;
}