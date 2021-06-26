
#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource {
private:
    int         _count;
    AMateria    *_materia[4];
public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
//    MateriaSource &operator = (const MateriaSource &source);
};


#endif //EX03_MATERIASOURCE_HPP
