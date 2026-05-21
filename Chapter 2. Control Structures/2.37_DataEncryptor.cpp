/*A company wants to transmit data over the telephone, but is concerned that its phones could
be tapped.All of the data are transmitted as four - digit integers.The company has asked you to write
a program that encrypts the data so that it can be transmitted more securely.Your program should
read a four - digit integer and encrypt it as follows : Replace each digit by(the sum of that digit plus 7)
modulus 10. Then, swap the first digit with the third, swap the second digit with the fourth and print
the encrypted integer.Write a separate program that inputs an encrypted four - digit integer and decrypts it to form the original number.*/



/**************************************/
//Encrypted

/*#include <iostream>
#include <algorithm>


int main() {
	int input{};

	std::cout << "Enter a number: ";
	std::cin >> input;

	int digits[4]{};

	for (int i{ 3 }; i >= 0; i--) {
		digits[i] = input % 10;
		input = input / 10;
	}

	for (int i{}; i < 4; i++) {
		digits[i] = (digits[i] + 7) % 10;
	}

	std::swap(digits[0], digits[2]);
	std::swap(digits[1], digits[3]);

	std::cout << "Encrypted: " << std::endl;
	for (int i{}; i < 4; i++) {
		std::cout << digits[i];
	}
}*/

/**************************************/
//Decrypted

#include <iostream>
#include <algorithm>

int main() {
	int input{};

	std::cout << "Enter a number: ";
	std::cin >> input;

	int digits[4]{};

	for (int i{ 3 }; i >= 0; i--) {
		digits[i] = input % 10;
		input = input / 10;
	}
	std::swap(digits[0], digits[2]);
	std::swap(digits[1], digits[3]);

	for (int i{}; i < 4; i++) {
		digits[i] = (digits[i] - 7 + 10) % 10;
	}
	std::cout << "Decrypted: " << std::endl;
	for (int i{}; i < 4; i++) {
		std::cout << digits[i];
	}
}
