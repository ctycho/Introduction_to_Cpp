/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:58:01 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 09:58:03 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    srand(time(0));
};

ZombieEvent::~ZombieEvent() {};

void        ZombieEvent::setZombieType(std::string zombieType) {
    _type = zombieType;
};

Zombie*     ZombieEvent::newZombie(std::string name) {
    return (new Zombie(name, this->_type));
}

Zombie*        ZombieEvent::randomChump() {
    std::string type[6] = {
            "Smart", "Silly", "Thin", "Ugly", "Thin", "Dirty"
    };
    std::string names[6] = {
            "Mike", "John", "Derek", "Alvaro", "Alex", "Tom"
    };
    setZombieType(type[rand() % 6]);
    Zombie *zombie = newZombie(names[rand() % 6]);
    zombie->announse();
    return zombie;
};

