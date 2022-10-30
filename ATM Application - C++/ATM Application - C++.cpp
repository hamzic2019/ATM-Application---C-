#include <iostream>
using namespace std;


void greetUser() {
	std::cout << "**********************" << std::endl;
	std::cout << "Welcome to Haris's ATM" << std::endl;
	std::cout << "1. Show Balance" << std::endl;
	std::cout << "2. Deposit money" << std::endl;
	std::cout << "3. Widthdraw money" << std::endl;
	std::cout << "**********************\n" << std::endl;
}


int main() {
	
	double balance = 500.00;
	int userChoice;

	greetUser();
	
	do {

		
		std::cout << "\nWhat do you want to do: " << endl;
		std::cin >> userChoice;

		switch (int(userChoice)) {
		case 1:
			std::cout << "Your current balance is: " << balance << ".00$" << endl;
			break;
		case 2:
			double depositMoney;
			std::cout << "Enter amount you want to deposit: " << std::endl;
			std::cin >> depositMoney;
			balance += depositMoney;
			break;
		case 3:
			double withdrawMoney;
			std::cout << "Enter amount you want to withdraw: " << std::endl;
			std::cin >> withdrawMoney;
			if (withdrawMoney > balance) {
				std::cout << "We are sorry but you dont have enough money on your account" << std::endl;
				break;
			}
			else {
				balance -= withdrawMoney;
				break;
			}
			
			
		case 4: cout << "ATM EXIT" << endl; break;
		default: cout << "ATM EXIT" << endl; break;
		}
	} while (userChoice <= 4);

	return 0;
}