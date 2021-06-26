
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    FragTrap();
public:
    FragTrap(const std::string &name);
    ~FragTrap();
    int    vaulthunter_dot_exe(std::string const & target);
};

#endif
