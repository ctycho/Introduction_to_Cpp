
#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}

void AMateria::setXp(unsigned int xp) {
    _xp = xp;
}

void AMateria::use(ICharacter& target) {
    (void)target;
    this->_xp += 10;
}
