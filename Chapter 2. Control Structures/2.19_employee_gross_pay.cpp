/*Develop a C++ program that uses a while structure to determine the gross pay for each of
several employees.The company pays "straight-time" for the first 40 hours worked by each employee
and pays "time-and-a-half' for all hours worked in excess of 40 hours. You are given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of 
each employee.Your program should input this information for each employee and should determine
and display the employee's gross pay. */

#include <iostream>

int main() {
	int hours_worked{};
	double hourly_rate{};
	while(hours_worked != -1) {
		std::cout << "Enter a hours worked (-1 to end): ";
		std::cin >> hours_worked;
		if (hours_worked != -1) {
			std::cout << "Enter hourly rate of the worker ($00.00): ";
			std::cin >> hourly_rate;
			if (hours_worked < 40) {
				std::cout << "Salary is:" << hours_worked * hourly_rate << std::endl;
		}
			else {
				std::cout << "Salary is: " << hours_worked * hourly_rate + ((hourly_rate / 2) * (hours_worked - 40)) << std::endl;
			}
		}
	}
}