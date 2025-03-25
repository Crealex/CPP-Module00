/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:01:24 by atomasi           #+#    #+#             */
/*   Updated: 2025/03/25 16:42:34 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	display_help(void)
{
	std::cout << ITALIC <<"For use your phone book tap :" << RESET << std::endl;
	std::cout << BOLD << "ADD : " << RESET << "for add a new contact" << std::endl;
	std::cout << BOLD << "SEARCH : " << RESET << "for search a contact by id" << std::endl;
	std::cout << BOLD << "EXIT : " << RESET << "for exit and loose all contacts" << std::endl;
	std::cout << BOLD << "HELP : " << RESET << "for display this message" << std::endl << std::endl;
}

int main()
{
	std::string buffer;

	std::cout << std::endl << "Welcome in your Awesome PhoneBook !" << std::endl << std::endl;
	display_help();
	while (1)
	{
		std::cin >> buffer;
		if (!buffer.compare("ADD"))
			std::cout << "adding contact..." << std::endl;
		else if (!buffer.compare("SEARCH"))
			std::cout << "searching contact..." << std::endl;
		else if (!buffer.compare("EXIT"))
			std::cout << "exiting programm" << std::endl;
		else if (!buffer.compare("HELP"))
			display_help();
		if (buffer.empty())
			break;
		buffer.clear();
	}
	return (0);
}