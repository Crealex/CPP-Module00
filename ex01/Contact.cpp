/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:20:03 by atomasi           #+#    #+#             */
/*   Updated: 2025/04/09 14:50:56 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "main.hpp"

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nick_name(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
	this->phone_number = number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nick_name()
{
	return (this->nickname);
}

std::string Contact::get_number()
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}
