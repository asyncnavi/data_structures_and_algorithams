#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{

   for(int i = 0 ; i <= n -2; i++) {
       int current = arr[i];
        int min_pos = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[min_pos]) {
                min_pos = j;
            }
        }

        swap(arr[i], arr[min_pos]);

   }
}

int main()
{

    int arr[] = {45, 12, -12, 2, 150, 1, -200, 12};

    int n = sizeof(arr) / sizeof(int);

    selection_sort(arr, n);
    cout << "Sorted Array : { ";
    for (int x = 0; x < n - 1; x++)
    {
        cout << arr[x] << ", ";
    }
    cout << "}" << endl;

    return 0;
}