/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:57:15 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 09:57:17 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main() {
    Zombie       *zomb1;
    Zombie       *zomb2;
    Zombie       *zomb3;
    ZombieEvent  ZombieAct;


    zomb1 = ZombieAct.randomChump();
    delete zomb1;
    zomb2 = ZombieAct.randomChump();
    delete zomb2;
    zomb3 = ZombieAct.randomChump();
    delete zomb3;
    return 0;
}


