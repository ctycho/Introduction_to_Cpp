/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:57:55 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 09:57:57 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string     _type;
public:
    ZombieEvent();
    virtual ~ZombieEvent();
    void    setZombieType(std::string zombieType);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
};

#endif
