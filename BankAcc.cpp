#include <iostream>
#include "BankAcc.hpp"


/*
* Methods used it Bank account class.
*/

//Method to get the balance value.
int BankAcc::GetBalance() {
	return m_Balance;
}

//Method to set the balance of the account
void BankAcc::SetBalance(int new_balance) {
	m_Balance = new_balance;
	std::cout << "Your new balance is " << new_balance << std::endl;
}

//Method for the balance initialization after creating a new account.
void BankAcc::SetBalance_init(int balance) {
	m_Balance = balance;
}

//Method to get the account number.
int BankAcc::GetAccNum() {
	return m_AccNum;
}