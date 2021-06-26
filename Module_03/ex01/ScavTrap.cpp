
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    srand(time(0));
    std::cout << "The ScavTrap id ready to start!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): _name(name) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    this->_meleeAttackEnergy = 15;
    this->_rangedAttackEnergy = 10;
}

ScavTrap::~ScavTrap() {
    std::cout << "The game(ScavTrap) for " << getName() << " is over!" << std::endl;
}

int    ScavTrap::rangedAttack(const std::string &target) {
    if (_energyPoints - _rangedAttackEnergy < 0)
    {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else
    {
        _energyPoints -= _rangedAttackEnergy;
        std::cout << "FR4G-TP " << _name;
        std::cout << " attacks " << target;
        std::cout << " at range, causing " << _rangedAttackDamage;
        std::cout << " points of damage!" << std::endl;
        return (_rangedAttackDamage);
    }
}

int    ScavTrap::meleeAttack(const std::string &target) {
    if (_energyPoints - _meleeAttackEnergy < 0)
    {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else
    {
        _energyPoints -= _meleeAttackEnergy;
        std::cout << "FR4G-TP " << _name;
        std::cout << " attacks " << target;
        std::cout << " at melee, causing " << _meleeAttackDamage;
        std::cout << " points of damage!" << std::endl;
        return (_meleeAttackDamage);
    }
}

void    ScavTrap::takeDamage(unsigned int amount) {
    _hitPoints = _hitPoints - amount - _armorDamageReduction;
    if (_hitPoints <= 0)
    {
        std::cout << getName() << " was killed!" << std::endl;
        _hitPoints = 0;
    }
    else
        std::cout << getName() << " has got a " << amount << " damage" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount) {
    _hitPoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    _energyPoints += amount;
    if (_energyPoints > _maxEnergyPoints)
        _energyPoints = _maxEnergyPoints;
    std::cout << getName() << " up " << amount << " of health" << std::endl;
    std::cout << getName() << " has filled up " << amount << " of energy" << std::endl;
}

int     ScavTrap::challengeNewcomer(std::string const & target) {
    if (_energyPoints - 25 <= 0) {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else {
        _energyPoints -= 25;
        std::string attack[] = {
                " sailing on a boat",
                " aiming the target ",
                " throwing a cup ",
                " trying to leave him without oxygen ",
                " breaking the bones "
        };
        std::string defense[] = {
                " keeps position",
                " hiding",
                " running",
                " escaping",
                " getting scared"
        };
        std::cout << getName() << attack[rand() % 5];
        std::cout << target << defense[rand() % 5];
        return (30);
    }
}

const std::string &ScavTrap::getName() const {
    return _name;
}

int ScavTrap::getHitPoints() const {
    return _hitPoints;
}

int ScavTrap::getEnergyPoints() const {
    return _energyPoints;
}
