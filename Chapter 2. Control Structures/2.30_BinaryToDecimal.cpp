/*Input an integer containing only Os and Is(i.e., a "binary" integer) and print its decimal
equivalent.Use the modulus and division operators to pick off the "binary" number's digits one at a 
time from right to left.Much like in the decimal number system, where the rightmost digit has a positional value of 1, the next digit left has a positional value of 1 0, then 100, then 1000, and so on, in
the binary number system, the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then 8, and so on.Thus the decimal number 234 can be interpreted as 4 *
I + 3 * 10 + 2 * 100. The decimal equivalent of binary 1 1 01 is I * I + 0 * 2 + I * 4 + I * 8 or I + 0
+ 4 + 8, or 13.[Note:The reader not familiar with binary numbers might wish to refer to Appendix C.]*/

#include <iostream>
#include <string>

int main() {
	std::string input{};
	
	std::cout << "Enter a binary number (1 or 0)";
	std::cin >> input;

	int decimal{};

	for (char ch : input) {
		decimal = decimal * 2 + (ch - '0');
	}
	std::cout << decimal;
}