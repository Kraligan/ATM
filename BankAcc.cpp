#include <iostream>
#include "BankAcc.hpp"

int BankAcc::GetBalance() {
	return m_Balance;
}


void BankAcc::SetBalance(int new_balance) {
	m_Balance = new_balance;
	std::cout << "Your new balance is " << new_balance << std::endl;
}

void BankAcc::SetBalance_init(int balance) {
	m_Balance = balance;
}

int BankAcc::GetAccNum() {
	return m_AccNum;
}