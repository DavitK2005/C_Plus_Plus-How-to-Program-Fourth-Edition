/*Using an approach similar to that in Exercise 2.20, find the two largest values among the 10
numbers.[Note:You must input each number only once.]*/

#include <iostream>

int main() {
	int counter{ 1 };
	double number{};
	double largest{};
	double second_largest{};

	while (counter <= 10) {
		std::cout << "Enter a number: ";
		std::cin >> number;

		if (number > largest) {
			second_largest = largest;
			largest = number;
		}
		else if (number > second_largest) {
			second_largest = number;
		}
		counter++;
	}
	std::cout << largest << "\t" << second_largest;
}