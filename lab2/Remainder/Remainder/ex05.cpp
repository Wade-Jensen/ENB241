#include <iostream>
using namespace std;

int integerDivision(const int numerator, const int denominator, int &remainder)
{
	remainder = numerator % denominator;
	return numerator / denominator;
}


int main()
{
	int numerator;
	int denominator;
	int quotient;
	int remainder;

	cout << "Enter numerator\n";
	cin >> numerator;
	cout << "Enter denominator\n";
	cin >> denominator;

	quotient = integerDivision(numerator, denominator, remainder);
	cout << quotient << "\n";
	cout << remainder << "\n";
	return 0;
}
