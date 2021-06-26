
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {
    SuperTrap();
public:
    SuperTrap(const std::string name);
    ~SuperTrap();
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void printParams();
};


#endif
