/*Write a program that uses for structures to print the following patterns separately, one below the other.Use for loops to generate the patterns.All asterisks(*) should be printed by a single
statement of the form cout « '*'; (this causes the asterisks to print side by side).[Hint:The
last two patterns require that each line begin with an appropriate number of blanks.Extra credit :
Combine your code from the four separate problems into a single program that prints all four patterns
side by side by making clever use of nested for loops.]*/

#include <iostream>

int main() {
/*	for (int row{1}; row <= 10; ++row) {
		for (int column{1}; column <= 10; ++column) {
			if (column <= row) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}*/
/*
	for (int row{ 1 }; row <= 10; row++) {
		for (int column{ 10 }; column >= 1; column--) {
			if (column >= row) {
				std::cout << '*';
			}
		}
	std::cout << std::endl;
	}*/
	/*for (int row{ 1 }; row <= 10; row++) {
		int space{ row };
		for (space; space >= 2; space--) {
				std::cout << ' ';
		}
		for (int column{ 10 }; column >= 1; column--) {
			if (column >= row) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}*/
	for (int row{ 1 }; row <= 10; row++) {
		for (int space{ 10 }; space >= row; space--) {
			std::cout << ' ';
		}
		for (int column{ 1 }; column <= 10; column++) {
			if (column <= row) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}
}
