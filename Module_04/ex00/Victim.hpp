
#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Victim {
private:
    string _name;
    Victim();
public:
    Victim(const std::string &name);
    ~Victim();
    virtual void    getPolymorphed() const;
    const string &getName() const;
};

ostream &operator << (ostream &os, Victim &put);


#endif

