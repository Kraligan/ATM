#include <iostream>
#include "ATM.hpp"
#include "BankAcc.hpp"

void ATM::SeeBalance(BankAcc& account)
{
	std::cout << "Your balance is " << account.GetBalance() << std::endl;
}

void ATM::Deposit(BankAcc& account, int amount)
{
	int new_amount = 0;
	new_amount = account.GetBalance() + amount;
	account.SetBalance(new_amount);
}

void ATM::Withdraw(BankAcc& account, int amount)
{
	int new_amount = 0;
	new_amount = account.GetBalance() - amount;
	account.SetBalance(new_amount);
}
