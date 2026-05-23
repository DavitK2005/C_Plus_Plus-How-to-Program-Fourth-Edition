/*Calculate the value of 1t from the infinite series
Print a table that shows the value of 1t approximated by 1 term of this series, by two terms, by three
terms, etc.How many terms of this series do you have to use before you first get 3.14 ? 3.141 ?
3. 1415 ? 3. 14159 ?*/

#include <iostream>
#include <iomanip>

int main() {
	double long p = 4.0;
	std::cout << "\t" << "0" << " term:  " << p << std::endl;
	int counter_odd{1};
	while(true) {
		for (int i{ 3 }; counter_odd <= 4; i = i + 2) {
			if (counter_odd % 2 == 0) {
				p += (4.0 / i);
			}
			else if (counter_odd % 2 != 0) {
				p -= (4.0 / i);
			}
			std::cout << "\t" << counter_odd << " term:  " << p << std::endl;
			counter_odd++;
		}
	}
}