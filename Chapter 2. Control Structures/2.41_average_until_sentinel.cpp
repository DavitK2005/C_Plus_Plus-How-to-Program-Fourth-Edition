/*Write a program that uses a for structure to calculate and print the average of several integers.Assume the last value read is the sentinel 9999.A typical input sequence might be
10 8 11 7 9 9999
indicating that the program should calculate the average of all the values preceding 9999.*/

#include <iostream>

int main() {
	int number{};
	int result{};

	for (int i{0}; i != 9999;) {
		std::cout << "Enter a number: ";
		std::cin >> number;
		if (number != 9999) {
			result += number;
			i++;
		}
		else {
			std::cout << "The result is: " << result / i;
			break;
		}
	}
}