/*Write a program that reads three nonzero integers and determines and prints whether they
could be the sides of a right triangle.*/

#include <iostream>

int main() {
	double first_side{};
	double second_side{};
	double third_side{};

	std::cout << "Enter a first side: " << std::endl;
	std::cin >> first_side;
	std::cout << "Enter a second side: " << std::endl;
	std::cin >> second_side;
	std::cout << "Enter a third side: ";
	std::cin >> third_side;

	if (first_side * first_side + second_side * second_side == third_side * third_side || first_side * first_side + third_side * third_side == second_side * second_side || second_side * second_side + third_side * third_side == first_side * first_side) {
		std::cout << "They could represent the sides of a rigt triangle: ";
	}
	else {
		std::cout << "They could not represent the sides of a right triangle: ";
	}
}