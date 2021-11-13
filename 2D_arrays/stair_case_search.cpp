#include <iostream>

using namespace std;

pair<int, int> stair_case(int arr[][10], int n, int m, int key)
{

    if (key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }

    int i = 0;
    int j = m - 1;

    while (i < n and j >= 0)
    {

        if (arr[i][j] == key)
            return {i, j};
        else if (arr[i][j] > key)
            j--;
        else
            i++;
    }

    return {-1, -1};
}

int main()
{

    int arr[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {11, 12, 15, 16},
        {17, 18, 21, 72}};
    int n = 4;
    int m = 4;
    int key;
    cout << "Enter key to search here...";
    cin >> key;
    pair<int, int> axis = stair_case(arr, n, m, key);

    cout << axis.first << ", " << axis.second;

    return 0;
}