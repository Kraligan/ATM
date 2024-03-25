#pragma once
#include <iostream>
#include "BankAcc.hpp"
#include "ATM.hpp"

/*
Header file for the User class. This class is used to create new Users.
*/

class User {
public:
	User(std::string name, BankAcc& account, int balance);

	User(BankAcc& account);

	int insertCard(ATM& atm);

	std::string GetName();

	void SetUserBalance();

	void SetPIN(int new_pin);

private:
	std::string m_name;
	BankAcc m_account;
	int m_balance;
	int m_pin;

};