/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <ctycho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:10:18 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/22 20:49:03 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool        isNumber(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
    return true;
}

int 		main()
{
	PhoneBook		book;
	int 			status;
	std::string 	date;
	status = 1;

	std::cout << "\033[1;32mHello, user!\033[0m" << std::endl;
	while (status)
	{
        std::cout << "\033[1;32mChoose one of the presented options (ADD, SEARCH, EXIT)\033[0m" << std::endl;
		getline(std::cin, date);
		if (std::cin.eof()) {
		    status = 0;
        }
		if (std::strcmp("ADD", date.c_str()) == 0 && book._count < 8)
				book.ADD();
		else if (std::strcmp("ADD", date.c_str()) == 0)
			std::cout << "\033[1;31mYou've added maximum numbers of contacts!\033[0m" << std::endl;
		else if (std::strcmp("SEARCH", date.c_str()) == 0)
        {
            book.SEARCH();
            std::cout << "\033[0;36mWrite index of the person that you want to get full information\033[0m" << std::endl;
            getline(std::cin, date);
            if (std::cin.eof()) {
                status = 0;
            }
            if (isNumber(date) && stoi(date) <= book._count)
                book.display_info(stoi(date));
            else
                std::cout << "\033[1;31mThere is no such a person!\033[0m" << std::endl;
        }
		else if (std::strcmp("EXIT", date.c_str()) == 0)
		{
			std::cout << "\033[1;32mBuy!\033[0m\n";
			status = 0;
		}
	}
	return (0);
}