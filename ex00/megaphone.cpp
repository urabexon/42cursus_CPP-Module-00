/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:31:14 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/24 05:35:34 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv) {
	std::string str;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i = 1; argv[i]; i++)
			str += argv[i];
		for (std::size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
	}
	std::cout << str << std::endl;
	return 0;
}
