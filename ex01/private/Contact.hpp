/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:53:35 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/05 17:27:45 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <sstream>

# define DEBUG 0

# define INVALID -5
# define EMPTY -4
# define SUCCESS 1

class Contact {

	private:

    	std::string	_FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;

	public:

		Contact(void);
		~Contact(void);

		int		setFirstName();
		int		setLastName();
		int		setNickname();
		int		setPhoneNumber();
		int		setDarkestSecret();

		void    displayContactInfo();
		void    displayRepertory(int Index);
		void	printInfoFormatRepertory(std::string str);
};

#endif
