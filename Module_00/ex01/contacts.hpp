/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <ctycho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:11:37 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/22 20:46:00 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CPP
#define CONTACTS_CPP

#include <iostream>
#include <string>

class	Contact
{
private:
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal;
	std::string		_address;
	std::string		_email;
	std::string		_phone;
	std::string		_number;
	std::string		_birthday;
	std::string		_date;
	std::string		_favoriteMeal;
	std::string		_underwearColor;
	std::string		_darkestSecret;
public:
    Contact();
    virtual ~Contact();
    const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::string &getNickname() const;
    const std::string &getLogin() const;
    const std::string &getPostal() const;
    const std::string &getAddress() const;
    const std::string &getEmail() const;
    const std::string &getPhone() const;
    const std::string &getNumber() const;
    const std::string &getBirthday() const;
    const std::string &getDate() const;
    const std::string &getFavoriteMeal() const;
    const std::string &getUnderwearColor() const;
    const std::string &getDarkestSecret() const;
    void setFirstName(const std::string &firstName);;
    void setLastName(const std::string &lastName);
    void setNickname(const std::string &nickname);
    void setLogin(const std::string &login);
    void setPostal(const std::string &postal);
    void setAddress(const std::string &address);
    void setEmail(const std::string &email);
    void setPhone(const std::string &phone);
    void setNumber(const std::string &number);
    void setBirthday(const std::string &birthday);
    void setDate(const std::string &date);
    void setFavoriteMeal(const std::string &favoriteMeal);
    void setUnderwearColor(const std::string &underwearColor);
    void setDarkestSecret(const std::string &darkestSecret);
};

#endif