/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:57:38 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 09:57:39 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string &name, std::string &type) {
    _name = name;
    _type = type;
};

Zombie::~Zombie() {
    std::cout << this->_name << " is dead" << std::endl;
};

const std::string  &Zombie::getName() const {
    return _name;
};

const std::string  &Zombie::getType() const {
    return _type;
};

void  Zombie::announse() {
    std::cout << "<" << _name << " " << "(" << _type << ")" << ">" << " ";
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}