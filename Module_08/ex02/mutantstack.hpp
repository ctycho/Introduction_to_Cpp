//
// Created by Cavalo Tycho on 6/25/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
private:

public:
    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack &source) { *this = source; };
    MutantStack &operator = (const MutantStack &source) { (void)source; };
    virtual ~MutantStack() {};
    class iterator;
    iterator begin() { return &this->top(); };
    iterator end() {
        iterator tmp = &this->top();
        for (size_t i = 0; i < this->size(); ++i)
            ++tmp;
        return tmp;
    }
    class iterator {
    private:
        T   *curIter;
    public:
        iterator(T *first) : curIter(first) {};
        T &operator++(int) {return (*(curIter--)); };
        T &operator--(int) {return (*(curIter++)); };
        T &operator++() {return (*(curIter--)); };
        T &operator--() {return (*(curIter++)); };
        bool operator!=(const iterator &it) { return (curIter != it.curIter); };
        bool operator==(const iterator &it) { return (curIter == it.curIter); };
        T &operator*() { return (*curIter); };
    };
};


#endif //EX02_MUTANTSTACK_HPP
