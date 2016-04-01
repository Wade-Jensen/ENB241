#include <iostream>
using namespace std;

void create_table(int table[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			table[i][j] = (i + 1)*(j + 1);
		}
	}
}

void disp_table(int table[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}



int main()
{
	int table[10][10];
	create_table(table);
	disp_table(table);
	while (1);
	return 0;
}