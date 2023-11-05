/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:55:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/05 17:24:19 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	std::string input;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
		for (int j = 1; j < argc; j++)
		{
            input = argv[j];
			for (int i = 0; i < input.length(); i++)
			{
				input[i] = toupper(input[i]);
                std::cout << input[i];
			}
		}
    }
    return (0);
}
