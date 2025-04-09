/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:39:47 by atomasi           #+#    #+#             */
/*   Updated: 2025/04/08 18:38:54 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Main.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	Contact	search(int id);
	int		add(int id);
	void	exit();
};

#endif
