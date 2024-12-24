/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:53 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 10:59:31 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

// コンストラクタ
PhoneBook::PhoneBook(void) {
	_total_contacts = 0;
	return ;
}

// デストラクタ
PhoneBook::~PhoneBook(void) {
	return ;
}

// 新しい連絡先を追加する関数
void	PhoneBook::addContact(void){	
	if (_total_contacts == 8) {
		for (int i = 0; i < 7; i++)
			_contacts[i] = _contacts[i + 1];
	} else
		_total_contacts++;
	_contacts[_total_contacts - 1].setItems();
}

// タイトル出力
static	void	putTitle(void) {
	std::cout << "Id |FirstName| LastName | Nickname " << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}

// IDの入力が正しい形式かをチェックする
static	int	checkIdStr(const std::string &id_str) {
	for (size_t i = 0; i < id_str.length(); i++) {
		if (id_str[i] < '0' || id_str[i] > '9')
			return 0;
	}
	return 1;
}

// 連絡先を検索する関数
void	PhoneBook::searchContact(void) {
	std::string id_str;
	int id = 0;
	
	if (_total_contacts == 0) {
		std::cout << "contact does not exist!" << std::endl;
		return ;
	}
	putTitle();
	for (int i = 0; i < _total_contacts; i++) {
		_contacts[i].outputRestricted(i);
	}
	std::cout << "Enter the id of the search target: ";
	getline(std::cin, id_str);
	if (!checkIdStr(id_str) || id_str.empty()) {
		std::cout << "🚨only accepts positive integers🚨" << std::endl;
        return;
	}
	std::stringstream ss(id_str);
	ss >> id;
	if (id >= _total_contacts) {
		std::cout << "🚨This id does not exist🚨" << std::endl;
        return; 
	}
	std::cout << std::endl;
	_contacts[id].outputAll();
	std::cout << std::endl;
}
