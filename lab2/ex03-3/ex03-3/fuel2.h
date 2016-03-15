#include <iostream>
//#include "fibonacci.h"
using namespace std;

double litre2gallon = 0.264179;

void calc_fuel_eff(void)
{
	double gallons;
	double km;
	double litres;
	double fuel_eff;
	while (1)
	{
		cout << "Enter fuel consumed in gallons: ";
		cin >> gallons;
		cout << "Enter kilometers travelled: ";
		cin >> km;

		litres = gallons / litre2gallon;
		fuel_eff = litres / km;

		cout << "fuel efficiency is " << fuel_eff << "litres/km\n";
	}

}
