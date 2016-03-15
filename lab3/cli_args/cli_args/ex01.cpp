#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	double resistance, voltage;

	if (argc != 3)
	{
		cout << "Usage: " << argv[0] << " resistance voltage" << endl;
		return -1;
	}

	resistance = atof(argv[1]);
	voltage = atof(argv[2]);

	cout << "Current is " << voltage / resistance << "A" << endl;

	return 0;
}