//
// Created by Cavalo Tycho on 6/15/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    Form("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > 150)
        throw Form::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (executor.getGrade() > this->getGradeSign())
        throw Form::GradeForSignException();
    if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeToExtcuteException();
    std::cout << "<" << getTarget() << "> has been robotomized successfully 50% of the time." << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const {
    return _target;
}
