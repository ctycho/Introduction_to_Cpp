
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
}

NinjaTrap::NinjaTrap(const std::string name) {
    setName(name);
    setHitPoints(60);
    setMaxHitPoints(60);
    setEnergyPoints(120);
    setMaxEnergyPoints(120);
    setLevel(1);
    setMeleeAttackDamage(60);
    setRangedAttackDamage(5);
    setArmorDamageReduction(0);
    setMeleeAttackEnergy(30);
    setRangedAttackEnergy(3);
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
