/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:38:17 by alexandre         #+#    #+#             */
/*   Updated: 2025/03/31 10:15:09 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int PhoneBook::add(int id)
{
	std::string buffer;

	std::cout << "Please enter first name :" << std::endl;
	std::cin >> buffer;
	PhoneBook::contacts[id].set_first_name(buffer);
	std::cout << "First name  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter last name :" << std::endl;
	std::cin >> buffer;
	PhoneBook::contacts[id].set_last_name(buffer);
	std::cout << "Last name  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter nickname :" << std::endl;
	std::cin >> buffer;
	PhoneBook::contacts[id].set_nick_name(buffer);
	std::cout << "Nickname  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter phone number :" << std::endl;
	std::cin >> buffer;
	PhoneBook::contacts[id].set_number(buffer);
	std::cout << "Phone number  : " << buffer << " saved !" << std::endl;
	std::cout << "Please enter darkest secret :" << std::endl;
	std::cin >> buffer;
	PhoneBook::contacts[id].set_darkest_secret(buffer);
	std::cout << "Darkest secret  : " << buffer << " saved !" << std::endl;
}
