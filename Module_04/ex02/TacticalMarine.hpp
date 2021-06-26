
#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
    TacticalMarine();
    ~TacticalMarine();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
//    TacticalMarine &operator = (TacticalMarine const &copy);
};


#endif
