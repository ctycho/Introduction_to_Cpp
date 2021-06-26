
#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(const std::string name);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap &copy);
    void ninjaShoebox(ClapTrap &copy);
    void ninjaShoebox(ScavTrap &copy);
};

#endif
