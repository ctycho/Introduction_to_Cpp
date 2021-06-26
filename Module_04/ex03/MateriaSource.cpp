
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {}

MateriaSource::~MateriaSource() {}

void    MateriaSource::learnMateria(AMateria *materia) {
    if (this->_count <= 4)
    {
        this->_materia[this->_count] = materia;
        this->_count += 1;
    }
}

AMateria   *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < this->_count; ++i) {
        if (this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    }
    return nullptr;
}

//MateriaSource &MateriaSource::operator = (const MateriaSource &source) {
//    std::cout << "Right here!" << std::endl;
//    return *this;
//}
