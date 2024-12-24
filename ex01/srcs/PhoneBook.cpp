/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:53 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 07:59:31 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	PhoneBook::addContact(void){
	int	i = 0;
	
	if (_total_contacts == 8) {
		while (i < 7) {
			_contacts[i] = _contacts[i + 1];
			i++;
		}
		_contacts[_total_contacts - 1].setItems();
	} else {
		_total_contacts++;
		_contacts[_total_contacts - 1].setItems();
	}
}

void	putTitle(void) {
	std::cout << "Id |FirstName| LastName | Nickname " << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}


void	PhoneBook::searchContact(void) {
	std::string id_str;
	int i = 0, fd = 0;
	
	if (_total_contacts == 0) {
		std::cout << "contact does not exist!" << std::endl;
		return ;
	}
	putTitle();
	while (i < _total_contacts) {
		_contacts[i]
	}	
}

