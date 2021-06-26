/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:07:15 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 13:07:20 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int PhoneBook::_count=0;

void 		PhoneBook::ADD()
{
    std::string 	date;

    std::cout << "What is your first name?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setFirstName(date);
    std::cout << "What is your last name?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setLastName(date);
    std::cout << "What is your nickname?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setNickname(date);
    std::cout << "What is your login?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setLogin(date);
    std::cout << "What is your postal?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setPostal(date);
    std::cout << "What is your address?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setAddress(date);
    std::cout << "What is your email?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setEmail(date);
    std::cout << "What is your phone?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setPhone(date);
    std::cout << "What is your phone number?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setNumber(date);
    std::cout << "When is your birthday?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setBirthday(date);
    std::cout << "Write down current day?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setDate(date);
    std::cout << "What is your favourite meal?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setFavoriteMeal(date);
    std::cout << "What is your under wear color?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setUnderwearColor(date);
    std::cout << "What is your darkest secret?\n";
    getline(std::cin, date);
    if (std::cin.eof()) {
        exit(0);
    }
    list[_count].setDarkestSecret(date);
    _count++;
}

void 		PhoneBook::SEARCH()
{
    std::cout.width(10);
    std::cout << "index" << "|";
    std::cout.width(10);
    std::cout << "first name" << "|";
    std::cout.width(10);
    std::cout << "last name" << "|";
    std::cout.width(10);
    std::cout << "nickname" << "|" << std::endl;
    for (int index = 0; index < _count; ++index) {
        std::cout.width(10);
        std::cout << index + 1 << "|";
        std::cout.width(10);
        if (list[index].getFirstName().length() > 10)
            std::cout << list[index].getFirstName().substr(0, 9) + ".|";
        else
            std::cout << list[index].getFirstName() << "|";

        std::cout.width(10);
        if (list[index].getLastName().length() > 10)
            std::cout << list[index].getLastName().substr(0, 9) + ".|";
        else
            std::cout << list[index].getLastName() << "|";

        std::cout.width(10);
        if (list[index].getNickname().length() > 10)
            std::cout << list[index].getNickname().substr(0, 9) + ".|";
        else
            std::cout << list[index].getNickname() << "|";
        std::cout << std::endl;
    }
}

void        PhoneBook::display_info(int index) {
    if (index == 0)
    {
        std::cout << "\033[1;31mThere is no such a person!\033[0m" << std::endl;
        return ;
    }
    std::cout << "The first name: ";
    std::cout << list[index - 1].getFirstName() << std::endl;
    std::cout << "The last name: ";
    std::cout << list[index - 1].getLastName() << std::endl;
    std::cout << "The nickname: ";
    std::cout << list[index - 1].getNickname() << std::endl;
    std::cout << "The login: ";
    std::cout << list[index - 1].getLogin() << std::endl;
    std::cout << "The postal: ";
    std::cout << list[index - 1].getPostal() << std::endl;
    std::cout << "The adress: ";
    std::cout << list[index - 1].getAddress() << std::endl;
    std::cout << "The email: ";
    std::cout << list[index - 1].getEmail() << std::endl;
    std::cout << "The phone: ";
    std::cout << list[index - 1].getPhone() << std::endl;
    std::cout << "The phone number: ";
    std::cout << list[index - 1].getNumber() << std::endl;
    std::cout << "The birthday: ";
    std::cout << list[index - 1].getBirthday() << std::endl;
    std::cout << "The date: ";
    std::cout << list[index - 1].getDate() << std::endl;
    std::cout << "The favourite meal: ";
    std::cout << list[index - 1].getFavoriteMeal() << std::endl;
    std::cout << "The underwear color: ";
    std::cout << list[index - 1].getUnderwearColor() << std::endl;
    std::cout << "The darkest secret: ";
    std::cout << list[index - 1].getDarkestSecret() << std::endl;

}