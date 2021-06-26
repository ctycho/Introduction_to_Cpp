//
// Created by Cavalo Tycho on 6/15/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form("ShrubberyCreationForm", 145, 137), _target(target + "_shrubbery") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char *ShrubberyCreationForm::OpenFile::what() const throw() {
    return ("Couldn't open the file.");
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > 150)
        throw Form::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (executor.getGrade() > this->getGradeSign())
        throw Form::GradeForSignException();
    if (executor.getGrade() > this->getGradeExecute())
        throw Form::GradeToExtcuteException();
    std::ofstream file(getTarget());
    if (!file.is_open())
        throw ShrubberyCreationForm::OpenFile();
    else {
        file << "         * " << std::endl;
        file << "        /|\\ " << std::endl;
        file << "       /*|O\\ "<< std::endl;
        file << "      /*/|\\*\\ " << std::endl;
        file << "     /X/O|*\\X\\ " << std::endl;
        file << "    /*/X/|\\X\\*\\ " << std::endl;
        file << "   /O/*/X|*\\O\\X\\ " << std::endl;
        file << "  /*/O/X/|\\X\\O\\*\\ " << std::endl;
        file << " /X/O/*/X|O\\X\\*\\O\\ " << std::endl;
        file << "/O/X/*/O/|\\X\\*\\O\\X\\ " << std::endl;
        file << "        |X|" << std::endl;
        file << "        |X|" << std::endl;
    }
}

const std::string &ShrubberyCreationForm::getTarget() const {
    return _target;
}
