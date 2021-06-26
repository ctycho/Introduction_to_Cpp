//
// Created by Cavalo Tycho on 6/15/21.
//

#ifndef EX00_SHRUBBERYCREATIONFORM_HPP
#define EX00_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    const std::string _target;
public:
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    class OpenFile : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    const std::string &getTarget() const;
};


#endif //EX00_SHRUBBERYCREATIONFORM_HPP
