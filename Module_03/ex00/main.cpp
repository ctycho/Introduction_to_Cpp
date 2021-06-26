#include "FragTrap.hpp"

int main() {
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

    std::cout << "player one eneggy " << player_1.getEnergyPoints() << std::endl;
    std::cout << "player one points " << player_1.getHitPoints() << std::endl;
    std::cout << "player two energy " << player_2.getEnergyPoints() << std::endl;
    std::cout << "player two points " << player_2.getHitPoints() << std::endl;
    std::cout << "player three energy " << player_3.getEnergyPoints() << std::endl;
    std::cout << "player three points " << player_3.getHitPoints() << std::endl;
    return 0;
}
