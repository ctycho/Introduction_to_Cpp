/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:02:22 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 17:02:28 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
    std::string* panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}

int main()
{
    memoryLeak();
    while (1) {}
    return (0);
}