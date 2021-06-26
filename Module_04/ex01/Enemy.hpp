
#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy {
private:
    int     _hp;
    std::string _type;
public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};


#endif
