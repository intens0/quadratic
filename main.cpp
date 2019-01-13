#include <iostream>
#include <cmath>
#include <conio.h>

int main() {

	double a, b, c;

	double root1, root2;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Enter c: ";
	std::cin >> c;

	// Positiver root (root1)

	root1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);

	// Negativer root

	root2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

	// Ausgabe der roots 
	std::cout << "Root 1 is" << root1 << "\n";
	std::cout << "Root 2 is" << root2 << "\n";

	_getch();
	return 0;
}