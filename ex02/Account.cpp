/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:13:23 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 17:32:47 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// メンバー変数初期化
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// コンストラクタ
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount" << initial_deposit << ";created" << std::endl;
}

// デストラクタ
Account:: ~Account(void) {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount" << _amount << ";closed" << std::endl;
}

// 口座数を表示する関数
int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

// 合計金額を表示する関数
int	Account::getTotalAmount(void) {
	return _totalAmount;
}

// 預け入れ数を表示する関数
int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

// 引き出し回数を表示する関数
int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

// 口座情報を表示する関数 
void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// 会員が入金するための関数
void	Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// 会員が出金するための関数
bool	Account::makeWithdrawal(int withdrawal) {
	if (_amount < withdrawal) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    } else {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}

// 金額をチェックする関数
int		Account::checkAmount(void) const {
	return _amount;
}

// 口座状況(アカウントのステータス)を表示するための関数
void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// タイムスタンプを表示するprivate関数
void	Account::_displayTimestamp(void) {
	time_t	t_stmp_ptr;
	struct	tm	*t_stmp;

	std::time(&t_stmp_ptr);
	t_stmp = localtime(&t_stmp_ptr);
	std::cout << "[";
	std::cout << t_stmp->tm_year + 1990;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_sec;
	std::cout << "] ";
}
