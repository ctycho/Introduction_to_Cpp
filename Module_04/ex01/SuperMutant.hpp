
#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int);
};


#endif //EX01_SUPERMUTANT_HPP
