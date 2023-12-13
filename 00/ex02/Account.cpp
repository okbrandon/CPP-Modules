/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:50:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:30:23 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* Global variables initialization */
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/**
 * @brief Construct a new Account:: Account object
 *
 * @param initial_deposit				- Initial cash amount in account
 */
Account::Account(int initial_deposit) {
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "amount:" << this->_amount << ";" \
			<< "created" << std::endl;
}

/**
 * @brief Destroy the Account:: Account object
 */
Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "amount:" << this->_amount << ";" \
			<< "closed" << std::endl;
}

/**
 * @brief Function used to get how many accounts are registered
 *
 * @return int				- Registered accounts count
 */
int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

/**
 * @brief Function used to get how much money does the bank have in total
 *
 * @return int				- Total amount of money
 */
int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

/**
 * @brief Function used to get how many deposits were made
 *
 * @return int				- Total amount of deposits
 */
int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

/**
 * @brief Function used to get how many withdrawals were made
 *
 * @return int				- Total amount of withdrawals
 */
int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

/**
 * @brief Function used to get current account's money amount
 *
 * @return int				- Total amount of money
 */
int	Account::checkAmount(void) const {
	return (this->_amount);
}

/**
 * @brief Function used to display the current timestamp
 */
void	Account::_displayTimestamp(void) {
	time_t		time = std::time(0);
	tm			*localtime = std::localtime(&time);
	const char	originalFill = std::cout.fill();

	std::cout << std::setfill('0') << "["
			<< 1900 + localtime->tm_year
			<< std::setw(2) << 1 + localtime->tm_mon
			<< std::setw(2) << localtime->tm_mday
			<< "_"
			<< std::setw(2) << localtime->tm_hour
			<< std::setw(2) << localtime->tm_min
			<< std::setw(2) << localtime->tm_sec
			<< std::setfill(originalFill) << "] ";
}

/**
 * @brief Function used to make a deposit of money
 *
 * @param deposit				- Total amount to deposit
 */
void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "p_amount:" << this->_amount << ";" \
			<< "deposit:" << deposit << ";";

	/* Editing variables */
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	this->_amount += deposit;

	std::cout << "amount:" << this->_amount << ";" \
			<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

/**
 * @brief Function used to make a withdrawal of money
 *
 * @param withdrawal			- Total amount to withdraw
 * @return true					- If the account has enough funds
 * @return false 				- If the account doesn't have enought funds
 */
bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "p_amount:" << this->_amount << ";" \
			<< "withdrawal:";

	/* Checking withdrawal validity */
	if (this->_amount >= withdrawal)
	{
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		std::cout << withdrawal << ";" \
				<< "amount:" << this->_amount << ";" \
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

/**
 * @brief Function used to display the status of the current account
 */
void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "amount:" << this->_amount << ";" \
			<< "deposits:" << this->_nbDeposits << ";" \
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

/**
 * @brief Function used to display bank's informations
 */
void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" \
			<< "total:" << getTotalAmount() << ";" \
			<< "deposits:" << getNbDeposits() << ";" \
			<< "withdrawals:" << getNbWithdrawals() << std::endl;
}