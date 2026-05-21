/*Write a program that displays the checkerboard pattern shown below.Your program must
use only three output statements, one of each of the following forms :
cout « "* "; 
cout « ' '; 
cout « endl;
********
 ********
********
 ********
********
 *****•**
********
 *********/

#include <iostream>

int main() {
	int counter{};

	while (counter < 4) {
		for (int i{ 1 }; i <= 8; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		std::cout << " ";
		for (int i{ 1 }; i <= 8; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		counter++;
	}
}