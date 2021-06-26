//
// Created by Cavalo Tycho on 6/25/21.
//

#include "span.hpp"

Span::Span(size_t n) : _n(n) {}

Span::Span(const Span &source) {
    this->_n = source._n;
    this->_myVector = source._myVector;
    this->_sorted = source._sorted;
}

Span &Span::operator=(const Span &source) {
    if (this == &source)
        return *this;
    this->_n = source._n;
    this->_myVector = source._myVector;
    this->_sorted = source._sorted;
    return *this;
}

Span::~Span() {}

void Span::addNumber(size_t num) {
    if (_n)
        _myVector.push_back(num);
    else
        throw maxNumbers();
    _n -= 1;
}

size_t Span::shortestSpan() {
    size_t tmp;
    size_t res;

    if (_myVector.size() > 1) {
        _sorted = _myVector;
        std::sort(_sorted.begin(), _sorted.end());
        res = _sorted[1] - _sorted[0];
        for (size_t i = 1; i < _sorted.size() - 1; ++i) {
            tmp = _sorted[i + 1] - _sorted[i];
            if (tmp < res)
                res = tmp;
        }
    }
    else {
        throw toFewNumbers();
    }
    return res;
}

size_t Span::longestSpan() {
    if (_myVector.size() > 1) {
        _sorted = _myVector;
        std::sort(_sorted.begin(), _sorted.end());
        return _sorted[_sorted.size() - 1] - _sorted[0];
    }
    else
        throw toFewNumbers();
}

size_t Span::getN() const {
    return _n;
}

const char* Span::maxNumbers::what() const throw() {
    return "You've added max numbers!";
}

const char* Span::toFewNumbers::what() const throw() {
    return "Not enough parametrs to act!";
}
