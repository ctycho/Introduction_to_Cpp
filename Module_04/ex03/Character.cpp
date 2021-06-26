
#include "Character.hpp"

Character::Character(std::string name) : _name(name), _equipCount(0) {
    for (int i = 0; i < 4; ++i)
        this->_equipment[i] = nullptr;
}

Character::Character(const Character &source) {
    this->_name = source._name;
    this->_equipCount = source._equipCount;
    for (int i = 0; i < this->_equipCount; ++i) {
        if (source._equipment[i]) {
            this->_equipment[i] = source._equipment[i]->clone();
            std::cout << source._equipment[i]->clone() << std::endl;
            std::cout << this->_equipment[i] << std::endl;
        }
        else {
            this->_equipment[i] = nullptr;
        }
    }
}


Character::~Character() {
}

std::string const &Character::getName() const {
    return this->_name;
}

void    Character::equip(AMateria* material) {
    if (this->_equipCount == 4 || !material)
        return ;
    for (int i = 0; i < this->_equipCount; ++i)
        if (this->_equipment[i] == material)
            return ;
    this->_equipment[this->_equipCount] = material;
    this->_equipCount += 1;
}

void    Character::unequip(int idx) {
    for (int i = idx; i < 3; ++i) {
        this->_equipment[i] = this->_equipment[i + 1];
    }
    this->_equipment[this->_equipCount] = nullptr;
    this->_equipCount -= 1;
}

void    Character::use(int idx, ICharacter& target) {
    if (idx <= this->_equipCount) {
        this->_equipment[idx]->use(target);
    }
}

Character &Character::operator=(const Character &source) {
    std::cout << "Over there!" << std::endl;
    if (this == &source)
        return *this;
    for (int i = 0; i < 4; ++i)
        this->_equipment[i] = nullptr;
    this->_name = source._name;
    this->_equipCount = source._equipCount;
    for (int i = 0; i < this->_equipCount; ++i) {
        if (source._equipment[i]) {
            this->_equipment[i] = source._equipment[i]->clone();
            std::cout << source._equipment[i]->clone() << std::endl;
            std::cout << this->_equipment[i] << std::endl;
        }
        else {
            this->_equipment[i] = nullptr;
        }
    }
    return *this;
}

