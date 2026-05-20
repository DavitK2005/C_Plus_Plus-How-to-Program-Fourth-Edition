/*
Drivers are concerned with the mileage obtained by their automobiles.One driver has kept
track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.Develop a C++ program that uses a while structure to input the miles driven and gallons used for each
tankful.The program should calculate and display the miles per gallon obtained for each tankful.After processing all input information, the program should calculate and print the combined miles per
gallon obtained for all tankfuls.
Enter the gallons used(-1 to end) : 12 .8
Enter the mi les driven : 28*/

#include <iostream>

int main() {
	double miles{};
	double gallons{};
	double overall_miles{};
	double overall_gallons{};


	while (gallons != -1) {
		
		std::cout << "Enter the gallons used (-1 to end)";
		std::cin >> gallons;
		if (gallons != -1)
		{
			overall_gallons += gallons;

			std::cout << "Enter the miles driven";
			std::cin >> miles;
			overall_miles += miles;

			if (gallons != 0) {
				std::cout << miles / gallons << std::endl;
			}
			else {
				std::cout << "Error";
			}
		}
	}
	if (overall_gallons != 0){
		std::cout << overall_miles / overall_gallons;
	}
	else {
		std::cout << "Error";
	}
}
