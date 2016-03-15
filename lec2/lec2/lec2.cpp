#include <iostream>
using namespace std;

int main()
{
	int *p1, *p2;
	int i = 10, j = 20;
	p1 = &i;
	p2 = &j;
	
	cout << "Step 1\n";
	cout << i << "\n";
	cout << j << "\n";
	cout << p1 << "\n";
	cout << p2 << "\n";
	cout << *p1 << "\n";
	cout << *p2 << "\n";

	*p1 = 20;
	*p2 = 30;

	cout << "Step 2\n";
	cout << i << "\n";
	cout << j << "\n";
	cout << p1 << "\n";
	cout << p2 << "\n";
	cout << *p1 << "\n";
	cout << *p2 << "\n";

	//*p1 = *p2;
	p1 = p2;
	cout << "Step 3\n";
	cout << i << "\n";
	cout << j << "\n";
	cout << p1 << "\n";
	cout << p2 << "\n";
	cout << *p1 << "\n";
	cout << *p2 << "\n";

	*p1 = 40;
	cout << "Step 4\n";
	cout << i << "\n";
	cout << j << "\n";
	cout << p1 << "\n";
	cout << p2 << "\n";
	cout << *p1 << "\n";
	cout << *p2 << "\n";
	return 0;
}
