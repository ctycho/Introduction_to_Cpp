
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap {
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
    ClapTrap();
    ~ClapTrap();
    int    rangedAttack(std::string const & target);
    int    meleeAttack(std::string const & target);
    void   takeDamage(unsigned int amount);
    void   beRepaired(unsigned int amount);
    int getHitPoints() const;
    int getMaxHitPoints() const;
    int getEnergyPoints() const;
    int getMaxEnergyPoints() const;
    int getLevel() const;
    const std::string &getName() const;
    int getMeleeAttackDamage() const;
    int getRangedAttackDamage() const;
    int getArmorDamageReduction() const;
    int getMeleeAttackEnergy() const;
    int getRangedAttackEnergy() const;
    void setHitPoints(int hitPoints);
    void setMaxHitPoints(int maxHitPoints);
    void setEnergyPoints(int energyPoints);
    void setMaxEnergyPoints(int maxEnergyPoints);
    void setLevel(int level);
    void setName(const std::string &name);
    void setMeleeAttackDamage(int meleeAttackDamage);
    void setRangedAttackDamage(int rangedAttackDamage);
    void setArmorDamageReduction(int armorDamageReduction);
    void setMeleeAttackEnergy(int meleeAttackEnergy);
    void setRangedAttackEnergy(int rangedAttackEnergy);
};


#endif
