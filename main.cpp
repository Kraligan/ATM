#include <iostream>
#include "ATM.hpp"
#include "BankAcc.hpp"
#include "User.hpp"

//constructor ATM
ATM::ATM(int ID) 
	:m_ID(ID){
}

//constructor User
User::User(std::string name, BankAcc& account, int balance) 
	:m_name(name)
	,m_account(account) 
	,m_balance(balance)
	,m_pin(0)
{
}


//Constructor Bank account
BankAcc::BankAcc(int AccNum)
	:m_AccNum(AccNum)
	, m_Balance(0)
{
}


int main(int argc, char** argv) {

	ATM atm1(1); //First we create a new ATM.

	BankAcc acc_user1(101); // Then we create a bank account for the user.

	User user1("user1", acc_user1, 100); // Then we create a user and set his initial balance.
	user1.SetUserBalance();

	while (true) {
		user1.insertCard(atm1); // We simulate that the user inserts his card again and again in order to test many different test cases.

		std::cout << std::endl;
		continue;
	}


	return 0;
}