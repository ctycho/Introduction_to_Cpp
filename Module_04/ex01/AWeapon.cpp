
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apCost, int damage) : _name(name) {
    _apCost = apCost;
    _damage = damage;
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(const AWeapon &copy) {
    *this = copy;
}

AWeapon & AWeapon::operator=(AWeapon const &copy) {
    this->_name = copy._name;
    this->_damage = copy._damage;
    this->_apCost = copy._apCost;
    return *this;
}

int AWeapon::getAPCost() const {
    return _apCost;
}
int AWeapon::getDamage() const {
    return _damage;
}

std::string AWeapon::getName() const {
    return _name;
}
