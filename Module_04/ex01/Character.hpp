
#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
    int _AP;
    std::string _name;
    AWeapon     *_weapon;

public:
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;
};

std::ostream &operator << (std::ostream &out, Character const &character);

#endif
