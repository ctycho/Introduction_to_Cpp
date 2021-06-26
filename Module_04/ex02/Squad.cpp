
#include "Squad.hpp"

Squad::Squad(): _count(0), _units(nullptr) {

}

Squad::~Squad() {
    _delete();
}

Squad::Squad(const Squad &copy) {
    this->_count = copy._count;
    if (copy._units)
    {
        this->_units = new ISpaceMarine*[this->_count];
        for (int i = 0; i < this->_count; ++i)
            this->_units[i] = copy._units[i];
    }
    else
        this->_units = 0;
}

Squad &Squad::operator=(Squad const &other) {
    if (this == &other)
        return *this;
    delete [] this->_units;
    this->_count = other.getCount();
    if (other._units) {
        this->_units = new ISpaceMarine*[this->_count];
        for (int i = 0; i < this->_count; ++i) {
            this->_units[i] = other._units[i]->clone();
        }
    }
    else
        this->_units = 0;
    return *this;
}


int     Squad::getCount() const {
    return _count;
}

ISpaceMarine* Squad::getUnit(int index) const {
    if (index >= this->_count)
        return NULL;
    else
        return _units[index];
}

int     Squad::push(ISpaceMarine *unit) {
    if (!unit)
        return this->_count;
    else if (this->_units) {
        for (int i = 0; i < getCount(); ++i) {
            if (this->_units[i] == unit)
                return this->_count;
        }
        ISpaceMarine **copy = new ISpaceMarine*[getCount() + 1];
        for (int i = 0; i < getCount(); ++i) {
            copy[i] = _units[i];
        }
        copy[this->_count] = unit;
        delete [] this->_units;
        this->_units = copy;
        this->_count += 1;
    }
    else {
        this->_units = new ISpaceMarine*[1];
        this->_units[0] = unit;
        this->_count += 1;
    }
    return _count;
}
