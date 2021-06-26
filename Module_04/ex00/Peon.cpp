
#include "Peon.hpp"

Peon::Peon(const string &name) : Victim(name) {
    cout << "Zog zog." << endl;
}

Peon::~Peon() {
    cout << "Bleuark..." << endl;
}

void    Peon::getPolymorphed() const {
    cout << Victim::getName() << " has been turned into a pink pony!" << endl;
}

ostream &operator << (ostream &os, Peon &put) {
    os << "I am " << put.getName()  << " and I like otters!" << endl;
    return os;
}
