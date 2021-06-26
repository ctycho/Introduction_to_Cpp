
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
    std::cout << "NinjaTrap constructor called!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "NinjaTrap constructor called!" << std::endl;
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "The game(NinjaTrap) for " << getName() << " is over!" << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap &copy) {
    if (getEnergyPoints() > 40) {
        std::cout << "NNJ-TP: "	<< getName() << " What do u want me to do, " << copy.getName() << "?" << std::endl;
    }
    else {
        std::cout << getName() << " is out of energy!" << std::endl;
    }
}

void    NinjaTrap::ninjaShoebox(ClapTrap &copy) {
    if (getEnergyPoints() > 40) {
        std::cout << "NNJ-TP: "	<< getName() << " Show me what you've got, " << copy.getName() << std::endl;
    }
    else {
        std::cout << getName() << " is out of energy!" << std::endl;
    }
}

void    NinjaTrap::ninjaShoebox(ScavTrap &copy) {
    if (getEnergyPoints() > 40) {
        std::cout << "NNJ-TP: "	<< getName() << " You're gonna blow up, " << copy.getName() << std::endl;
    }
    else {
        std::cout << getName() << " is out of energy!" << std::endl;
    }
}
