
#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    int     _equipCount;
    AMateria    *_equipment[4];
public:
    Character(std::string name);
    Character(const Character &);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    Character &operator=(const Character &ch);
};


#endif //EX03_CHARACTER_HPP
