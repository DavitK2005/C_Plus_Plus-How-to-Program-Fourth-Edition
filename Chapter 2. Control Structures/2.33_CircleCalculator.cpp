/*Write a program that reads the radius of a circle(as a double value) and computes and
prints the diameter, the circumference and the area.Use the value 3.14159 for n.*/

#include <iostream>

int main() {
	double radius{};
	const double pi = 3.14159;

	std::cout << "Enter a radius: ";
	std::cin >> radius;

	std::cout << "The diameter is: " << 2 * radius << std::endl;
	std::cout << "The circumference is: " << 2 * pi * radius << std::endl;
	std::cout << "The area is: " << 2 * pi * radius * radius;
}