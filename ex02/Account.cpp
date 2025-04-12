#include "Account.hpp"
#include <iostream>
#include <ostream>

//Command for cut:
//cut -c 19- outpout.txt > outpout_cut.txt
//Command for compare :
//cmp -s ref.txt outpout_cut.txt && echo "Identique" || echo "Différent"
//diff -u ref.txt outpout_cut.txt

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int add_zero(int nb)
{
	if (nb < 10)
	{
		std::cout << "0";
	}
	return (nb);
}

void Account::_displayTimestamp(void)
{
	std::time_t time = std::time(&time);
	std::tm *local = std::localtime(&time);

	std::cout << "[";
	std::cout << local->tm_year + 1900;
	std::cout << add_zero(local->tm_mon + 1);
	std::cout << add_zero(local->tm_mday);
	std::cout << "_";
	std::cout << add_zero(local->tm_hour);
	std::cout << add_zero(local->tm_min);
	std::cout << add_zero(local->tm_sec);
	std::cout << "] ";
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

bool Account::makeWithdrawal(int withdrawals)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (withdrawals > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	std::cout << withdrawals;
	this->_amount -= withdrawals;
	_totalAmount -= withdrawals;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
