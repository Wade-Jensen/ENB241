#include <iostream>
using namespace std;
// Algorithm sourced from http://www.cprogramming.com/tutorial/computersciencetheory/sorting1.html

void bubble_sort(int *arr, int n)
{
	//int n = sizeof(arr) / sizeof(arr[0]);
	int temp;
	for (int x = 0; x<n; x++)
	{
		for (int y = 0; y<n - 1; y++)
		{
			//cout << "arr[y] " << arr[y] << "??" << "arr[y+1] " << arr[y + 1] << endl;
			if (arr[y]>arr[y + 1])
			{
				//cout << "less than!!";
				temp = arr[y + 1];
				arr[y + 1] = arr[y];
				arr[y] = temp;
			}
		}
	}
}