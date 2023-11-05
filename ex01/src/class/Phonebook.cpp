/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:23 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/05 17:32:40 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Constructor
PhoneBook::PhoneBook(void)
{
	if (DEBUG)
		std::cout << "Phonebook constructor called.\n";
}

// Destructor
PhoneBook::~PhoneBook(void)
{
	if (DEBUG)
		std::cout << "Phonebook destructor called.\n";
}

void PhoneBook::search (void)
{
	int UserInput;

	for (int i = 0; i < 8; i++)
        this->contact[i].displayRepertory(i);
	std::cout << "Which user do you want to stalk ? : ";
    while (!(std::cin >> UserInput))
	{
		if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            UserInput = INVALID;
			break ;
        }
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
	if (UserInput != INVALID)
	{
		if (UserInput >= 1 && UserInput <= 8)
			this->contact[UserInput - 1].displayContactInfo();
		else
			std::cout << "This contact doesn't exist.\n";
	}
}

int	PhoneBook::AddContact(int index)
{
	if (this->contact[8].setFirstName() == SUCCESS)
		if (this->contact[8].setLastName() == SUCCESS)
			if (this->contact[8].setNickname() == SUCCESS)
				if (this->contact[8].setPhoneNumber() == SUCCESS)
					if (this->contact[8].setDarkestSecret() == SUCCESS)
					{
						this->contact[index] = this->contact[8];
						return (SUCCESS);
					}
	std::cout << "Please, complete all fields.\n";
	return (EMPTY);
}

void    PhoneBook::run(void)
{
    std::string UserInput;

	nb_contact = 0;
    while (UserInput != "EXIT")
    {
        std::cout << "\rWhat do you want to do ? (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, UserInput);
		if (nb_contact == 8)
            nb_contact = 0;
        if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        else if (UserInput == "ADD")
        {
            if (AddContact(nb_contact) == SUCCESS)
                nb_contact++;
        }
        else if (UserInput == "SEARCH")
            search();
        else if (UserInput == "EXIT")
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
    }
}
