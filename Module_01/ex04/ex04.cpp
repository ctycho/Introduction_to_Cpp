/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:46:50 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/27 09:46:52 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int             main()
{
    std::string    s = "HI THIS IS BRAIN";
    std::string    *ptr = &s;
    std::string    &ref = s;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}

