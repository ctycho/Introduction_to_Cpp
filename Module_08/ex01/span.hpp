//
// Created by Cavalo Tycho on 6/25/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span {
private:
    size_t _n;
    std::vector<size_t> _myVector;
    std::vector<size_t> _sorted;
public:
    Span(size_t n);
    Span(const Span &source);
    Span &operator = (const Span &source);
    ~Span();
    void addNumber(size_t num);
    size_t shortestSpan();
    size_t longestSpan();
    size_t getN() const;
    class maxNumbers : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class toFewNumbers : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

#endif //EX01_SPAN_HPP


