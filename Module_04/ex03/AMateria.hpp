//
// Created by Cavalo Tycho on 6/13/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
private:
    const std::string  _type;
    unsigned int _xp;
public:
    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    void setXp(unsigned int xp);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
