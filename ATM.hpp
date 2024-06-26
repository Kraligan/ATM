#pragma once
#include <iostream>
#include "BankAcc.hpp"

/*
Header file for the ATM class. This class is used to create ATM object.
*/
class ATM {
public:
	ATM(int ID); //constructor

	void SeeBalance(BankAcc& account);
	void Deposit(BankAcc& account, int amount);
	void Withdraw(BankAcc& account, int amount);

private:
	int m_ID; //ID of the ATM

};