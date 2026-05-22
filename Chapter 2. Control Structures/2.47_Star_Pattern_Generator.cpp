/*Write a program that uses for structures to print the following patterns separately, one below the other.Use for loops to generate the patterns.All asterisks(*) should be printed by a single
statement of the form cout « '*'; (this causes the asterisks to print side by side).[Hint:The
last two patterns require that each line begin with an appropriate number of blanks.Extra credit :
Combine your code from the four separate problems into a single program that prints all four patterns
side by side by making clever use of nested for loops.]*/

#include <iostream>

int main() {
/*	for (int i{1}; i <= 10; ++i) {
		for (int j{1}; j <= 10; ++j) {
			if (j <= i) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}*/
/*
	for (int i{ 1 }; i <= 10; i++) {
		for (int j{ 10 }; j >= 1; j--) {
			if (j >= i) {
				std::cout << '*';
			}
		}
	std::cout << std::endl;
	}*/
	/*for (int i{ 1 }; i <= 10; i++) {
		int counter{ i };
		for (counter; counter >= 2; counter--) {
				std::cout << ' ';
		}
		for (int j{ 10 }; j >= 1; j--) {
			if (j >= i) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}*/
	for (int i{ 1 }; i <= 10; i++) {
		for (int k{ 10 }; k >= i; k--) {
			std::cout << ' ';
		}
		for (int j{ 1 }; j <= 10; j++) {
			if (j <= i) {
				std::cout << '*';
			}
		}
		std::cout << std::endl;
	}
}