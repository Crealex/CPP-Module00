/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:38:17 by alexandre         #+#    #+#             */
/*   Updated: 2025/04/11 10:47:17 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <string>

void	display_contacts(int id, std::string firstname, std::string lastname, std::string nickname)
{
	if (firstname.length() > 10)
	{
		firstname = firstname.substr(0, 9);
		firstname.append(".");
	}
	if (lastname.length() > 10)
	{
		lastname = lastname.substr(0, 9);
		lastname.append(".");
	}
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(0, 9);
		nickname.append(".");
	}
	std::cout << id << " | ";
	std::cout << std::setw(10) << firstname << " | ";
	std::cout << std::setw(10) << lastname << " | ";
	std::cout << std::setw(10) << nickname << std::endl;
}

void display_selected_contact(std::string firstname, std::string lastname, std::string nickname, std::string number, std::string darkest_secret)
{
	std::cout << BOLD << "first name :       " << RESET << firstname << std::endl;
	std::cout << BOLD << "last name :        " << RESET << lastname << std::endl;
	std::cout << BOLD << "nickname :         " << RESET << nickname << std::endl;
	std::cout << BOLD << "Phone number :     " << RESET << number << std::endl;
	std::cout << BOLD << "Darkest secret :   " << RESET << darkest_secret << std::endl;
}

void	PhoneBook::search(int id_max)
{
	int i = 0;
	int id = -1;

	while (i < id_max + 1)
	{
		display_contacts(i, this->contacts[i].get_first_name(), this->contacts[i].get_last_name(), this->contacts[i].get_nick_name());
		i++;
	}
	std::cout << "Please select an index :" << std::endl << ">> ";
	std::cin >> id;
	if (std::cin.eof())
		return ;
	if (id > id_max || std::cin.fail())
	{
		std::cout << RED << "invalid index" << RESET << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::string firstname = this->contacts[id].get_first_name();
	std::string lastname = this->contacts[id].get_last_name();
	std::string nickname = this->contacts[id].get_nick_name();
	std::string number = this->contacts[id].get_number();
	std::string darkest_secret = this->contacts[id].get_darkest_secret();
	display_selected_contact(firstname, lastname, nickname, number, darkest_secret);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string safe_getline(std::string str)
{
	std::string buffer;

	while (buffer.empty())
	{
		std::cout << str << std::endl << ">> ";
		std::getline(std::cin, buffer);
		if (std::cin.fail() || std::cin.eof())
			return (buffer);
	}
	return (buffer);
}

bool is_valid(std::string str)
{
	if (str.empty())
		return (0);
	for (long unsigned int i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

std::string safe_getline_num(std::string str)
{
	std::string buffer;

	while (buffer.empty() || !is_valid(buffer))
	{
		std::cout << str << std::endl << ">> ";
		std::getline(std::cin, buffer);
		if (std::cin.fail() || std::cin.eof())
			return (buffer);
		if (!is_valid(buffer))
			std::cout << RED << std::endl << "Please enter a valid number !" << RESET << std::endl << std::endl;
	}
	return (buffer);
}

int PhoneBook::add(int id)
{
	std::string buffer;

	buffer = safe_getline("Please enter first name :");
	if (buffer.empty())
		return (0);
	this->contacts[id].set_first_name(buffer);
	std::cout << "First name  : " << BOLD << buffer << RESET << GREEN << " saved !" << RESET << std::endl << std::endl;
	buffer = safe_getline("Please enter last name :");
	if (buffer.empty())
		return (0);
	this->contacts[id].set_last_name(buffer);
	std::cout << "Last name  : " << BOLD << buffer << RESET << GREEN << " saved !" << RESET << std::endl << std::endl;
	buffer = safe_getline("Please enter nickname :");
	if (buffer.empty())
		return (0);
	this->contacts[id].set_nick_name(buffer);
	std::cout << "Nickname  : " << BOLD << buffer << RESET << GREEN << " saved !" << RESET << std::endl << std::endl;
	buffer = safe_getline_num("Please enter phone number");
	if (buffer.empty())
		return (0);
	this->contacts[id].set_number(buffer);
	std::cout << "Phone number  : " << BOLD << buffer << RESET << GREEN << " saved !" << RESET << std::endl << std::endl;
	buffer = safe_getline("Please enter darkest secret :");
	if (buffer.empty())
		return (0);
	this->contacts[id].set_darkest_secret(buffer);
	std::cout << "Darkest secret  : " << BOLD << buffer << RESET << GREEN << " saved !" << RESET << std::endl << std::endl;
	std::cout << GREEN << BOLD << "New contact saved !" << RESET << std::endl << std::endl;
	return (1);
}

void PhoneBook::ft_exit()
{
	std::cout << CYAN << ITALIC << "exiting and erasing all contacts, good bye !" << RESET <<std::endl;
	exit(1);
}


