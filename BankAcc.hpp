#pragma once
#include <iostream>

/*
Header file for the Bank account class. This class is used to create Bank account object.
*/

class BankAcc {
public:
	BankAcc(int AccNum); //constructor

	int GetBalance();
	void SetBalance(int new_balance);
	void SetBalance_init(int balance);
	void SetPIN(int new_pin);

	int GetAccNum();

private:
	int m_Balance; 
	int m_AccNum;
};