/*A palindrome is a number or a text phrase that reads the same backwards as forwards.For
example, each of the following five - digit integers is a palindrome : 1232 1, 55555, 45554 and 1 1 6 1 1.
Write a program that reads in a five - digit integer and determines whether it is a palindrome. (Hint :
	Use the division and modulus operators to separate the number into its individual digits.)*/

#include <iostream>
#include <string>

int main() {
	int five_digit_integer{};
	bool palindrome = true;


	std::cout << "Enter a five-digit integer: ";
	std::cin >> five_digit_integer;

	std::string copy = std::to_string(five_digit_integer);

	for (int i{0}; i < 5 / 2; i++) {
		if (copy[i] != copy[copy.length() - i - 1]) {
			palindrome = false;
			break;
		}
	}
	if (palindrome) {
		std::cout << "Integer is a palindrome";
	}
	else {
		std::cout << "Integer is not a palindrome";
	}
}