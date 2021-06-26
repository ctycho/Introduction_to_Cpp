/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:18:46 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/27 10:18:47 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const void        *Human::identify() const {
    return _brain.identify();
};

const Brain        &Human::getBrain() const {
    return _brain;
};