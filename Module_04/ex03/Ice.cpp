
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    setXp(0);
}

AMateria* Ice::clone() const {
    Ice *copy = new Ice(*this);
    return copy;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}
