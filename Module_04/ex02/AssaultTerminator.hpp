
#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public  ISpaceMarine {
public:
    AssaultTerminator();
    ~AssaultTerminator();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
//    AssaultTerminator   &operator = (AssaultTerminator const &copy);
};


#endif
