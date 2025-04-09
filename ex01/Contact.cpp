/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:20:03 by atomasi           #+#    #+#             */
/*   Updated: 2025/04/08 18:33:48 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Main.hpp"

void Contact::set_first_name(std::string first_name)
{
	Contact::first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	Contact::last_name = last_name;
}

void Contact::set_nick_name(std::string nickname)
{
	Contact::nickname = nickname;
}

void Contact::set_number(std::string number)
{
	Contact::phone_number = number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	Contact::darkest_secret = darkest_secret;
}
