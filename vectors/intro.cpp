#include <iostream>
#include <vector>

using namespace std;


int main() {

    // initializing

    vector<int> arr; // will be sized with 0
    cout << arr.size() << endl;
    cout << arr.capacity() << endl    ; // capacity also will be 0
   
    vector<int> arr1 = {4,2,1,2,3}; // size will be 5
    cout << arr1.size() << endl;
    cout << arr1.capacity() << endl; // capacity also will be same

        // filled constructor 
    vector<int> arr2(10,2); // will create 10 elem with all values 2
    cout << arr2.size() << endl;
    cout << arr2.capacity() << endl;

    // interating throw a vector

    for(int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << ", ";
    }
    cout << endl;

    // push_back O(1) if there is no need to reallocating memory
    // else O(n)

    arr1.push_back(8);

    cout << arr1[5]; // last element we added 
    

    return 0; 

}