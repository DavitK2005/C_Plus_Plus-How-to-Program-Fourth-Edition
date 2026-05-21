/*Write a program that reads in the size of the side of a square and then prints a hollow square
of that size out of asterisks and blanks.Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 5, it should print
*****
*	*
*	*
*	*
******/

#include <iostream>

int main() {
	int side_of_square{};

	std::cout << "Enter a size of the square between 1 and 20: ";
	std::cin >> side_of_square;

	if (side_of_square >= 1 && side_of_square <= 20) {
		for (int row{1}; row <= side_of_square; row++) {
			for (int column{1}; column <= side_of_square; column++) {
				if (row == 1 || row == side_of_square || column == 1 || column == side_of_square) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}
}