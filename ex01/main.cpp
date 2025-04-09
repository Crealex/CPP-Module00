/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:01:24 by atomasi           #+#    #+#             */
/*   Updated: 2025/04/09 16:05:18 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "PhoneBook.hpp"
void animate_msg(std::string msg)
{
	std::string colors[] = {
		RED, // rouge
		YELLOW, // jaune
		GREEN, // vert
		CYAN, // cyan
		BLUE, // bleu
		MAGENTA, // magenta
	};
	int shift = 70;

	while (shift < 140)
	{
		std::cout.flush() << "\033[2J\033[1;1H";
		for (int i = 0; i < (int)msg.length(); i++)
		{
			std::cout.flush() << colors[((i - shift) % 6) * -1] << msg[i];
		}
		std::cout << RESET;
		usleep(70000);
		shift++;
	}
	std::cout << std::endl;
}

void	display_help(void)
{
	std::cout << FAINT << "----------------------------------------" << std::endl << RESET;
	std::cout << ITALIC <<"For use your phone book tap :" << RESET << std::endl;
	std::cout << BOLD << "ADD : " << RESET << "to add a new contact" << std::endl;
	std::cout << BOLD << "SEARCH : " << RESET << "to search a contact by id" << std::endl;
	std::cout << BOLD << "EXIT : " << RESET << "to exit and lose all contacts" << std::endl;
	std::cout << BOLD << "HELP : " << RESET << "to display this message" << std::endl;
	std::cout << FAINT << "----------------------------------------" << std::endl << RESET;
}

int main()
{
	std::string buffer;
	PhoneBook phonebook;
	int id = 0;
	int id_max = 0;

	animate_msg("Welcome in your Awesome PhoneBook !");
	display_help();

	while (1)
	{
		if (id > 8)
			id = 0;
		if (id_max > 8)
			id_max = 8;
		std::cout << "> ";
		std::cin >> buffer;
		if (!buffer.compare("ADD"))
		{
			phonebook.add(id);
			id++;
		}
		else if (!buffer.compare("SEARCH"))
			std::cout << "searching contact..." << std::endl;
		else if (!buffer.compare("EXIT"))
			phonebook.ft_exit();
		else if (!buffer.compare("HELP"))
			display_help();
		if (buffer.empty())
			break;
		buffer.clear();
	}
	return (0);
}
