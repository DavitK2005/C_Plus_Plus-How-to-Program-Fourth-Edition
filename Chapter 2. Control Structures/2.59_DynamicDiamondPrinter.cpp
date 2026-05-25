/*Modify the program you wrote in Exercise 2.58 to read an odd number in the range I to 19
to specify the number of rows in the diamond.Your program should then display a diamond of the
appropriate size.*/


#include <iostream>

int main() {
	int odd_number{};
	std::cout << "Enter a odd_number between a 1 and 19: ";
	std::cin >> odd_number;

	if ((odd_number % 2) != 0 && (odd_number >= 1 && odd_number <= 19)) {
		for (int row{ 1 }; row <= (odd_number / 2); row++) {
			int spaces = (odd_number / 2) - row;
			int stars = 2 * row - 1;

			for (int i{ 0 }; i < spaces; i++) {
				std::cout << ' ';
			}
			for (int j{}; j < stars; j++) {
				std::cout << '*';
			}
			std::cout << std::endl;
		}
		for (int row{ (odd_number / 2) - 1 }; row >= 1; row--) {
			int spaces = (odd_number / 2) - row;
			int stars = 2 * row - 1;

			for (int i{ 0 }; i < spaces; i++) {
				std::cout << ' ';
			}
			for (int j{}; j < stars; j++) {
				std::cout << '*';
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "Invalid number";
	}
}