
#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include "Victim.hpp"
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Sorcerer {
private:
    string _name;
    string _title;
    Sorcerer();
public:
    Sorcerer(const string &name, const string &title);
    ~Sorcerer();
    void polymorph(const Victim &) const;
    const string &getName() const;
    const string &getTitle() const;
};

ostream &operator << (ostream &os, Sorcerer &put);

#endif
