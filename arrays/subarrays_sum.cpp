#include <iostream>

using namespace std;

int subarrays_sum(int *arr, int n) {

    int max_sum = 0;    
    
    for(int i =0; i< n;i++) {
        for(int j = i; j < n;j++){
            int curr_sum = 0;
            for(int k = i; k < j; k++) {
                curr_sum += arr[k];
            }
            max_sum = max(max_sum,curr_sum);
        }
    }

    return max_sum;
}

int main() {
    
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    int sum = subarrays_sum(arr, n);

    cout << "MAXIMUM SUM OF SUBARRAYS IS : " << sum << endl;
    return 0;
}