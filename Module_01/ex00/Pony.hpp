/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:18:24 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 15:18:26 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
    std::string     _name;
    std::string     _color;
    std::string     _age;
public:
    const std::string &getName() const;
    const std::string &getColor() const;
    const std::string &getAge() const;
    void  setInfo(const std::string &name, const std::string &color, const std::string &age);;
};

#endif
