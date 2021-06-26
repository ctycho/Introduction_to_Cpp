
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name) {
    std::cout << "ClapTrap constructor called!" << std::endl;
    _hitPoints = 0;
    _maxHitPoints = 0;
    _energyPoints = 0;
    _maxEnergyPoints = 0;
    _level = 0;
    _meleeAttackDamage = 0;
    _rangedAttackDamage = 0;
    _armorDamageReduction = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called!" << std::endl;
}

int    ClapTrap::rangedAttack(const std::string &target) {
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

int    ClapTrap::meleeAttack(const std::string &target) {
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

void    ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints = _hitPoints - amount - _armorDamageReduction;
    if (_hitPoints <= 0)
    {
        std::cout << getName() << " was killed!" << std::endl;
        _hitPoints = 0;
    }
    else
        std::cout << getName() << " has got a " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    _hitPoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    _energyPoints += amount;
    if (_energyPoints > _maxEnergyPoints)
        _energyPoints = _maxEnergyPoints;
    std::cout << getName() << " up " << amount << " of health" << std::endl;
    std::cout << getName() << " has filled up " << amount << " of energy" << std::endl;
}


int ClapTrap::getHitPoints() const {
    return _hitPoints;
}

int ClapTrap::getMaxHitPoints() const {
    return _maxHitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}

int ClapTrap::getMaxEnergyPoints() const {
    return _maxEnergyPoints;
}

int ClapTrap::getLevel() const {
    return _level;
}

const std::string &ClapTrap::getName() const {
    return _name;
}

int ClapTrap::getMeleeAttackDamage() const {
    return _meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage() const {
    return _rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction() const {
    return _armorDamageReduction;
}

int ClapTrap::getMeleeAttackEnergy() const {
    return _meleeAttackEnergy;
}

int ClapTrap::getRangedAttackEnergy() const {
    return _rangedAttackEnergy;
}

void ClapTrap::setHitPoints(int hitPoints) {
    _hitPoints = hitPoints;
}

void ClapTrap::setMaxHitPoints(int maxHitPoints) {
    _maxHitPoints = maxHitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    _energyPoints = energyPoints;
}

void ClapTrap::setMaxEnergyPoints(int maxEnergyPoints) {
    _maxEnergyPoints = maxEnergyPoints;
}

void ClapTrap::setLevel(int level) {
    _level = level;
}

void ClapTrap::setName(const std::string &name) {
    _name = name;
}

void ClapTrap::setMeleeAttackDamage(int meleeAttackDamage) {
    _meleeAttackDamage = meleeAttackDamage;
}

void ClapTrap::setRangedAttackDamage(int rangedAttackDamage) {
    _rangedAttackDamage = rangedAttackDamage;
}

void ClapTrap::setArmorDamageReduction(int armorDamageReduction) {
    _armorDamageReduction = armorDamageReduction;
}

void ClapTrap::setMeleeAttackEnergy(int meleeAttackEnergy) {
    _meleeAttackEnergy = meleeAttackEnergy;
}

void ClapTrap::setRangedAttackEnergy(int rangedAttackEnergy) {
    _rangedAttackEnergy = rangedAttackEnergy;
}
