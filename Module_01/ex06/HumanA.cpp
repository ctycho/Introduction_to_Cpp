
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon): _name(name), _weapon(weapon) {

}

void    HumanA::attack() {
    std::cout << _name << " attcks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}