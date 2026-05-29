/*Write a program that prints the following diamond shape.You may use output statements
that print either a single asterisk(*) or a single blank.Maximize your use of repetition(with nested
	for structures) and minimize the number of output statements.*/

#include <iostream>

int main() {
	for (int row{ 1 }; row <= 5; row++) {
		int spaces = 5 - row;
		int stars = 2 * row - 1;

		for (int counter{ 0 }; counter < spaces; counter++) {
			std::cout << ' ';
		}
		for (int column{}; column < stars; column++) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
	for (int row{ 4 }; row >= 1; row--) {
		int spaces = 5 - row;
		int stars = 2 * row - 1;

		for (int counter{ 0 }; counter < spaces; counter++) {
			std::cout << ' ';
		}
		for (int column{}; column < stars; column++) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}
