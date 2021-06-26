
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    srand(time(0));
    std::cout << "The ScavTrap id ready to start!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) {
    setName(name);
    setHitPoints(100);
    setMaxHitPoints(100);
    setEnergyPoints(50);
    setMaxEnergyPoints(50);
    setLevel(1);
    setMeleeAttackDamage(20);
    setRangedAttackDamage(15);
    setArmorDamageReduction(3);
    setMeleeAttackEnergy(15);
    setRangedAttackEnergy(10);
}

ScavTrap::~ScavTrap() {
    std::cout << "The game(ScavTrap) for " << getName() << " is over!" << std::endl;
}

int     ScavTrap::challengeNewcomer(std::string const & target) {
    int enPoints;

    enPoints = getEnergyPoints();
    if (enPoints - 25 <= 0) {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else {
        enPoints -= 25;
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
