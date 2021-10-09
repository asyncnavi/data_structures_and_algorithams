#include <iostream>

using namespace std;

int prefix_sum(int arr[], int n)
{

    // creating prefix sum array

    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_sum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max_sum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    int sum = prefix_sum(arr, n);

    cout << "MAXIMUM SUM OF SUBARRAYS IS : " << sum << endl;

    return 0;
}