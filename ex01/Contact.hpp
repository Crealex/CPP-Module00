/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:36:51 by atomasi           #+#    #+#             */
/*   Updated: 2025/03/31 10:06:24 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP
# include "Main.hpp"

class Contact
{
private :
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	darkest_secret;
public:
	void	set_first_name(std::string first_name);
	void	set_last_name(std::string last_name);
	void	set_nick_name(std::string nickname);
	void	set_number(std::string number);
	void	set_darkest_secret(std::string darkest_secret);
};

#endif