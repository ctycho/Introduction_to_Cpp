//
// Created by Cavalo Tycho on 6/17/21.
//

#include "Converter.hpp"

Converter::Converter(const std::string &strConvert) : _strConvert(strConvert) {}

Converter::Converter(const Converter &copy) {
    this->_strConvert = copy._strConvert;
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &source) {
    if (this == &source)
        return *this;
    this->_strConvert = source._strConvert;
    return *this;
}

void Converter::toChar() {
    std::cout << "char: ";
    try {
        char c = static_cast<char>(std::stoi(_strConvert, NULL));
        if (std::isprint(c))
            std::cout << c << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::toInt() {
    std::cout << "int: ";
    try {
        int c = static_cast<int>(std::stoi(_strConvert, NULL));
        std::cout << c << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::toFloat() {
    std::cout << "float: ";
    try {
        float c = static_cast<float>(std::stof(_strConvert, NULL));
        std::cout << std::fixed;
        std::cout << std::setprecision(1) << c << "f" << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::toDouble() {
    std::cout << "double: ";
    try {
        double c = static_cast<double>(std::stof(_strConvert, NULL));
        std::cout << std::fixed;
        std::cout << std::setprecision(1) << c << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::action() {
    this->toChar();
    this->toInt();
    this->toFloat ();
    this->toDouble();
}
