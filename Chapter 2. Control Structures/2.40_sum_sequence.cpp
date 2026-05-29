/*Write a program that uses a for structure to sum a sequence of integers.Assume that the
first integer read specifies the number of values remaining to be entered.Your program should read
only one value per input statement.A typical input sequence might be
5 100 200 300 400 500
where the 5 indicates that the subsequent 5 values are to be summed.*/

#include <iostream>

int main() {
	int quantityOfNumbers{};

	std::cout << "Enter a quantity of numers: ";
	std::cin >> quantityOfNumbers;

	int counter{};
	int number{};
	int sum{};
	for (;counter < quantityOfNumbers;)
	{
		std::cout << "Enter a number: ";
		std::cin >> number;
		sum += number;
		counter++;
	}
	std::cout << "The quantity of numbers is: " << quantityOfNumbers << std::endl << "The sum of sequence is: " << sum;
}
