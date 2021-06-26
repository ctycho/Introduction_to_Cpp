//
// Created by Cavalo Tycho on 6/14/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name) {
    this->_grade = grade;
    handleExeption(this->_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
    handleExeption(this->_grade);
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("The grade is to high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("The grade is to low!");
}

void Bureaucrat::handleExeption(int grade) {
    if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::increase() {
    this->_grade -= 1;
    handleExeption(this->_grade);
}

void Bureaucrat::decrease() {
    this->_grade += 1;
    handleExeption(this->_grade);
}

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
    this->_grade = copy._grade;
    return *this;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &source) {
    out << "<" << source.getName() << ">" << ", bureaucrat grade " << "<" << source.getGrade() << ">" << std::endl;
    return out;
}