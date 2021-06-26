#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void        scav_class()
{
    ScavTrap    start;
    ScavTrap    player_1("Tom");
    ScavTrap    player_2("Boris");
    ScavTrap    player_3("Aram");

    player_1.takeDamage(player_2.rangedAttack(player_1.getName()));
    player_2.takeDamage(player_1.meleeAttack(player_2.getName()));
    player_1.takeDamage(player_3.rangedAttack(player_1.getName()));
    player_1.beRepaired(10);
    player_2.beRepaired(20);
    player_2.takeDamage(player_1.challengeNewcomer(player_2.getName()));
    player_3.takeDamage(player_2.challengeNewcomer(player_3.getName()));
    player_1.takeDamage(player_2.challengeNewcomer(player_1.getName()));
    player_1.takeDamage(player_2.challengeNewcomer(player_1.getName()));
    player_3.takeDamage(player_2.meleeAttack(player_3.getName()));
    player_3.takeDamage(player_2.challengeNewcomer(player_3.getName()));
}

void        frag_class()
{
    FragTrap    start;
    FragTrap    player_1("Tom");
    FragTrap    player_2("Boris");
    FragTrap    player_3("Aram");

    player_1.takeDamage(player_2.rangedAttack(player_1.getName()));
    player_2.takeDamage(player_1.meleeAttack(player_2.getName()));
    player_1.takeDamage(player_3.rangedAttack(player_1.getName()));
    player_1.beRepaired(10);
    player_2.beRepaired(20);
    player_2.takeDamage(player_1.vaulthunter_dot_exe(player_2.getName()));
    player_3.takeDamage(player_2.vaulthunter_dot_exe(player_3.getName()));
    player_1.takeDamage(player_2.vaulthunter_dot_exe(player_1.getName()));
    player_1.takeDamage(player_2.vaulthunter_dot_exe(player_1.getName()));
    player_3.takeDamage(player_2.meleeAttack(player_3.getName()));
    player_3.takeDamage(player_2.vaulthunter_dot_exe(player_3.getName()));
}

int         main() {
    frag_class();
    scav_class();
//    FragTrap    player_1("Tom");
//    std::cout << player_1.getName() << std::endl;
    return 0;
}
