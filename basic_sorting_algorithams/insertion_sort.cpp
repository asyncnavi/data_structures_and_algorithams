#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n)
{

    for(int i = 1; i <= n -1; i++) {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 and arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = current;
        
    }
}

int main()
{

    int arr[] = {45, 12, -12, 2, 150, 1, -200, 12};

    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);
    cout << "Sorted Array : { ";
    for (int x = 0; x < n - 1; x++)
    {
        cout << arr[x] << ", ";
    }
    cout << "}" << endl;

    return 0;
}