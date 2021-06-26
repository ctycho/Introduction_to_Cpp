
#include "FragTrap.hpp"

FragTrap::FragTrap() {
    srand(time(0));
    std::cout << "The FragTrap id ready to start!" << std::endl;
}

FragTrap::FragTrap(const std::string name): _name(name) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_meleeAttackEnergy = 20;
    this->_rangedAttackEnergy = 15;
}

FragTrap::~FragTrap() {
    std::cout << "The game(FragTrap) for " << getName() << " is over!" << std::endl;
}


int    FragTrap::rangedAttack(const std::string &target) {
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

int    FragTrap::meleeAttack(const std::string &target) {
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

void    FragTrap::takeDamage(unsigned int amount) {
    _hitPoints = _hitPoints - amount - _armorDamageReduction;
    if (_hitPoints <= 0)
    {
        std::cout << getName() << " was killed!" << std::endl;
        _hitPoints = 0;
    }
    else
        std::cout << getName() << " has got a " << amount << " damage" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount) {
    _hitPoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    _energyPoints += amount;
    if (_energyPoints > _maxEnergyPoints)
        _energyPoints = _maxEnergyPoints;
    std::cout << getName() << " up " << amount << " of health" << std::endl;
    std::cout << getName() << " has filled up " << amount << " of energy" << std::endl;
}

int     FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (_energyPoints - 25 <= 0) {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else {
        _energyPoints -= 25;
        std::string attack[] = {
                " attacks from the shadow, ",
                " trying to kill with a spoon, ",
                " attacks on a tank, ",
                " is shooting with AK-47, ",
                " has cut some pieces from enemy, "
        };
        std::string defense[] = {
                " got a damage, but still trying to win ",
                " was hurt and trying to escape from battlefield ",
                " still stays up ",
                " barely breathing ",
                " is running away "
        };
        std::cout << getName() << attack[rand() % 5];
        std::cout << target << defense[rand() % 5] << std::endl;
        return (30);
    }
}

const std::string &FragTrap::getName() const {
    return _name;
}

int FragTrap::getHitPoints() const {
    return _hitPoints;
}

int FragTrap::getEnergyPoints() const {
    return _energyPoints;
}
