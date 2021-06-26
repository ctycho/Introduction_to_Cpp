//
// Created by Cavalo Tycho on 6/15/21.
//

#ifndef EX00_ROBOTOMYREQUESTFORM_HPP
#define EX00_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    const std::string _target;
public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    const std::string &getTarget() const;
};


#endif //EX00_ROBOTOMYREQUESTFORM_HPP
