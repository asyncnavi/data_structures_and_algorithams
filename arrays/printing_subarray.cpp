#include <iostream>

using namespace std;


void print_subarrays(int *arr, int n) {
      for(int i =0; i < n; i++) {
        for(int j =i; j < n;j++) {
            for(int k = i ; k < j; k++) {
                cout << arr[k] << ", ";
            }
        cout << endl;

        }
    }
}

int main() {
    int arr[] = {4,5,2,8,9,1,0};

    int n = sizeof(arr) / sizeof(int);

    print_subarrays(arr,n);

    return 0;
}