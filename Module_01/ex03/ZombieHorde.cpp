/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:20:45 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 17:20:46 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
    this->count = N;
    std::string type[6] = {
            "Smart", "Silly", "Thin", "Ugly", "Thin", "Dirty"
    };
    std::string names[6] = {
            "Mike", "John", "Derek", "Alvaro", "Alex", "Tom"
    };
    this->_zomb = new Zombie[this->count];
    for (int i = 0; i < this->count; ++i)
    {
        this->_zomb[i].setInfo(names[rand() % 6], type[rand() % 6]);
        std::cout << "Zombie " << this->_zomb[i].getName() << " was born" << std::endl;
        this->_zomb[i].announse();
    }
};

ZombieHorde::~ZombieHorde() {
    for (int i = 0; i < this->count; ++i)
    {
        std::cout << "Zombie " << this->_zomb[i].getName() << " is dead" << std::endl;
    }
    delete[] _zomb;
};

