#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[] = {45, 12, -12, 2, 150, 1, -200, 12};

    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);
    cout << "Sorted Array : { ";
    for (int x = 0; x < n - 1; x++)
    {
        cout << arr[x] << ", ";
    }
    cout << "}" << endl;

    return 0;
}