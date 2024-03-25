#include <iostream>
#include "ATM.hpp"
#include "BankAcc.hpp"

/*
* Methods used it ATM class.
*/

//Method to print the balance of the bank account on the ATM.
void ATM::SeeBalance(BankAcc& account)
{
	std::cout << "Your balance is " << account.GetBalance() << std::endl;
}

//Method to add money on the bank account.
void ATM::Deposit(BankAcc& account, int amount)
{
	int new_amount = 0;
	new_amount = account.GetBalance() + amount;
	account.SetBalance(new_amount);
}

//Method to remove money from the bank account.
void ATM::Withdraw(BankAcc& account, int amount)
{
	int new_amount = 0;
	new_amount = account.GetBalance() - amount;
	account.SetBalance(new_amount);
}
