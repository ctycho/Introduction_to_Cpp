//
// Created by Cavalo Tycho on 6/23/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
private:
    T *_str;
    unsigned int _n;
public:
    Array() {
        this->_n = 0;
        this->_str = NULL;
    }
    Array(unsigned int n): _str(new T[n]), _n(n) {

    }
    Array(const Array &copy) {
        this->_n = copy._n;
        if (this->_str)
            delete [] this->_str;
        this->_str = new T[this->_n];
    }
    virtual ~Array() {
        delete [] _str;
    }
    Array &operator = (const Array &source) {
        if (this == &source)
            return *this;
        if (this->_str)
            delete [] this->_str;
        this->_n = source._n;
        this->_str = new T[this->_n];
        for (int i = 0; i < this->_n; ++i)
            this->_str[i] = source._str[i];
        return *this;
    }
    T &operator [] (unsigned int index) {
        if (index >= 0 && index < this->_n)
            return this->_str[index];
        throw std::out_of_range("out of range");
    }
    T *getStr() const;
    unsigned int getN() const;
};

template<typename T>
T *Array<T>::getStr() const {
    return _str;
}

template<typename T>
unsigned int Array<T>::getN() const {
    return _n;
}

#endif //EX02_ARRAY_HPP
