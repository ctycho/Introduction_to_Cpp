//
// Created by Cavalo Tycho on 6/14/21.
//

#ifndef EX00_FORM_HPP
#define EX00_FORM_HPP

#include <exception>
#include <stdexcept>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string _name;
    int const _gradeSign;
    int const _gradeExecute;
    bool      _sign;
public:
    Form(std::string const &name, int const gradeSign, int const gradeExecute);
    Form(const Form &);
    ~Form();
    class GradeTooHighException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeForSignException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class AlreadySignedException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    void beSigned(Bureaucrat *ptr);
    const std::string &getName() const;
    bool isSign() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    Form &operator = (const Form &);
};

std::ostream &operator<<(std::ostream &out, const Form &source);


#endif //EX00_FORM_HPP
