
#include "FragTrap.hpp"

FragTrap::FragTrap() {
    srand(time(0));
    std::cout << "The FragTrap id ready to start!" << std::endl;
}

FragTrap::FragTrap(const std::string name) {
    setName(name);
    setHitPoints(100);
    setMaxHitPoints(100);
    setEnergyPoints(100);
    setMaxEnergyPoints(100);
    setLevel(1);
    setMeleeAttackDamage(30);
    setRangedAttackDamage(20);
    setArmorDamageReduction(5);
    setMeleeAttackEnergy(20);
    setRangedAttackEnergy(15);
}

FragTrap::~FragTrap() {
    std::cout << "The game(FragTrap) for " << getName() << " is over!" << std::endl;
}

int     FragTrap::vaulthunter_dot_exe(std::string const & target) {
    int enPoints;

    enPoints = getEnergyPoints();
    if (enPoints - 25 <= 0) {
        std::cout << getName() << " is out of energy!" << std::endl;
        return (0);
    }
    else {
        enPoints -= 25;
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
