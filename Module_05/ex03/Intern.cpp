//
// Created by Cavalo Tycho on 6/15/21.
//

#include "Intern.hpp"

Form *createPresidentialPardon(const std::string &target) {
    return (new PresidentialPardonForm(target));
}

Form *createRobotomyRequest(const std::string &target) {
    return (new RobotomyRequestForm(target));
}

Form *createShrubbery(const std::string &target) {
    return (new ShrubberyCreationForm(target));
}

Intern::Intern() {
    _sForm[0]._type = "PresidentialPardonForm";
    _sForm[0]._createForm = &createPresidentialPardon;
    _sForm[1]._type = "RobotomyRequestForm";
    _sForm[1]._createForm = &createRobotomyRequest;
    _sForm[2]._type = "ShrubberyCreationForm";
    _sForm[2]._createForm = &createShrubbery;
}

Intern::Intern(const Intern &copy) {
    (void)copy;
}

Intern::~Intern() {}


Form *Intern::makeForm(const std::string &form, const std::string &target) {
    for (int i = 0; i < 3; ++i) {
        if (form == _sForm[i]._type) {
            Form *form = _sForm[i]._createForm(target);
            std::cout << "Intern creats " << target << std::endl;
            return form;
        }
    }
    throw FormDoesntExist();
}

Intern &Intern::operator = (const Intern &source) {
    (void)source;
    return (*this);
}

const char *Intern::FormDoesntExist::what() const throw() {
    return ("Form doesn't exist!");
}
