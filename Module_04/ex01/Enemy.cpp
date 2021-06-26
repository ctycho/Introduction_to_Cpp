
#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type) {

}

Enemy::~Enemy() {

}

void    Enemy::takeDamage(int damage) {
    _hp -= damage;
}

int     Enemy::getHP() const {
    return _hp;
}

std::string     Enemy::getType() const {
    return _type;
}
