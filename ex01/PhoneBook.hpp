/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:39:47 by atomasi           #+#    #+#             */
/*   Updated: 2025/04/09 15:48:49 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	Contact	search(int id, int id_max);
	int		add(int id);
	void	ft_exit();
};

#endif
