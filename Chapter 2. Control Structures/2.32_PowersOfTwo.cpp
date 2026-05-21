/*Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16, 32, 64, etc.Your
while loop should not terminate(i.e., you should create an infinite loop).What happens when you
run this program ?*/

#include <iostream>

int main() {

	int power{1};

	while (true)
	{
		std::cout << pow(2, power);
		power++;
	}
}