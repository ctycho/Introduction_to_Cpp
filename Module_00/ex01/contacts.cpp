/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <ctycho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:06:04 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/22 20:50:56 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

Contact::Contact() {}

Contact::~Contact() {}

// GETTERS
const std::string &Contact::getFirstName() const {
    return _firstName;
}

const std::string &Contact::getLastName() const {
    return _lastName;
}

const std::string &Contact::getNickname() const {
    return _nickname;
}

const std::string &Contact::getLogin() const {
    return _login;
}

const std::string &Contact::getPostal() const {
    return _postal;
}

const std::string &Contact::getAddress() const {
    return _address;
}

const std::string &Contact::getEmail() const {
    return _email;
}

const std::string &Contact::getPhone() const {
    return _phone;
}

const std::string &Contact::getNumber() const {
    return _number;
}

const std::string &Contact::getBirthday() const {
    return _birthday;
}

const std::string &Contact::getDate() const {
    return _date;
}

const std::string &Contact::getFavoriteMeal() const {
    return _favoriteMeal;
}

const std::string &Contact::getUnderwearColor() const {
    return _underwearColor;
}

const std::string &Contact::getDarkestSecret() const {
    return _darkestSecret;
}

// SETTERS
void Contact::setFirstName(const std::string &firstName) {
    _firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
    _lastName = lastName;
}

void Contact::setNickname(const std::string &nickname) {
    _nickname = nickname;
}

void Contact::setLogin(const std::string &login) {
    _login = login;
}

void Contact::setPostal(const std::string &postal) {
    _postal = postal;
}

void Contact::setAddress(const std::string &address) {
    _address = address;
}

void Contact::setEmail(const std::string &email) {
    _email = email;
}

void Contact::setPhone(const std::string &phone) {
    _phone = phone;
}

void Contact::setNumber(const std::string &number) {
    _number = number;
}

void Contact::setBirthday(const std::string &birthday) {
    _birthday = birthday;
}

void Contact::setDate(const std::string &date) {
    _date = date;
}

void Contact::setFavoriteMeal(const std::string &favoriteMeal) {
    _favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(const std::string &underwearColor) {
    _underwearColor = underwearColor;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
    _darkestSecret = darkestSecret;
}
