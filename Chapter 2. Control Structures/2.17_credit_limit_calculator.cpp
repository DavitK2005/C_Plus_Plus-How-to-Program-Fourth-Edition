/*Develop a C++ program that will determine whether a department - store customer has exceeded the credit limit on a charge account.For each customer, the following facts are available :
a) Account number(an integer)
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month 
e) Allowed credit limit
The program should use a while structure to input each of these facts, calculate the new balance(= beginning balance + charges - credits) and determine whether the new balance exceeds the
customer's credit limit. For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the message "Credit limit 
exceeded." */

#include <iostream>

int main() {
	int account_number{};
	double balance{};
	double total_all_items{};
	double total_all_credits{};
	double credit_limit{};

	while (account_number != -1) {
			std::cout << "Enter account number (-1 to end): ";
			std::cin >> account_number;
		if (account_number != -1) {
			std::cout << "Enter beginning balance: ";
			std::cin >> balance;
			std::cout << "Enter total charges: ";
			std::cin >> total_all_items;
			std::cout << "Enter total credits: ";
			std::cin >> total_all_credits;
			std::cout << "Enter credit limit: ";
			std::cin >> credit_limit;
		if ((balance + total_all_items - total_all_credits) > credit_limit) {
			std::cout << "Account: " << account_number << std::endl;
			std::cout << "Credit limit: " << credit_limit << std::endl;
			std::cout << "Balance: " << balance + total_all_items - total_all_credits << std::endl;
			std::cout << "Credit limit exceeded. " << std::endl;
			}
		}
	}
}