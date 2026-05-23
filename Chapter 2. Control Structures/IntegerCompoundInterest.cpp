/*Modify the program in Fig. 2.21 so it uses only integers to calculate the compound interest.
[Hint:Treat all monetary amounts as integral numbers of pennies.Then "break" the result into its dollar portion and cents portion by using the division and modulus operations.Insert a period.]*/

#include <iostream>
#include <iomanip> 

using std::cout;
using std::endl;
using std::setw;

int main()
{
	int principal = 100000;
	int amount = principal;

	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	for (int year = 1; year <= 10; year++) {
		amount = amount * 105/100;

		int dollars = amount / 100;
		int cents = amount % 100;


		// output one table row 
		cout << setw(4) << year
			<< setw(21) << dollars << '.';

		cout << cents << endl;
	}
	return 0;
}