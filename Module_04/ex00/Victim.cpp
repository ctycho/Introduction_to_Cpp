
#include "Victim.hpp"

Victim::Victim(const string &name): _name(name) {
    cout << "Some random victim called " << _name << " just appeared!" << endl;
}

Victim::~Victim() {
    cout << "Victim " << _name << " just died for no apparent reason!" << endl;
}

ostream &operator << (ostream &os, Victim &put) {
    os << "I am " << put.getName()  << " and I like otters!" << endl;
    return os;
}

void    Victim::getPolymorphed() const {
    cout << _name << " has been turned into a cute little sheep!" << endl;
}

const string &Victim::getName() const {
    return _name;
}
