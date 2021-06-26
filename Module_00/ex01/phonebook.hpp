/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:07:26 by ctycho            #+#    #+#             */
/*   Updated: 2021/05/24 13:07:31 by ctycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contacts.hpp"

class	PhoneBook
{
public:
    static int 		_count;
    Contact			list[8];
    void 			ADD();
    void			SEARCH();
    void            display_info(int index);
};


#endif
