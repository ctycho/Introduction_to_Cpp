
#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
    std::string _name;
    int _apCost;
    int _damage;
public:
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon(AWeapon const &);
    AWeapon &operator=(AWeapon const &copy);
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif
