
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat fill("Fill", 130);
        std::cout << fill;
        ShrubberyCreationForm form_1("file");
        fill.executeForm(form_1);
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        Bureaucrat bob("Bob", 50);
        std::cout << bob;
        RobotomyRequestForm form_2("RPA");
        bob.executeForm(form_2);
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        Bureaucrat tom("Tom", 2);
        std::cout << tom;
        PresidentialPardonForm form_3("John Smith");
        tom.executeForm(form_3);
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}
