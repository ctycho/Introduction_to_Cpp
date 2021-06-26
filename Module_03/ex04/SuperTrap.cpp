
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
    std::cout << "SuperTrap constructor has made a monster named " << this->_name << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _maxHitPoints = FragTrap::_maxHitPoints;
    _energyPoints = NinjaTrap::_energyPoints;
    _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    _level = 1;
    _meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    _rangedAttackDamage = FragTrap::_rangedAttackDamage;
    std::cout << "Frag " <<  _rangedAttackDamage << std::endl;
    _armorDamageReduction = FragTrap::_armorDamageReduction;
}

void SuperTrap::printParams() {
    std::cout << "hitPoints " << _hitPoints << std::endl;
    std::cout << "maxHitPoints " << _maxHitPoints << std::endl;
    std::cout << "energyPoints " << _energyPoints << std::endl;
    std::cout << "maxEnergyPoints " << _maxEnergyPoints << std::endl;
    std::cout << "level " << _level << std::endl;
    std::cout << "meleeAttackDamage " << _meleeAttackDamage << std::endl;
    std::cout << "rangedAttackDamage " << _rangedAttackDamage << std::endl;
    std::cout << "armorDamageReduction " << _armorDamageReduction << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << "SuperTrap destructor is called!" << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target) {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
    NinjaTrap::meleeAttack(target);
}
