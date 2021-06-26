//
// Created by Cavalo Tycho on 6/15/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
        Form("PresidentialPardonForm", 72, 45), _target(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > 150)
        throw Form::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (executor.getGrade() > this->getGradeSign())
        throw Form::GradeForSignException();
    if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeToExtcuteException();
    std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return _target;
}
