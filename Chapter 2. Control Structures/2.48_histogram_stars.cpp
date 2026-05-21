/*One interesting application of computers is the drawing of graphs and bar charts(sometimes
	called "histograms").Write a program that reads five numbers(each between 1 and 30).For each
	number read, your program should print a line containing that number of adjacent asterisks.For example, if your program reads the number seven, it should print******* .*/

#include <iostream>

int main() {
	int number{};
	std::cout << "Enter a number between 1 and 30: ";
	std::cin >> number;

	for(int i{}; i < number; i++) {
		std::cout << '*';
	}
}