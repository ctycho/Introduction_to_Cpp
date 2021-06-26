/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:20:24 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/26 17:20:30 by ctycho           ###   ########.fr       */
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
    Zombie();
    virtual ~Zombie();
    const std::string  &getName() const;
    void  setInfo(std::string name, std::string type);
    void  announse();
};

#endif
