/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:46 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 19:14:31 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <sstream> // std::ostringstream

// コンストラクタ(オブジェクト生成時に自動的に呼び出される。初期化)
Contact::Contact(void) {
	return ;
}

// デストラクタ(オブジェクト破棄時に自動的に呼び出される。メモリ開放や外部リソースクリーンアップ目的)
Contact::~Contact(void) {
	return ;
}

// Contactクラスの各データメンバーに値を設定するための関数
bool	Contact::setItems(void) {
	std::cout << "Please enter the following." << std::endl;
	std::cout << "First Name :" << std::endl;
	getline(std::cin, FirstName);
	if (FirstName.empty()) {
		std::cout << "FirstName is empty! Please enter something!" << std::endl;
		return false;
	}
	std::cout << "Last Name :" << std::endl;
	getline(std::cin, LastName);
	if (LastName.empty()) {
		std::cout << "LastName is empty! Please enter something!" << std::endl;
		return false;
	}
	std::cout << "NickName :" << std::endl;
	getline(std::cin, NickName);
	if (NickName.empty()) {
		std::cout << "NickName is empty! Please enter something!" << std::endl;
		return false;
	}
	std::cout << "Phone Number :" << std::endl;
	getline(std::cin, PhoneNumber);
	if (PhoneNumber.empty()) {
		std::cout << "PhoneNumber is empty! Please enter something!" << std::endl;
		return false;
	}
	std::cout << "Darker Secret :" << std::endl;
	getline(std::cin, DarkestSecret);
	if (DarkestSecret.empty()) {
		std::cout << "DarkerSecret is empty! Please enter something!" << std::endl;
		return false;
	}
	std::cout << "Thank you for registering!" << std::endl;
	return true;
}

// Contactクラスに格納された全てのデータを出力する関数
void	Contact::outputAll(void) {
	std::cout << "First Name    :" << FirstName << std::endl;
	std::cout << "Last Name     :" << LastName << std::endl;
	std::cout << "NickName      :" << NickName << std::endl;
	std::cout << "Phone Number  :" << PhoneNumber << std::endl;
	std::cout << "Darker Secret :" << DarkestSecret << std::endl;
}

// 文字列を最大10文字に制限して、右揃えで出力する関数
// 文字列が10文字以上の場合、9文字目以降を切り捨てて、末尾に.を追加する
static void printLimit(int index) {
	std::ostringstream oss;
	oss << index;
	std::string index_str = oss.str();
	std::cout << "Index: " << index_str << std::endl;
}

static void printLimit(const std::string &str) {
	std::cout << str << std::endl;
}

// Contactクラスのデータを簡略表示する関数
void	Contact::outputRestricted(int index) {
	printLimit(index);
	std::cout << "|";
	printLimit(FirstName);
	std::cout << "|";
	printLimit(LastName);
	std::cout << "|";
	printLimit(NickName);
	std::cout << std::endl;
}
