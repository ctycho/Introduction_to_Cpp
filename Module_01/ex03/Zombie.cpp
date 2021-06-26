/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:20:36 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 17:20:37 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    srand(time(0));
};

Zombie::~Zombie() {
};

const std::string  &Zombie::getName() const {
    return _name;
};

void    Zombie::setInfo(std::string name, std::string type)
{
    _name = name;
    _type = type;
}

void  Zombie::announse() {
    std::cout << "<" << _name << " " << "(" << _type << ")" << ">" << " ";
    std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

