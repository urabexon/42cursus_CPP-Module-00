/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:49 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 08:56:34 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void) {
	std::string prompt;
	PhoneBook phonebook;
	
	while(1) {
		std::cout << "ENTER [ADD SEARCH EXIT]:" << std::endl;
		std::cout << "> ";
		// 入力が閉じられた場合終了する
		if (!getline(std::cin, prompt)) {
			std::cout << "Exiting the PhoneBook application. Goodbye!" << std::endl;
			break;
		}
		if (prompt == "ADD")
			phonebook.addContact();
		else if (prompt == "SEARCH")
			phonebook.searchContact();
		else if (prompt == "EXIT") {
			std::cout << "Exiting the PhoneBook application. Goodbye!" << std::endl;
			break;
		} else if (prompt != "")
			std::cout << "🚨Nothing is being entered!!🚨" << std::endl;
	}
	return 0;
}