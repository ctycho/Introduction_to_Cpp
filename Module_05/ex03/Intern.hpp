//
// Created by Cavalo Tycho on 6/15/21.
//

#ifndef EX00_INTERN_HPP
#define EX00_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
    struct  _tForm {
        std::string _type;
        Form *(*_createForm)(const std::string &target);
    }       _sForm[3];
public:
    Intern();
    Intern(const Intern &);
    ~Intern();
    class FormDoesntExist : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    Form *makeForm(const std::string &type, const std::string &target);
    Intern &operator = (const Intern &source);
};


#endif //EX00_INTERN_HPP
