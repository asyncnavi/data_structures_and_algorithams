#include <iostream>

using namespace std;

void reverse_arr(int *arr, int n) {
    int left = 0, right = n -1;

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[] = {4,5,2,8,9,1,0};

    int n = sizeof(arr) / sizeof(int);

    reverse_arr(arr,n);
    cout << "Revsered Array is : [";
    for(int x = 0; x < n;x++) {
        cout << arr[x] << ", ";
    }
    cout << "]" << endl;


    return 0;
}