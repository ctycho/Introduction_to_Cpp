
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const string &name, const string &title): _name(name), _title(title) {
    cout << _name << ", " << _title << ", is born!" << endl;
}

Sorcerer::~Sorcerer() {
    cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << endl;
}

ostream &operator << (ostream &os, Sorcerer &put) {
    os << "I am " << put.getName() << ", " << put.getTitle() << ", and I like ponies!" << endl;
    return os;
}

void Sorcerer::polymorph(const Victim &target) const {
    target.getPolymorphed();
}

const string &Sorcerer::getName() const {
    return _name;
}

const string &Sorcerer::getTitle() const {
    return _title;
}
