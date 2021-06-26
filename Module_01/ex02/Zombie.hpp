/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:57:44 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 09:57:46 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string     _name;
    std::string     _type;
public:
    Zombie(std::string &name, std::string &type);
    virtual ~Zombie();
    const std::string  &getName() const;
    const std::string  &getType() const;
    void  announse();
};

#endif
