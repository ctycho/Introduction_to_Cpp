/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:20:51 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 17:20:54 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>
#include "Zombie.hpp"


class ZombieHorde {
private:
    Zombie      *_zomb;
    int         count;
public:
    ZombieHorde() {};
    explicit ZombieHorde(int N);
    ~ZombieHorde();
};

#endif
