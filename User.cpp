#include <iostream>
#include "BankAcc.hpp"
#include "user.hpp"
#include "ATM.hpp"

int User::insertCard(ATM& atm) {
	if (m_pin == 0) {
		int new_pin = 0;
		std::cout << "Hello " << GetName() << ". Your just created a new account in our bank, so please create a new PIN." << std::endl;
		std::cin >> new_pin;
		SetPIN(new_pin);
	}
	else {
		int pin = 0;
		std::cout << "Enter pin ****" << std::endl;
		std::cin >> pin;
		if (pin == m_pin) {

			int user_entry = 0;
			std::cout << "Hello " << GetName() << std::endl;
			std::cout << "select your account." << std::endl;
			std::cout << m_account.GetAccNum() << std::endl;
			std::cin >> user_entry;
			int try_number = 3;
			while (user_entry != m_account.GetAccNum() && try_number>0) {	
				try_number -= 1;
				if (try_number == 0) {
					std::cerr << "You tried too many times. Bye bye." << std::endl;
					return -1;
				}
				std::cout << "This account doesnt exist. Select an existing account." << std::endl;
				std::cout << "You have "<<try_number<<" try left." << std::endl;
				std::cin >> user_entry;
			}
			std::cout << "Press 1 to see your Balance, Press 2 to for a Deposit or press 3 for a withdraw : ";
			int enter = 0;
			std::cin >> enter;
			if (enter == 1) {
				atm.SeeBalance(m_account);
			}
			else if (enter == 2) {
				std::cout << "how much do you want to insert?" << std::endl;
				int amount = 0;
				std::cin >> amount;
				atm.Deposit(m_account, amount);
			}
			else if (enter == 3) {
				std::cout << "how much do you want to withdraw?" << std::endl;
				int amount = 0;
				std::cin >> amount;
				atm.Withdraw(m_account, amount);
			}
			else {
				std::cerr << "Error, enter 1, 2 or 3!!!" << std::endl;
				std::cerr << "Exiting..." << std::endl;
			}
		}
		else {
			std::cerr << "Error, pin number not correct. Try again!" << std::endl;
			return -1;
		}
		std::cout << "Thank you for using our ATM, see you soon "<< GetName() << std::endl;
		return 0;
	}	
}

std::string User::GetName() {
	return m_name;
}

void User::SetUserBalance() {
	m_account.SetBalance_init(m_balance);
}

void User::SetPIN(int new_pin) {
	m_pin = new_pin;
}