
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ~ScavTrap();
    int    challengeNewcomer(std::string const & target);
};

#endif
