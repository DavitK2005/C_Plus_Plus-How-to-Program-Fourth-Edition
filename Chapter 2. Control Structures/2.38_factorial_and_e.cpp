/*The factorial of a nonnegative integer n is written n!(pronounced "n factorial") and is defined as follows :
n!= n·(n - I)·(n - 2)· ...
·1(for values of n greater than to 1)
and
n!= I(for n = 0 or n = 1).
For example, 5!= 5·4·3·2·1, which is 120. Use while structures in each of the following :
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
b) Write a program that estimates the value of the mathematical constant e by using the formula:
c) Write a program that computes the value of ex by using the formula*/


//*************************************
//a)

/*#include <iostream>

int main() {
	unsigned int nonnegative_integer{};
	
	std::cout << "Enter a nonnegative integer: ";
	std::cin >> nonnegative_integer;

	long long result{1};
	unsigned int i{};

	while(i < nonnegative_integer) {
			result *= (nonnegative_integer - i);
			i++;
	}
	std::cout << result;
}*/

//*************************************
//b)

/*#include <iostream>

int main() {
	unsigned int input{};

	std::cout << "Enter a n: ";
	std::cin >> input;

	double result{ 1.0 };
	long long factorial{ 1 };
	unsigned int i{1};
	
	while (i <= input) 
	{
		factorial *= i;

		result += 1.0 / factorial;
		i++;
	}
	std::cout <<"The result is: " << result;
}*/

//*************************************
//c)

#include <iostream>

int main() {
	unsigned int input_n{};
	int input_power{};

	std::cout << "Enter a n: ";
	std::cin >> input_n;
	std::cout << "Enter a power: ";
	std::cin >> input_power;

	double result{ 1.0 };
	long long factorial(1);
	unsigned int i{ 1 };
	double power{1.0};

	while (i <= input_n)
	{
		power *= input_power;
		factorial *= i;
		result += power / factorial;

		i++;
	}
	std::cout << "Result is: " << result;
}
