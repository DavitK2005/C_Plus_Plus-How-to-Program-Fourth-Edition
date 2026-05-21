/*Write a program that uses a for structure to find the smallest of several integers.Assume
that the first value read specifies the number of values remaining and that the first number is not one
of the integers to compare.*/

#include <iostream>

int main() {
	int quantity{};
	std::cout << "Enter a quantity: ";
	std::cin >> quantity;

	int number{};
	std::cout << "Enter a number: ";
	std::cin >> number;
	int min{number};
	for (int i{1}; i < quantity; i++) {
		std::cout << "Enter a number: ";
		std::cin >> number;
		if (number < min) {
			min = number;
		}
	}
	std::cout << "The minimum is: " << min;
}