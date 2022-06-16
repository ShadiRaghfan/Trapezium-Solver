#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double height;
	double BigBase;
	double smallBase;
	double side1;
	double side2;

	cout << "This program will calculate a trapezium's area and perimeter based on what values you assign." << endl;
	cout << "Please assign the height's value: ";
	cin >> height;

	cout << "Please assign the big base's value: ";
	cin >> BigBase;

	cout << "Please assign the small base's value: ";
	cin >> smallBase;

	cout << "Please assign side1's value: ";
	cin >> side1;

	cout << "Please assign side2's value: ";
	cin >> side2;

	double perimeter(BigBase + smallBase + side1 + side2);
	cout << "The trapezium's perimeter is equal to: " << perimeter << "." << endl;

	double area((BigBase + smallBase) * height / 2);
	cout << "The trapezium's area is equal to: " << area << ".";



	return 0;
	cout << endl;
}