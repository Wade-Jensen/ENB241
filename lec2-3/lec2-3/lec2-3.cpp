#include <iostream>
using namespace std;

int main(void)
{
	int x = 5, y = 10;
	cout << x << y;
	swap(x, y);
	cout << x << y;
}

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}