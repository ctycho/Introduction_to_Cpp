#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int         main() {
//    FragTrap    start;
//    FragTrap    ft_1("Tom");
//    FragTrap    ft_2("Boris");
//    FragTrap    ft_3("Aram");
//
//    ScavTrap    st_start;
//    ScavTrap    st_1("Red");
//    ScavTrap    st_2("Restler");
//    ScavTrap    st_3("Navabi");
//    ClapTrap    ct_1("Dominik");
//    NinjaTrap   nt_1("Naruto");

    SuperTrap   top("Reddington");

//    ft_1.takeDamage(ft_2.rangedAttack(ft_1.getName()));
//    ft_2.takeDamage(ft_1.meleeAttack(ft_2.getName()));
//    ft_1.takeDamage(ft_3.rangedAttack(ft_1.getName()));
//    ft_1.beRepaired(10);
//    ft_2.beRepaired(20);
//    ft_2.takeDamage(ft_1.vaulthunter_dot_exe(ft_2.getName()));
//    ft_3.takeDamage(ft_2.vaulthunter_dot_exe(ft_3.getName()));
//    ft_1.takeDamage(ft_2.vaulthunter_dot_exe(ft_1.getName()));
//    ft_1.takeDamage(ft_2.vaulthunter_dot_exe(ft_1.getName()));
//    ft_3.takeDamage(ft_2.meleeAttack(ft_3.getName()));
//    ft_3.takeDamage(ft_2.vaulthunter_dot_exe(ft_3.getName()));
//
//    std::cout << "<+===========+>" << std::endl;
//
//    st_1.takeDamage(st_2.rangedAttack(st_1.getName()));
//    st_2.takeDamage(st_1.meleeAttack(st_2.getName()));
//    st_1.takeDamage(st_3.rangedAttack(st_1.getName()));
//    st_1.beRepaired(10);
//    st_2.beRepaired(20);
//    st_2.takeDamage(st_1.challengeNewcomer(st_2.getName()));
//    st_3.takeDamage(st_2.challengeNewcomer(st_3.getName()));
//    st_1.takeDamage(st_2.challengeNewcomer(st_1.getName()));
//    st_1.takeDamage(st_2.challengeNewcomer(st_1.getName()));
//    st_3.takeDamage(st_2.meleeAttack(st_3.getName()));
//    st_3.takeDamage(st_2.challengeNewcomer(st_3.getName()));
//
//    std::cout << "<+===========+>" << std::endl;
//
//    std::cout << nt_1.getName() << std::endl;
//    nt_1.ninjaShoebox(ft_1);
//    nt_1.ninjaShoebox(st_1);
//    nt_1.ninjaShoebox(ct_1);

    std::cout << "<+===========+>" << std::endl;
    top.printParams();

    return 0;
}
