/*A mail order house sells five different products whose retail prices are : product 1 - $2. 98,
product 2 - $4.50, product 3 - $9.98, product 4 - $4.49 and product 5 - $6.87.Write a program that
reads a series of pairs of numbers as follows :
a) Product number
b) Quantity sold for one day
Your program should use a swi tch statement to help determine the retail price for each product.
	Your program should calculate and display the total retail value of all products sold last week.*/

#include <iostream>

int main() {
	int product_number{};
	int quantity{};
	double result{};

	while (std::cout << "Enter a product number (or -1 to end): " && std::cin >> product_number) {
		if (product_number == -1) {
			break;
		}
		std::cout << "Enter a quantity: ";
		std::cin >> quantity;

		switch (product_number)
		{
		case 1: result += quantity * 2.98; break;
		case 2: result += quantity * 4.50; break;
		case 3: result += quantity * 9.98; break;
		case 4: result += quantity * 4.49; break;
		case 5: result += quantity * 6.87; break;
		default:
			std::cout << "Error: ";
			break;
		}
	}
	std::cout << result;
}