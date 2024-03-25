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

	ATM atm1(1);

	BankAcc acc_user1(101);
	BankAcc acc_user2(201);

	User user1("user1", acc_user1, 100);
	user1.SetUserBalance();

	User user2("user2", acc_user2, 26);
	user2.SetUserBalance();

	while (true) {
		user1.insertCard(atm1);

		std::cout << std::endl;
		continue;
	}


	return 0;
}