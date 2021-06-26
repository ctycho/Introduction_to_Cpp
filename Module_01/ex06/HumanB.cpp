
#include "HumanB.hpp"

HumanB::HumanB(const std::string name): _name(name) {
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << _name << " attcks with his ";
    std::cout << this->_weapon->getType() << std::endl;
}