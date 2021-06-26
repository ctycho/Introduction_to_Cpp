//
// Created by Cavalo Tycho on 6/13/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif //EX03_ICE_HPP
