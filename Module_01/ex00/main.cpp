/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:18:34 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 15:18:36 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void        ponyOnTheHeap() {
    Pony    *at = new Pony();

    at->setInfo("Tay", "brown", "3");
    std::cout << "The name is " << at->getName() << std::endl;
    std::cout << "The color is " << at->getColor() << std::endl;
    std::cout << "The age is " << at->getAge() << std::endl;
    delete at;
}

void        ponyOnTheStack() {
    Pony    at;

    at.setInfo("Bur", "white", "1");
    std::cout << "The name is " << at.getName() << std::endl;
    std::cout << "The color is " << at.getColor() << std::endl;
    std::cout << "The age is " << at.getAge() << std::endl;
}

int         main()
{
    std::cout << "Memory allocation on the Heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "Memory allocation on the Stack" << std::endl;
    ponyOnTheStack();
}
