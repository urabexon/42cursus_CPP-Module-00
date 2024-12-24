/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:30:42 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 10:48:46 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);
	void	searchContact(void);
	
	private:
	Contact _contacts[8];
	int		_total_contacts;
};

#endif
