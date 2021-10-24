#include <iostream>

using namespace std;

// ========== PROBLEM =========
/* Given a senctence, count the number of alphabet, 
   digits and space in sentence 
*/



// ======== solution =========
int main()
{

    char ch;
    ch = cin.get();

    int alph = 0, spaces = 0, digits = 0;

    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alph++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            spaces++;
        }

        ch = cin.get();
    }
    cout << "ALPHABETS : " << alph   << ", "
         << "DIGITS : "    << digits << ", " 
         << "SPACES : "    << spaces << endl;
    
    return 0;
}