/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:13:23 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 16:13:59 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// コンストラクタ
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += inital_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount" << inital_deposit << ";created" << std::endl;
}

// デストラクタ
Account:: ~Account() {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount" << _amount << ";closed" << std::endl;
}

// Pravate 