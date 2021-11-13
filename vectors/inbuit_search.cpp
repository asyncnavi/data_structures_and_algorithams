#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr = {10, 2, 4, 11, 20, 102};

    int key = 11;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    if(it != arr.end())
     cout << it - arr.begin() << endl;
    else 
    
    return 0;
}