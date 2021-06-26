
#include "Character.hpp"

Character::Character(std::string const & name): _AP(40), _name(name), _weapon(nullptr) {
}

Character::~Character() {
    std::cout << "Character: Destructor called" << std::endl;
}

void    Character::equip(AWeapon *weapon) {
    _weapon = weapon;
}

void    Character::attack(Enemy *enemy) {
    if (!enemy || !this->_weapon)
        return ;
    if (_AP >= _weapon->getAPCost())
    {
        _AP -= _weapon->getAPCost();
        std::cout << this->getName() << " attacks " << enemy->getType() << " with a ";
        std::cout << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
    }
    if (enemy->getHP() < 0)
        delete enemy;
}

void    Character::recoverAP() {
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
}

std::string Character::getName() const {
    return _name;
}

int     Character::getAP() const {
    return _AP;
}

AWeapon    *Character::getWeapon() const {
    return _weapon;
}

std::ostream &operator << (std::ostream &out, Character const &ch) {
    std::cout << ch.getName() << " has " << ch.getAP();
    if (ch.getWeapon())
        std::cout << " and wields a " << ch.getWeapon()->getName() << std::endl;
    else
        std::cout << " and is unarmed" << std::endl;
    return out;
}
