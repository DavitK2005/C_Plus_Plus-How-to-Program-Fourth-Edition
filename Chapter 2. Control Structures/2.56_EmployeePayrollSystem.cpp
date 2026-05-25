/*A company pays its employees as managers(who receive a fixed weekly salary), hourly
workers(who receive a fixed hourly wage for up to the first 40 hours they work and "time-and-a half'-1.5 times their hourly wage-for overtime hours worked), commission workers (who receive 
	$250 plus 5.7 % of their gross weekly sales), or pieceworkers(who receive a fixed amount of money
		per item for each of the items they produce - each pieceworker in this company works on only one
		type of item).Write a program to compute the weekly pay for each employee.You do not know the
	number of employees in advance.Each type of employee has its own pay code : Managers have paycode 1, hourly workers have code 2, commission workers have code 3 and pieceworkers have code
	4. Use a switch to compute each employee's pay according to that employee's paycode.Within the
	switch, prompt the user(i.e., the payroll clerk) to enter the appropriate facts your program needs
		to calculate each employee's pay according to that employee's pay code.*/

#include <iostream>

int main() {
	int pay_code{};
	std::cout << "Enter a paycode: ";
	std::cin >> pay_code;
	while (pay_code != -1) {
		
		switch (pay_code) {
		case 1: {
			std::cout << "You are a manager: " << std::endl;
			double weekly_salary{};
			std::cout << "Enter a weekly salary: ";
			std::cin >> weekly_salary;
			std::cout << "Weekly salary is: " << weekly_salary << std::endl;
			break;
		}
		case 2: {
			std::cout << "You are a hourly worker: " << std::endl;
			double hourly_wage{};
			double hours_worked{};

			std::cout << "Enter a hourly salary: ";
			std::cin >> hourly_wage;
			std::cout << "Enter a hours worked: ";
			std::cin >> hours_worked;

			if (hours_worked > 40) {
				std::cout << "Your salary is: " << (hourly_wage * 40) + (hours_worked - 40) * hourly_wage * 1.5 << std::endl;
			}
			else { 
				std::cout << "Your salary is: " << hourly_wage * hours_worked << std::endl; 
			}

			break;
		}
		case 3: {
			std::cout << "You are a commission worker: " << std::endl;
			int fixed_salary{ 250 };
			double gross_weekly_sales{};

			std::cout << "Enter a gross weekly sales: ";
			std::cin >> gross_weekly_sales;

			std::cout << "Your salary is: " << fixed_salary + ((gross_weekly_sales * 5.7) / 100) << std::endl;

			break;
		}
		case 4: {
			std::cout << "You are a pieceworker: " << std::endl;
			int item_quantity{};
			double price_per_item{};

			std::cout << "Enter a item_quantity: ";
			std::cin >> item_quantity;

			std::cout << "Enter a price per item: ";
			std::cin >> price_per_item;

			std::cout << "Your salary is: " << item_quantity * price_per_item << std::endl;
			break;
		}
		default:
			std::cout << "Invalid paycode" << std::endl;
			break;
		}
		std::cout << "Enter a paycode: ";
		std::cin >> pay_code;
	}
}