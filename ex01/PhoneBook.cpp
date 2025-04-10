/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:38:17 by alexandre         #+#    #+#             */
/*   Updated: 2025/04/09 16:03:43 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <string>

void	display_contacts(std::string id, std::string firstname, std::string lastname, std::string nickname)
{
	if (firstname.length() > 10)
	{
		firstname = firstname.substr(9);
		firstname.append(".");
	}
	if (lastname.length() > 10)
	{
		lastname = lastname.substr(9);
		lastname.append(".");
	}
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(9);
		nickname.append(".");
	}
	std::cout << id << " | ";
	std::cout << firstname << " | ";
	std::cout << lastname << " | ";
	std::cout << nickname << std::endl;
}

void	PhoneBook::search(int id, int id_max)
{

	int i = 0;

	while (i < id_max)
	{
		display_contacts(std::to_string(i), this->contacts[i].get_first_name(), this->contacts[i].get_last_name(), this->contacts[i].get_nick_name());
		i++;
	}
	std::cout << "Please select a index :" << std::endl;
	std::cin >> id;
	if (id > id_max)
	{
		std::cout << RED << "invalid index" << RESET << std::endl;
		return ;
	}
	std::string id_str = std::to_string(id);
	std::string firstname = this->contacts[id].get_first_name();
	std::string lastname = this->contacts[id].get_last_name();
	std::string nickname = this->contacts[id].get_nick_name();
	std::string number = this->contacts[id].get_number();
	std::string darkest_secret = this->contacts[id].get_darkest_secret();

}

int PhoneBook::add(int id)
{
	std::string buffer;

	std::cout << "Please enter first name :" << std::endl;
	std::cin >> buffer;
	this->contacts[id].set_first_name(buffer);
	std::cout << "First name  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter last name :" << std::endl;
	std::cin >> buffer;
	this->contacts[id].set_last_name(buffer);
	std::cout << "Last name  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter nickname :" << std::endl;
	std::cin >> buffer;
	this->contacts[id].set_nick_name(buffer);
	std::cout << "Nickname  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter phone number :" << std::endl;
	std::cin >> buffer;
	this->contacts[id].set_number(buffer);
	std::cout << "Phone number  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter darkest secret :" << std::endl;
	std::cin >> buffer;
	this->contacts[id].set_darkest_secret(buffer);
	std::cout << "Darkest secret  : " << buffer << " saved !" << std::endl;
	std::cout << GREEN << BOLD << "New contact saved !" << RESET << std::endl;
	return (1);
}

void PhoneBook::ft_exit()
{
	std::cout << CYAN << ITALIC << "exiting and erasing all contacts, good bye !" << RESET <<std::endl;
	exit(1);
}


