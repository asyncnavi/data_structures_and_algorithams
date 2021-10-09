#include <iostream>

using namespace std;

void print_pairs(int *arr, int n) {

    for(int i =0; i < n; i++) {
        for(int j =i; j < n;j++) {
            cout << "(" << arr[i] << "," << arr[j] << ")" << ",";
        }
        cout << endl;
    }
}

int main() {
   int arr[] = {4,5,2,8,9,1,0};

    int n = sizeof(arr) / sizeof(int);

    print_pairs(arr,n);

    return 0;
}