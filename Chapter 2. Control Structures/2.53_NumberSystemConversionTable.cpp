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

	for (int i{ 1 }; i <= 256; i++) {
		std::cout << std::setw(10) << i;

		int n = i;
		std::string binary = {""};
		while (n > 0) {
				binary = char((n % 2) + '0') + binary;
				n = n / 2;
			}
		std::cout << std::setw(10) << binary <<
			std::setw(10) << std::oct << i <<
			std::setw(15) << std::hex << std::uppercase << i;
		std::cout << std::dec << std::endl;
	}
}