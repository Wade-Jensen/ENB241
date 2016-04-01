#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	double array[100];
	int arrSize;
	int elemSize;
	int arrLength;

	arrSize = sizeof(array);
	elemSize = sizeof(array[1]);
	arrLength = arrSize / elemSize;

	cout << "arrSize = " << arrSize << endl;
	cout << "elemSize = " << elemSize << endl;
	cout << "arrLength = " << arrLength << endl;
	

	clock_t tic, toc;
	double clks;
	double time;

	tic = clock();
	int i;
	for (i = 0; i < 100000000; i++)
	{
		arrSize = sizeof(array);
	}
	toc = clock();
	clks = toc - tic;
	time = clks / CLOCKS_PER_SEC;

	cout << "iterations = " << i << endl;
	cout << "num system ticks = " << clks << endl;
	cout << "time = " << time << "secs" << endl;
	while (1);
}