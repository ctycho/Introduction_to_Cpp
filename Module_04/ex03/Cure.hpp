//
// Created by Cavalo Tycho on 6/13/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif //EX03_CURE_HPP
