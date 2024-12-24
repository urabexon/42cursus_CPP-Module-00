/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:46 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 09:12:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

// コンストラクタ(オブジェクト生成時に自動的に呼び出される。初期化)
Contact::Contact(void) {
	return ;
}

// デストラクタ(オブジェクト破棄時に自動的に呼び出される。メモリ開放や外部リソースクリーンアップ目的)
Contact::~Contact(void) {
	return ;
}

// Contactクラスの各データメンバに値を設定するための関数
void	Contact::setItems(void) {
	std::cout << "Please enter the following." << std::endl;
	std::cout << "First Name :" << std::endl;
	getline(std::cin, FirstName);
	std::cout << "Last Name :" << std::endl;
	getline(std::cin, LastName);
	std::cout << "NickName :" << std::endl;
	getline(std::cin, NickName);
	std::cout << "Phone Number :" << std::endl;
	getline(std::cin, PhoneNumber);
	std::cout << "Darker Secret :" << std::endl;
	getline(std::cin, DarkestSecret);
	std::cout << "Thank you for registering!" << std::endl;
	
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
static void printLimit(const std::string& s) {
    if (s.length() > 10) {
        std::cout << s.substr(0, 9) << ".";
    } else {
        std::cout << std::string(10 - s.length(), ' ') << s;
    }
}

// Contactクラスのデータを簡略表示する関数
void	Contact::outputRestricted(int index) {
	printLimit(std::to_string(index));
	std::cout << "|";
	printLimit(FirstName);
	std::cout << "|";
	printLimit(LastName);
	std::cout << "|";
	printLimit(NickName);
	std::cout << std::endl;
}
