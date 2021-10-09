#include <iostream>
#include <limits.h>

using namespace std;

// kadane's solution for finding maximum sum of subarrays of 
// an array

int subarrays_sum(int *arr, int n) {
    int curr_sum = 0; 
    int max_sum = INT_MIN;

    for(int i= 0; i < n;i++) {
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);

        if(curr_sum < 0) {
            curr_sum = 0;
        }
    }
    return max_sum;
}


int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    int sum = subarrays_sum(arr, n);

    cout << "MAXIMUM SUM OF SUBARRAYS IS : " << sum << endl;

    return 0;
}