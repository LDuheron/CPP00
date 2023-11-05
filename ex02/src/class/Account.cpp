/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:54:43 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/05 18:01:40 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

// Constructor -----------------------------------------------------------------

Account::Account( int initial_deposit )
{
	_nbAccounts += 1;
	_totalNbDeposits += 1;
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}

// Destructor ------------------------------------------------------------------

Account::~Account( void )
{
}

// Accessors -------------------------------------------------------------------

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmounts);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void );
{
	return (_totalNbWithdrawals);
}

// Function --------------------------------------------------------------------


void	Account::displayAccountsInfos( void );
{
	std::cout << "index:" << this->_nbAccounts << ";amount:" << 42 << ";created";
}

void	Account::makeDeposit( int deposit );
bool	Account::makeWithdrawal( int withdrawal );
int		Account::checkAmount( void ) const;
void	Account::displayStatus( void ) const;

void	Account::_displayTimestamp( void )
{
	std::cout << gettimeoftheday();
}

