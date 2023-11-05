/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:29:09 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/05 17:32:25 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <unistd.h>

// Constructor 
Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Contact constructor called.\n";
}

// Destructor
Contact::~Contact(void)
{
	if (DEBUG)
		std::cout << "Contact destructor called.\n";
}

// set* : Returns 0 if the input is empty, and 1 in success.

int Contact::setFirstName()
{
	std::string tmp;

	std::cout << "\rFirst name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_FirstName = tmp;
	return (SUCCESS);
}

int	Contact::setLastName()
{
	std::string	tmp;

	std::cout << "Last name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_LastName = tmp;
	return (SUCCESS);
}

int	Contact::setNickname()
{
	std::string	tmp;

	std::cout << "Nickname : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_Nickname = tmp;
	return (SUCCESS);
}

int	Contact::setPhoneNumber()
{
	std::string	tmp;

	std::cout << "Phone number : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_PhoneNumber = tmp;
	return (SUCCESS);
}

int	Contact::setDarkestSecret()
{
	std::string	tmp;

	std::cout << "What's your darkest secret ? : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_DarkestSecret = tmp;
	return (SUCCESS);
}

// displayContactInfo : This function displays all the informations of a contact.

void	Contact::displayContactInfo()
{
	std::cout << "\nFirst name : " << this->_FirstName << std::endl;
    std::cout << "Last name : " << this->_LastName << std::endl;
    std::cout << "Phone number : " << this->_PhoneNumber << std::endl;
    std::cout << "Nickname : " << this->_Nickname << std::endl;
    std::cout << "Darkest secret : " << this->_DarkestSecret << "\n" << std::endl;
}

void	Contact::printInfoFormatRepertory(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + '.' << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << str.substr(0, 10) << "|";
	
}

// displayRepertory: This function displays the first name, last name, and nickname 
// of a contact, separated by a pipe and for 10n max.

void    Contact::displayRepertory(int Index)
{
    if (Index == 0)
        std::cout << std::endl;
    if (this->_FirstName.empty())
        std::cout << "| " << Index + 1 << "|          |          |          |\n";
    else
    {
        std::cout << "| " << Index + 1 << "|";
		printInfoFormatRepertory(this->_FirstName);
		printInfoFormatRepertory(this->_LastName);
		printInfoFormatRepertory(this->_Nickname);
		std::cout << std::endl;
    }
    if (Index == 7)
        std::cout << std::endl;
}
