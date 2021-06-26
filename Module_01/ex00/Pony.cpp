/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:18:19 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 15:18:20 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

const std::string &Pony::getName() const {
    return _name;
}

const std::string &Pony::getColor() const {
    return _color;
}

const std::string &Pony::getAge() const {
    return _age;
}

void Pony::setInfo(const std::string &name, const std::string &color, const std::string &age) {
    _name = name;
    _color = color;
    _age = age;
}
