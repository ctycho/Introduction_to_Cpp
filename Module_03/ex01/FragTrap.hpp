
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap {
    int     _hitPoints;
    int     _maxHitPoints;
    int     _energyPoints;
    int     _maxEnergyPoints;
    int     _level;
    std::string _name;
    int     _meleeAttackDamage;
    int     _rangedAttackDamage;
    int     _armorDamageReduction;
    int     _meleeAttackEnergy;
    int     _rangedAttackEnergy;
public:
    FragTrap();
    FragTrap(const std::string name);
    ~FragTrap();
    int    rangedAttack(std::string const & target);
    int    meleeAttack(std::string const & target);
    void   takeDamage(unsigned int amount);
    void   beRepaired(unsigned int amount);
    int    vaulthunter_dot_exe(std::string const & target);
    const std::string &getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
};

#endif
