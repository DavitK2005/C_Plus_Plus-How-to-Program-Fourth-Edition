/*One large chemical company pays its salespeople on a commission basis.The salespeople
receive $200 per week plus 9 percent of their gross sales for that week.For example, a salesperson
who sells $5000 worth of chemicals in a week receives $200 plus 9 percent of $5000, or a total of
$650.Develop a C++ program that uses a whi Ie structure to input each salesperson's gross sales for 
last week and calculate and display that salesperson's earnings. Process one salesperson's figures at
a time.*/

#include <iostream>

int main() {
	int salary_per_week{ 200 };
	int gross_sales{};

	while (gross_sales != -1) {
		std::cout << "Enter sales in dollars (-1 to end) : ";
		std::cin >> gross_sales;

		if (gross_sales != -1 && gross_sales != 0) {
			std::cout << "Salary is: " << salary_per_week + (gross_sales * 9) / 100 << std::endl;
		}
	}
}