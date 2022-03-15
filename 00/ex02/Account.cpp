/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:00:04 by jayi              #+#    #+#             */
/*   Updated: 2022/03/15 00:34:14 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void printNowTime(void)
{
	std::time_t time = std::time(NULL);
	struct tm *tm = std::localtime(&time);

	std::cout << "[";
	std::cout << tm->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_sec;
	std::cout << "] ";
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;

	printNowTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	printNowTime();
	std::cout << "accounts:";
	std::cout << Account::_nbAccounts << ";";
	std::cout << "total:";
	std::cout << Account::_totalAmount << ";";
	std::cout << "deposits:";
	std::cout << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:";
	std::cout << Account::_totalNbWithdrawals << std::endl;
}

Account::~Account(void)
{
	printNowTime();
	std::cout << "index:";
	std::cout << this->_accountIndex << ";";
	std::cout << "amount:";
	std::cout << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	printNowTime();
	std::cout << "index:";
	std::cout << this->_accountIndex << ";";
	std::cout << "p_amount:";
	std::cout << p_amount << ";";
	std::cout << "deposit:";
	std::cout << deposit << ";";
	std::cout << "amount:";
	std::cout << this->_amount << ";";
	std::cout << "nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		printNowTime();
		std::cout << "index:";
		std::cout << this->_accountIndex << ";";
		std::cout << "p_amount:";
		std::cout << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}

	int p_amount = this->_amount;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;

	printNowTime();
	std::cout << "index:";
	std::cout << this->_accountIndex << ";";
	std::cout << "p_amount:";
	std::cout << p_amount << ";";
	std::cout << "withdrawal:";
	std::cout << withdrawal << ";";
	std::cout << "amount:";
	std::cout << this->_amount << ";";
	std::cout << "nb_withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	printNowTime();
	std::cout << "index:";
	std::cout << this->_accountIndex << ";";
	std::cout << "amount:";
	std::cout << this->_amount << ";";
	std::cout << "deposits:";
	std::cout << this->_nbDeposits << ";";
	std::cout << "withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}
