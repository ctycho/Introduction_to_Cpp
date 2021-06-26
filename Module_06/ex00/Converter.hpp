//
// Created by Cavalo Tycho on 6/17/21.
//

#ifndef EX00_CONVERTER_HPP
#define EX00_CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <exception>
#include <string>

class Converter {
private:
    std::string   _strConvert;
    void toChar();
    void toInt();
    void toFloat();
    void toDouble();
public:
    Converter(const std::string &strConvert);
    Converter(const Converter &copy);
    ~Converter();
    Converter &operator = (const Converter &source);
    void action();
};


#endif //EX00_CONVERTER_HPP
