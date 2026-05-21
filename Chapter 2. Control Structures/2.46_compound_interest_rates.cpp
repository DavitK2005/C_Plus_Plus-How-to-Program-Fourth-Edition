/*Modify the compound - interest program of Section 2. I 5 to repeat its steps for the interest
rates 5 percent, 6 percent, 7 percent, 8 percent, 9 percent and 10 percent.Use a for loop to vary the
interest rate.*/

#include <iostream>
using std::cout;
using std::endl;
using std::ios;
using std::fixed;
# include < iomanip> 
using std::setw;
using std::setprecision;
#include <cmath>
int main()
{
	double amount;
	double principal = 1000.0;
	double rate = .05; // rate = .06; rate = .07; rate = .08; rate = .09; rate = .10;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	cout << fixed << setprecision(2);
		for (int year = 1; year <= 10; year++) {
				amount = principal * pow(1.0 + rate, year);
			// output one table row 
			cout << setw(4) << year
				<< setw(21) << amount << endl;
		}
	return 0;
}