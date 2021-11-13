#include <iostream>

using namespace std;

void print_array(int arr[][100], int i, int j)
{
	for (int x = 0; x < i; x++)
	{
		for (int y = 0; y < j; y++)
		{
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
}

int main()
{

	int matrix[1000][100];

	int i, j;
	cout << "Enter the number of rows" << endl;
	cin >> i;
	cout << "Enter the number of colums" << endl;
	cin >> j;

	cout << "ROWS: " << i << ", "
		 << "COLUMS: " << j << endl;

	for (int x = 0; x < i; x++)
	{
		cout << "Enter the rows values"
			 << " " << x
			 << " "
			 << "seprating with space"
			 << endl;
		for (int y = 0; y < j; y++)
		{
			cin >> matrix[x][y];
		}
	}

	print_array(matrix, i, j);

	return 0;
}