#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void toFahrenheit(double a)
{
	double temp = (9.0 / 5.0 * a + 32);
	cout << a << "\370" << "C is equal to " << temp << "\370" << " C";
}

void toCelcius(double a)
{
	double temp = ((5.0 / 9.0) * (a - 32));
	cout << a << "\370" << "F is equal to " << temp << "\370" << " C";
}

int main()
{
	//declare variables
	double f = 0;
	double c = 0;

	//user input
	cout << "Temperature Conversions\n" << "From Celcius to Fahrenheit and vice versa\n";
	cout << "Enter a temperature in degrees Fahrenheit\n";
	cin >> f;
	cout << "Enter a temperature in degrees Celcius\n";
	cin >> c;

	toFahrenheit(c);

	cout << endl;

	toCelcius(f);

	return 0;
}