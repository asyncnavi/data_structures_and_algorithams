#include <iostream>

using namespace std;

void spiral_print(int arr[][10], int n, int m)
{
    int start_row = 0;
    int end_row = n - 1;
    int start_col = 0;
    int end_col = m - 1;

    while (start_col <= end_col && start_row <= end_row)
    {

        // ****
        for (int col = start_col; col <= end_col; col++)
        {
            cout << arr[start_row][col] << " ";
        }
        // *
        // *
        // *
        for (int row = start_row + 1; row <= end_row; row++)
        {
            cout << arr[row][end_col] << " ";
        }
        // ***
        for (int col = end_col - 1; col >= start_col; col--)
        {
            if (start_row == end_row)
                break;
            cout << arr[end_row][col] << " ";
        }
        // *
        // *
        // *
        for (int row = end_row - 1; row >= start_row + 1; row--)
        {
            if (start_col == end_col)
                break;
            cout << arr[row][start_col] << " ";
        }
        start_row++;
        start_col++;
        end_row--;
        end_col--;
    }
}

int main()
{

    int arr[][10] = {{1, 2, 3, 4},
                     {12, 13, 14, 5},
                     {11, 16, 15, 6},
                     {10, 9, 8, 7}};
    int n = 4;
    int m = 4;

    spiral_print(arr, n, m);
    return 0;
}