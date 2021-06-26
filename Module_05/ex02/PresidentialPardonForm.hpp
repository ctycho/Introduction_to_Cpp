//
// Created by Cavalo Tycho on 6/15/21.
//

#ifndef EX00_PRESIDENTIALPARDONFORM_HPP
#define EX00_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    const std::string _target;
public:
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
    const std::string &getTarget() const;
};


#endif //EX00_PRESIDENTIALPARDONFORM_HPP
