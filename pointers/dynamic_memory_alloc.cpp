#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    // Dynamicaly creating an array

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
        cout << arr[i] << " ";
    }
    cout << endl;
    // before deleting the array from heap memory
    cout << arr[2] << endl;

    //getting address of array
    cout << arr << endl;

        // deleting the array from heap

        delete[] arr;

    // after deleting array from heap memory
    cout << arr[2] << endl;
    cout << arr << endl;

    // After deleting array from heap memory we can recieve 
    // segmentation fault getting the arr[]'s value 
    // because *arr was in the stack memory so we will remain getting
    // the address of arr[] because * arr will remain until the func 
    // main() is not yet destroyed/implemented.



    return 0;
}