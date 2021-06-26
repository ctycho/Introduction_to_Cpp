//
// Created by Cavalo Tycho on 6/14/21.
//

#include "Form.hpp"

Form::Form(std::string const &name, int const gradeSign, int const gradeExecute):
_name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
    this->_sign = false;
    if (gradeSign > 150) {
        throw Form::GradeTooLowException();
    }
    if (gradeSign < 1) {
        throw Form::GradeTooHighException();
    }
}

Form::Form(const Form &copy) :
_name(copy._name), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute), _sign(copy._sign) {
}

Form::~Form() {}

const char* Form::GradeTooHighException::what() const throw() {
    return ("The grade is to high!");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("The grade is to low!");
}

const char* Form::GradeForSignException::what() const throw() {
    return ("The grade is to low, to be able to sign this document!");
}

const char* Form::AlreadySignedException::what() const throw() {
    return ("The form has been already signed!");
}

void Form::beSigned(Bureaucrat *ptr) {
    if (this->getGradeSign() < ptr->getGrade())
        throw Form::GradeForSignException();
    if (this->isSign())
        throw Form::AlreadySignedException();
    this->_sign = true;
    ptr->signForm(this);
}

Form &Form::operator=(const Form &source) {
    this->_sign = source._sign;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &source) {
    out << "The form: <" << source.getName() << ">, has grade <";
    out << source.getGradeSign() << "> and the current status of it is ";
    if (source.isSign())
        out << "signed." << std::endl;
    else
        out << "not signed." << std::endl;
    return out;
}

const std::string &Form::getName() const {
    return _name;
}

bool Form::isSign() const {
    return _sign;
}

int Form::getGradeSign() const {
    return _gradeSign;
}

int Form::getGradeExecute() const {
    return _gradeExecute;
}
