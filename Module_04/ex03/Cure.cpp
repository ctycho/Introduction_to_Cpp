
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    setXp(0);
}

AMateria* Cure::clone() const {
    Cure *copy = new Cure(*this);
    return copy;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}
