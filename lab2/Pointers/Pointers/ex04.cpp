#include <iostream>
# include <time.h>
using namespace std;
int main()
{
	int i = 5, *iptr = &i, m;
	double j = 500000, *jptr = &j;
	char c[6] = "hello";
	char *cptr = c;

	clock_t tic, toc;
	tic = clock();
	for (int k = 0; k < 1000000000; k++)
	{
		m = sizeof(j);
	}
	toc = clock();

	cout << "Clock cycles = " << tic << "\n";
	cout << "Clock cycles = " << toc << "\n";
	cout << CLOCKS_PER_SEC << "\n";
	cout << "Seconds = " << (toc - tic) / CLOCKS_PER_SEC;

	// Address
	cout << "Address\n";
	cout << &i << "\n";
	cout << &j << "\n";
	cout << &c << "\n";
	cout << &iptr << "\n";
	cout << &jptr << "\n";
	cout << &cptr << "\n";

	// Value
	cout << "Value\n";
	cout << i << "\n";;
	cout << j << "\n";;
	cout << c << "\n";;
	cout << *iptr << "\n";;
	cout << *jptr << "\n";;
	cout << *cptr << "\n";;

	//Memory Size
	cout << "Size\n";
	cout << sizeof(i) << "\n";;
	cout << sizeof(j) << "\n";;
	cout << sizeof(c) << "\n";;
	cout << sizeof(iptr) << "\n";;
	cout << sizeof(jptr) << "\n";;
	cout << sizeof(cptr) << "\n";;
}
