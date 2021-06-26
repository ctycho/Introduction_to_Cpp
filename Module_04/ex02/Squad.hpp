
#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
    int     _count;
    ISpaceMarine    **_units;
    void    _delete() {
        for (int i = 0; i < getCount(); i++)
            delete _units[i];
        delete[] _units;
    }
public:
    Squad();
    ~Squad();
    Squad(Squad const &);
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
    Squad &operator=(Squad const &other);
};


#endif
