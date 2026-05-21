/*The examination - results program of Fig. 2. 11 assumes that any value input by the user that
is not a I must be a 2. Modify Fig. 2. 11 to validate its inputs.On any input, if the value entered is
other than 1 or 2, keep looping until the user enters a correct value.*/

#include <iostream>

int main() {
	int passes = 0;
	int failures = 0;
	int studentCounter = 0;
	int result{};

	while (studentCounter <= 10)
	{
		std::cout << "Enter result (1 = pass, 2 = fail): ";
		std::cin >> result;

		if (result == 1) {
			passes = passes + 1;
			studentCounter = studentCounter + 1;
		}
		else if (result == 2) {
			failures = failures + 1;
			studentCounter = studentCounter + 1;
		}
		else {
			std::cout << "Error: ";
			continue;
		}
	}
	std::cout << "Passed " << passes << std::endl;
	std::cout << "Failed " << failures << std::endl;

	if (passes > 8) {
		std::cout << "Raise tuition " << std::endl;
	}
	return 0;
}