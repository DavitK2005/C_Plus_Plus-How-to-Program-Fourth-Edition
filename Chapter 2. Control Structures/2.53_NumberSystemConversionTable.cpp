/*Write a program that prints a table of the binary, octal and hexadecimal equivalents of the
decimal numbers in the range 1 through 256. If you are not familiar with these number systems, read
Appendix C first.*/

#include <iostream>
#include <iomanip>
#include <string> 

int main() {
	std::cout << std::setw(10) << "Decimal" << 
		std::setw(10) << "Binary" << 
		std::setw(10) << "Octal" << 
		std::setw(15) << "Hexadecimal" << 
		std::endl;

	for (int number{ 1 }; number <= 256; number++) {
		std::cout << std::setw(10) << number;

		int copyOfTheNumber = number;
		std::string binary = {""};
		while (copyOfTheNumber > 0) {
				binary = char((copyOfTheNumber % 2) + '0') + binary;
				copyOfTheNumber = copyOfTheNumber / 2;
			}
		std::cout << std::setw(10) << binary <<
			std::setw(10) << std::oct << number <<
			std::setw(15) << std::hex << std::uppercase << number;
		std::cout << std::dec << std::endl;
	}
}
