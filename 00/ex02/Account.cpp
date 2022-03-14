/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:00:04 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 12:33:14 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	printNowTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	this->_nbDeposits = initial_deposit;
}

void	Account::displayAccountsInfos(void)
{
	
}

Account::~Account(void)
{
	
}

void	Account::makeDeposit(int deposit)
{
	std::cout << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << withdrawal << std::endl;
	return true;
}

int		Account::checkAmount(void) const
{
	return 1;
}

void	Account::displayStatus(void) const
{
	
}
