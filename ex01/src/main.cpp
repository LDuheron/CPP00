/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:54:40 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/04 16:57:30 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::cout << std::endl << "Welcome to PhoneBook.\n" << std::endl;
    PhoneBook.run();
    return (0);
}
