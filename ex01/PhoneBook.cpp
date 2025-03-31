/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:38:17 by alexandre         #+#    #+#             */
/*   Updated: 2025/03/28 17:46:12 by alexandre        ###   ########.fr       */
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

}