#include <iostream>
using namespace std;


int get_inputs(int &cnt)
{
	int i;
	
	cout << "Please enter integer " << 1+cnt << endl;
	cin >> i;
	return i;
}

void bubble_sort(int *arr, int n); 

int main()
{
	int cnt = 0;
	int arr[10];
	while (cnt < 10)
	{
		*(arr+cnt) = get_inputs(cnt);
		cnt++;
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,n);
	for (cnt = 0; cnt < 10; cnt++)
	{
		//cout << arr + cnt << endl;
		cout << *(arr+cnt) << endl;
		//cout << "print hello" << endl;
	}
	while (1);
}