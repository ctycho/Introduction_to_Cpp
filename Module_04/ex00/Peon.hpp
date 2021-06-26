
#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Sorcerer.hpp"
#include "Victim.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Peon : public Victim {
private:
    string  _name;
public:
    Peon(const string &name);
    ~Peon();
    void    getPolymorphed() const;
};


#endif
