/*(Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit purchased Manhattan for
$24.00 in barter.Did he make a good investment ? To answer this question, modify the compound
interest program of Fig. 2.21 to begin with a principal of $24.00 and to calculate the amount of interest on deposit if that money had been kept on deposit until this year(376 years through 2002).Run
the program with the interest rates 5 %, 6 %, 7 %, 8 %, 9 % and 10 % to observe the wonders of compound interest*/

#include <iostream>
using std::cout;
using std::endl;
using std::ios;
using std::fixed;

# include <iomanip> 

using std::setw;
using std::setprecision;

#include <cmath>

int main()
{
	double amount{};
	double principal = 24.00;

	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	cout << fixed << setprecision(2);

	for (double rate{ 0.05 }; rate <= 0.10; rate += 0.01) {
		std::cout << std::endl;
		std::cout << "Interest rate is: " << rate * 100 << std::endl;
		for (int year = 1; year <= 376; year++) {
			amount = principal * pow(1.0 + rate, year);
			cout << setw(4) << year
			<< setw(21) << amount << endl;
		}
	}
	return 0;
}