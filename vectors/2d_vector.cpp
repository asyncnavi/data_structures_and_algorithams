#include <iostream>
#include <vector>

using namespace std;


int main() {

    // 2d vector 

    vector<vector<int>> arr = {
        {2,3,4,5},
        {4,5,2,1,5},
        {2,3,1},
        {5,6,1}
    } ;


    // iterating throw a vector 

    for(int i = 0; i < arr.size(); i++) {
        for(int x : arr[i]) {
            cout << x << ",";
        }
        cout << endl;
    }
    

    return 0; 

}